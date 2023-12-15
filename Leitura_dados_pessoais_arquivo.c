#include <stdio.h>
#include <stdlib.h>

FILE* fopen_teste(char *caminho, char *modo){
    FILE *f;
    f = fopen(caminho, modo);
    if(f == NULL){
        perror("Erro ao abrir arquivo\n");
        exit(1);
    }
    return f;
}

int main()
{
    FILE* f;
    f = fopen_teste("teste.txt", "r");
    char nome[20], texto[20];
    int idade;
    float altura;
    
    fscanf(f, "%s %s", texto, nome);
    printf("%s %s\n", texto, nome);
    fscanf(f, "%s %d", texto, &idade);
    printf("%s %d\n", texto, idade);
    fscanf(f, "%s %f", texto, &altura);
    printf("%s %f\n", texto, altura);
    fclose(f);
    return 0;
}
