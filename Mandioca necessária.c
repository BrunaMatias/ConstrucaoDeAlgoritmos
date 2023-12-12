#include <stdio.h>

int main()
{
    int curupira, boitata, boto, mapinguari, iara, chica;
    int pcurupira, pboitata, pboto, pmapinguari, piara;
    int total;
    
    curupira = 300;
    boitata = 1500;
    boto = 600;
    mapinguari = 1000;
    iara = 150;
    chica = 225;
    
    scanf("%d", &pcurupira);
    scanf("%d", &pboitata);
    scanf("%d", &pboto);
    scanf("%d", &pmapinguari);
    scanf("%d", &piara);
    
    total = ((curupira*pcurupira) + (boitata*pboitata) + (boto*pboto) + (mapinguari*pmapinguari) + (iara*piara) + chica);
    
    printf("O total necessário é: %d g \n", total);

    return 0;
}


