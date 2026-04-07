#include<stdio.h>

int main()
{
    int tk;
    scanf("%d", &tk);

    if (tk >= 100) {
        printf("bargar khabo\n");
    }
    else if (tk >= 50) 
    {
        printf("fuchka khabo\n");
    }
    else 
    {
        printf("kisu khabo na\n");
    }

    return 0;
}