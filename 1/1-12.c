#include<stdio.h>

#define IN 1
#define OUT 0 

int main() 
{
    int c, state;
    state = OUT; 
    while((c = getchar()) != EOF) {
        if(c == '\n' || c == '\t' || c == ' ') {
            if(state == IN) {
                printf("\n");
                state = OUT;
            }
        } else if (state == OUT) {
            state = IN;
            putchar(c);
        } else
            putchar(c);
    }
}
