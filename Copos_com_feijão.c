 #include <stdio.h>

int main()
{
    int posicao[4];
    int i;
    int copo_feijao;
    
printf("Indique os copos (0 sem feijão/ 1 com feijão): \n");

    for(i=0; i< 4; i++){
        scanf("%d", &posicao[i]);
    }
    
    for(i=0; i< 4; i++){
        if(posicao[i] == 1){
            copo_feijao = i+1;
        }
    }
    
    printf("O copo %d tem feijão \n", copo_feijao);


    return 0;
}

