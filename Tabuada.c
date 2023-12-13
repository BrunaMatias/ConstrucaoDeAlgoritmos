/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i, n;
    
    scanf("%d", &n);
    
    if(n<2 || n>2000){
        return 0;
    }
    
    printf("Tabulada do %d", n);
    printf("\n");
    
    for(i=1; i<=10; i++){
        printf("%d x %d = %d\n", i, n, i*n); 
    }
    
    return 0;
}

