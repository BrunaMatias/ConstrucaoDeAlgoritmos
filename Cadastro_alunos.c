#include <stdio.h>
#include <stdlib.h>

struct alunos{
    int matricula;
    char sobrenome[20];
    int ano;
};

int main()
{
    int n;
    int i;
    
    printf("Sistema de cadastro de alunos \n");
    printf("Informe a quantidade de alunos: \n");
    scanf("%d", &n);
    
    struct alunos *cad = (struct alunos*) malloc(n*sizeof(struct alunos));
    
    for(i=0; i<n ; i++){
        printf("\nCadastro aluno %d: \n", i+1);
        printf("Informe o número de matrícula: \n");
        scanf("%d", &cad[i].matricula);
        printf("Informe o sobrenome: \n");
        scanf("%s", cad[i].sobrenome);
        printf("Informe o ano de nascimento: \n");
        scanf("%d", &cad[i].ano);
    }
    
    printf("\n>>> Alunos matriculados: ");
    
    for(i=0; i<n; i++){
        printf("\nMatricula: ");
        printf("%d\n", cad[i].matricula);
        printf("Sobrenome: ");
        printf("%s\n", cad[i].sobrenome);
        printf("Ano de nascimento: %d\n", cad[i].ano);
    }
    
    free(cad);
    
    return 0;
}

