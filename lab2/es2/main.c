#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#define R 3
#define COL 3
#define X 3

void mat_mul (int **A, int **B, int r, int x, int c, int **C);
void* t_func(void* p);
void print(int **res);
int mat1 [R][3]={{0,1,2},{3,4,5},{6,7,8}};
int mat2 [3][3]={{6,7,8},{3,4,5},{0,1,2}};

struct param{
    int i;
    int j;
    int **C;
};

int main() {
    int** res=(int**) malloc(R*sizeof(int*));
    for(int i=0;i<R;i++)
        res[i]=(int*) malloc(COL*sizeof(int));

    mat_mul((int **) mat1,(int **) mat2, R, X, COL, res );
    return 0;
}

void mat_mul (int **A, int **B, int r, int x, int c, int **C){
    struct param p [9];
    pthread_t id1, id2, id3, id4, id5, id6, id7, id8, id9;
    for (int i=0; i<R; i++){
        for (int j=0;j<COL; j++){
            p[i*COL+j].i=i;
            p[i*COL+j].j=j;
            p[i*COL+j].C=C;
        }
    }
    pthread_create(&id1, NULL, &t_func ,&p[0]);
    pthread_create(&id2, NULL, &t_func ,&p[1]);
    pthread_create(&id3, NULL, &t_func ,&p[2]);
    pthread_create(&id4, NULL, &t_func ,&p[3]);
    pthread_create(&id5, NULL, &t_func ,&p[4]);
    pthread_create(&id6, NULL, &t_func ,&p[5]);
    pthread_create(&id7, NULL, &t_func ,&p[6]);
    pthread_create(&id8, NULL, &t_func ,&p[7]);
    pthread_create(&id9, NULL, &t_func ,&p[8]);
    pthread_join(id1, NULL);
    pthread_join(id2, NULL);
    pthread_join(id3, NULL);
    pthread_join(id4, NULL);
    pthread_join(id5, NULL);
    pthread_join(id6, NULL);
    pthread_join(id7, NULL);
    pthread_join(id8, NULL);
    pthread_join(id9, NULL);
    print(C);
}

void* t_func(void* p){
    struct param par=*((struct param*) p);
    int r=par.i;
    int c=par.j;
    int res_cella=0;

    for(int j=0;j<X;j++){
        res_cella+=mat1[r][j]*mat2[j][c];
    }
    par.C[r][c]=res_cella;
    pthread_exit(NULL);
}

void print(int **res){
    for (int i=0;i<R;i++){
        for (int j=0; j<COL; j++){
            fprintf(stdout, "%d ", res[i][j]);
        }
        fprintf(stdout, "\n ");
    }
}