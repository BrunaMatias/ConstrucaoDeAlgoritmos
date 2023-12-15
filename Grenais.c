#include <stdio.h>

int main()
{
    int gols_inter=0, gols_gremio=0, vitoria_inter=0, vitoria_gremio=0, grenais=0, empate=0, n =1;
    
    while(n != 2){
        printf("Informe a quantidade de gols do Internacional:\n");
        scanf("%d", &gols_inter);
        printf("Informe a quantidade de gols do Grêmio:\n");
        scanf("%d", &gols_gremio);
        
        grenais ++;
        
        if(gols_inter > gols_gremio){
            vitoria_inter ++;
        }
        else if(gols_gremio > gols_inter){
            vitoria_gremio ++;
        }
        else{
            empate ++;
        }
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &n);
    }
    
    printf("\n");
    printf("%d Grenais disputados \n", grenais);
    printf("Vitórias do Inter:%d\n", vitoria_inter);
    printf("Vitórias do Gremio:%d\n", vitoria_gremio);
    printf("Empates:%d\n", empate);
    
     
        if(vitoria_inter > vitoria_gremio){
            printf("Inter venceu mais\n");
        }
        else if(vitoria_gremio > vitoria_inter){
            printf("Gremio venceu mais\n");
        }
        else{
            printf("Nao houve vencedor\n");
        }

    return 0;
}


