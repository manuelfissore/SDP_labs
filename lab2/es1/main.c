#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

struct param{
    int pos;
    pthread_t* vett;
}Param;
int n;

void * t_func(void* i){
    pthread_t id1, id2;
    struct param old, p1, p2;
    old= *((struct param*) i);

    if(old.pos==n){
        for(int j=0; j<n; j++){
            printf("%ld ", (long int) old.vett[j]);
        }
        printf("\n");
        pthread_exit(NULL);
    }

    p1.pos=old.pos+1;
    p2.pos=old.pos+1;
    p1.vett= malloc(n*sizeof(pthread_t));
    p2.vett= malloc(n*sizeof(pthread_t));
    for(int j=0; j<old.pos; j++){
        p1.vett[j]=old.vett[j];
        p2.vett[j]=old.vett[j];
    }
    //printf(" %d-> id: %ld\n", old.pos, pthread_self());
    p1.vett[old.pos]=pthread_self();
    p2.vett[old.pos]=pthread_self();

    pthread_create(&id1, NULL, t_func, &p1);
    pthread_join(id1, NULL);
    pthread_create(&id2, NULL, t_func, &p2);
    pthread_join(id2, NULL);


    pthread_exit(NULL);

}

int main(int argc, char** argv) {
    pthread_t id1, id2;
    struct param p1, p2;

    if(argc!=2){
        fprintf(stderr, "arg error");
        exit(1);
    }
    n = atoi(argv[1]);
    p1.pos=1;
    p2.pos=1;
    p1.vett= malloc( n*sizeof(pthread_t));
    p2.vett= malloc(n*sizeof(pthread_t));
    //printf(" main-> id: %ld\n", p1.pos, pthread_self());
    p1.vett[0]=pthread_self();
    p2.vett[0]=pthread_self();

    if(n<0)
        exit(1);
    pthread_create(&id1, NULL, t_func, &p1);
    pthread_join(id1, NULL);
    pthread_create(&id2, NULL, t_func, &p2);
    pthread_join(id2, NULL);
    return 0;
}
