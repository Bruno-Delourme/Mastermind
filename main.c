#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int MAX_TRY = 10;
    const int MAX_COLORS = 5;
    const char COLORS[] = {'B', 'R', 'Y','G' 'O'};
    const int CODE_SIZE = 4;

    char code_secret[CODE_SIZE] = {'B', 'R', 'Y','G'};
    char user_propose[CODE_SIZE] = void;

    for(int user_propose = 0; user_propose<= MAX_TRY +1; user_propose++)
    {
        //lecture saisie utilisateur
    printf("Propose une combinaison de 4 couleurs avec {'BLUE', 'RED', 'YELLOW', 'GREEN', 'ORANGE'}");
    fflush(stdin);
    scanf("%c%c%c%c", user_propose, (user_propose+1),(user_propose+2),(user_propose+3));

        //init des compteurs
        int nb_colors_place = 0;

        // comparaison du code secret et de l'utilisateur
        for(i=0; i<CODE_SIZE; i++)
        {
            if(code_secret[i] ==  user_propose[i])
            {
                nb_colors_place++;
            }

        }


        while(user_propose<= MAX_TRY);
        continue;
        printf("> TENTATIVE N*%d/%d\n", user_propose, MAX_TRY);
        if(user_propose= MAX_TRY);
        printf("> TENTATIVE N*%d/%d FIN\n", user_propose, MAX_TRY);
        break;

    }





    return 0;
}
