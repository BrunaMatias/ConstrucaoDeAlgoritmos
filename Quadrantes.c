/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int x, y;
    
    x = 1;
    y = 1;
    
    printf("Para encerrar o programa digite (0,0)\n");
    
        while(x !=0 || y != 0){
        printf("Informe a coordenada x:");
        scanf("%d", &x);
        printf("Informe a coordenada y:");
        scanf("%d", &y);
        
        if(x==0 || y==0){
            return 0;
        }
    
        if(x>0 && y>0){
            printf("Primeiro quadrante\n");
            printf("\n");
        }
        else if(x>0 && y<0){
            printf("Quarto quadrante\n");
            printf("\n");
        }
        else if(x<0 && y<0){
            printf("Terceiro quadrante\n");
            printf("\n");
        }
        else{
            printf("Segundo quadrante\n");
            printf("\n");
        }
    }
    
    return 0;
}
