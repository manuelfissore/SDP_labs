
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include <stdlib.h>

#define N 31
    typedef struct record_s
    {
        int numLine;
        long int reg;
        char surname[N];
        char name[N];
        int mark;
    }record_t;

    int main(int argc, char **argv ){
        char c;
        int fd, not_end=1;
        int pos=0;
        record_t r[5];
        record_t r2[5];
        int i=0;


        FILE * fp = fopen(argv[1], "r");
        int fb = open(argv[2], O_WRONLY|O_TRUNC|O_CREAT);

        while((fscanf(fp, "%d %ld %s %s %d", &(r[pos].numLine), &(r[pos].reg), r[pos].surname, r[pos].name, &(r[pos].mark)))==5) {
            printf("%s",  r[pos].name);
            write(fb, &r[pos], sizeof(record_t));
            pos++;
        }
        fclose(fp);
        close(fb);
        fflush(fp);
        int fb1 = open(argv[2],O_RDONLY);
        fp = fopen(argv[3],"w");

        do{
            not_end=read(fb1,&r2[i], sizeof(record_t));
            if (not_end){
                fprintf(fp, "%d %ld %s %s %d\n", r2[i].numLine, r2[i].reg, r2[i].surname, r2[i].name, r2[i].mark);
                i++;
            }
        } while(not_end);
        return 0;
    }

