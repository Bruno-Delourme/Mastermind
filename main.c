#include <stdio.h>
#include <stdlib.h>

int main()
{
#define MAX_TRY 5
#define MAX_COLORS 5
#define CODE_SIZE 4

const char COLORS[] = {'B', 'R', 'Y', 'G', 'O'};

    char code_secret[] = {'B', 'R', 'Y', 'G'};
    char user_propose[CODE_SIZE];

    for(int nb_try = 1; nb_try<= MAX_TRY; nb_try++)
    {
        //lecture saisie utilisateur
    printf("Propose une combinaison de 4 couleurs avec {'B', 'R', 'Y', 'G', 'O'}\n");
    fflush(stdin);
    scanf("%c%c%c%c", user_propose, (user_propose+1),(user_propose+2),(user_propose+3));

        //init des compteurs
        int nb_colors_good_position = 0;
        int nb_colors_bad_position=0;

        // comparaison du code secret et de l'utilisateur
        for(int i=0; i<CODE_SIZE; i++)
        {
            if(code_secret[i] ==  user_propose[i])
            {
                nb_colors_good_position++;
            }
        }


        //gestion fin de partie
        if(nb_colors_good_position == CODE_SIZE)
        {
            printf("Bravo you won!\n");
            break;
        }
        else if(nb_colors_good_position>= MAX_TRY)
        {
            printf("Sadly, you reach the max try!\n");
            printf("The code was %c%c%c%c", code_secret[0], code_secret[1], code_secret[2], code_secret[3]);
        }
        else
        {
            printf("\t TRY No%d/%d\n", nb_try, MAX_TRY);
            printf("Couleurs bien placees : %d\n\n", nb_colors_good_position);
        }


    }
    return 0;
}
