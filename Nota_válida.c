#include <stdio.h>

int main()
{
    float nota_prova;
    float media;
    float soma=0;
    int i;
    
    for (i=0;i<2;i++){
        printf("Informe a nota da prova:\n");
        scanf("%f", &nota_prova);
    
        while (nota_prova<0 || nota_prova>10){
            printf("nota invalida, digite novamente\n");
            scanf("%f", &nota_prova);
        } 
        soma = soma + nota_prova;
    }
    
        
    media = soma/2;
    printf("Média: %3.2f\n", media);
    return 0;
}

