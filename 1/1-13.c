#include <stdio.h>

#define IN 1
#define OUT 0

#define MAXSIZE 8

int main() 
{
    int i, j, c, state, len, maxvalue;
    int nlen[MAXSIZE];

    state = OUT;
    len = 0;
    maxvalue = 0;

    for (i = 0; i < MAXSIZE; ++i) {
        nlen[i] = 0;
    }
    while ((c = getchar()) != EOF) {
        if (c == '\n' || c == '\t' || c == ' ') {
            if (state == IN) {
                state = OUT;
                nlen[len] ++;
            }
        } else if (state == OUT) {
            state = IN;
            len = 1;
        } else {
            len ++;
        }
    }

    //for (i = 0; i < MAXSIZE; ++i) {
    //    printf("%d   ", i);
    //    for (j = 0; j < nlen[i]; ++j) {
    //        printf("*");
    //    }
    //    printf("\n");
    //}
    
    for (i = 0; i < MAXSIZE; ++i) {
        if (nlen[i] > maxvalue)
            maxvalue = nlen[i];
    }

    for (i = maxvalue; i >= 1; --i) {
        for (j = 0; j < MAXSIZE; ++j) {
            if (nlen[j] >= i)
                printf("*");
            else 
                printf(" ");
        }
        printf("\n");
    }

    for (i = 0; i< MAXSIZE; ++i) {
        printf("%d", i);
    }
}
