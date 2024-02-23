#include <stdio.h>
#include <limits.h>

int main()
{

    int choix, continuer = 1;
    float min = 20, max = 0;
    float note, somme;
    int nb_notes, nb_a_saisir;

    while (continuer)
    {

        printf("\n*** MENU ***");
        printf("\n1. Min et max");
        printf("\n2. Deux plus petites");
        printf("\n3. Moyenne");
        printf("\n4. Deux plus grandes");
        printf("\n5. Quitter");

        do
        {
            printf("\nVotre choix: ");
            scanf("%d", &choix);
            if (choix < 1 || choix > 5)
            {
                printf("Choix invalide!");
            }
        } while (choix < 1 || choix > 5);

        if (choix == 1)
        {

            do
            {
                printf("\nSaisir une note (0-20): \n");
                scanf("%f", &note);

                if (note < 0)
                {
                    break;
                }
                else if (note < min)
                {
                    min = note;
                }
                else if (note > max)
                {
                    max = note;
                }

            } while (1);

            printf("\nMin: %.2f", min);
            printf("\nMax: %.2f", max);
        }
        else if (choix == 2)
        {

            // Traiter choix 2
        }
        else if (choix == 3)
        {

            printf("\nNombre de notes : ");
            scanf("%d", &nb_a_saisir);

            // Lire nb_a_saisir notes
        }
        else if (choix == 4)
        {

            // Sous-menu deux plus grandes
        }
        else if (choix == 5)
        {
            continuer = 0;
        }
    }

    return 0;
}