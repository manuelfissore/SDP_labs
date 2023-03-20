
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

#define N 31

typedef struct record_s{
    int numLine;
    long int reg;
    char surname[N];
    char name[N];
    int mark;
    struct record_s *next;
} record_t;

int main(int argc, char **argv ) {
    char input_char;
    int fd, not_end = 1;
    int input_int = 0;
    record_t *r;
    record_t *tmp;
    record_t *head;
    int i = 0, found = 1, n = 0;
    head = NULL;
    tmp = (record_t *) malloc(1 * sizeof(record_t));
    fd = open(argv[1], O_RDONLY);
    do {

        not_end = read(fd, &tmp, sizeof(record_t));
        if (not_end) {
            r=(record_t *) malloc(1 * sizeof(record_t));
            r=tmp;
            r->next = head;
            head = r;
            n++;
        }
    } while (not_end);

    while (1) {
        fscanf(stdin, "%c %d", &input_char, &input_int);
        switch (input_char) {
            case 'R':
                found = 0;
                tmp = head;
                i = 0;
                while (!found) {
                    if (tmp->numLine == input_int) {
                        printf("%d %ld %s %s %d\n", r->numLine, r->reg, r->surname, r->name, r->mark);
                    } else {
                        tmp = tmp->next;
                        if (i++ == n) {
                            printf("Not found\n");
                            found = 1;
                        }

                    }
                }
                break;
            case 'W':
                found = 0;
                i = 0;
                tmp = head;
                record_t *t;
                printf("Data: ");
                t = (record_t *) malloc(1 * sizeof(record_t));
                fscanf(stdin, "%d %ld %s %s %d", &t->numLine, &t->reg, t->surname, t->name, &t->mark);
                if (t->numLine<n){
                    for (i=0; i<t->numLine;i++)
                        tmp=tmp->next;
                }
                else {
                    for (i = 0; i < t->numLine; i++) {
                        if (i < n)
                            tmp = tmp->next;
                        else {
                            tmp->next = (record_t *) malloc(1 * sizeof(record_t));
                            tmp = tmp->next;
                            tmp->numLine=-1;
                        }
                    }
                }
                tmp=t;
                break;
            case 'E':
                return 0;
                break;
            default:
                printf("Input not valid\n");
                break;
        }
    }
}


