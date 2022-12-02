#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int randomNumber(int min, int max)
{
    return (rand() % (max - min + 1)) + min;
}

int main()
{
    char j = 'n';
    int r, n, v;
    printf("Voulez-vous commencer à jouer ? (o/n) ");
    scanf("%s", &j);
    if(j == 'o'){
        srand(time(NULL));
        r = randomNumber(1, 10);
        for(v = 3; v > 0; v--){
            printf("Il vous reste %i vies.\n", v);
            printf("Choississez un nombre entre 1 et 10: ");
            scanf("%i", &n);
            if(n > r){
                printf("Plus Petit\n");
            }
            else if(n < r){
                printf("Plus Grand\n");
            }
            else {
                printf("Gagné ! Le nombre était %i \n", r);
                break;
            }
        }
        if(n != r){
            printf("Vous n'avez plus de vie, le nombre était %i !\n", r); 
        }
    }
    else {
         printf("Dommage, vous auriez aimé jouer.");    
    }
    return 0;
}