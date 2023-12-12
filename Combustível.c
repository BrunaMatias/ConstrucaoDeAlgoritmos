#include <stdio.h>

int main()
{
    int comb;
    int gasolina, alcool, diesel;
    
    gasolina = 0;
    alcool = 0;
    diesel = 0;
    
    do{
    printf("Informe o combustível desejado: \n");
    printf("Alcool[1]: \nGasolina [2]:\nDiesel[3]:\nEncerrar[0]:\n");
    scanf("%d", &comb);
    
    if (comb == 1)
        alcool ++;
    else if
        (comb == 2)
        gasolina ++;
    else if(comb == 3)
        diesel ++;
        
    } while(comb != 0);
    
    printf("\n");
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gasolina);
    printf("Diesel: %d\n", diesel);
    
    return 0;
}

