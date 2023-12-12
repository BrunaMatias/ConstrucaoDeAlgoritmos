#include <stdio.h>

int main()
{
    int A; 
    int M;
    int B;
    printf("Informe a primeira nota: ");
    scanf("%d", &A);
    printf("Informe oa média: ");
    scanf("%d", &M);
    B = (M/2)- A;
    printf("%d", B);
    
    return 0;
}

