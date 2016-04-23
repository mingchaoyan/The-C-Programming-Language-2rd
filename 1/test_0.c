#include <stdio.h>
int main()
{
    printf("%d", '\0');
    printf("\n");
    printf("%d", '\6');
    printf("\n");
    printf("%d", '\10');
    printf("\n");
    //未定义行为
    printf("%d", '\8');
}
