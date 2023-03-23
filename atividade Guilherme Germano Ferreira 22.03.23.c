#include <stdio.h>

int main()
{
    float matrix[4][4];
    int a, b, cont;
    

    for (a = 0; a < 4; a ++){
        for(b = 0; b < 4; b ++){
            printf("Digite valores Reais:");
            scanf(" %f", &matrix[a][b]);
            
        }
    }
    
    float somap, somai;
    float total;
    somap = 0;
    somai = 0;
    cont = 0;
    for(a = 0; a < 4; a++){
        for( b = 0; b < 4; b++){
            if(b % 2 == 0){
                somap = somap + matrix[a][b];
            cont = cont + 1;
            }
            else{
                somai = somai + matrix[a][b];
            }
        }
    }
    total = somai/cont;
    printf("\n A soma total das colunas é %f", somai);
    printf("\n A soma total das colunas é %f", somap);
    
    return 0;
}
