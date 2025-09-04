#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1,n2,n3,n4,n5,total,moyenne, max , min;;
    printf("Saisir la 1er note : ");
    scanf("%f",&n1);

    printf("Saisir la 2eme note : ");
    scanf("%f",&n2);

    printf("Saisir la 3eme note : ");
    scanf("%f",&n3);

    printf("Saisir la 4eme note : ");
    scanf("%f",&n4);

    printf("Saisir la 5eme note : ");
    scanf("%f",&n5);

    total=n1+n2+n3+n4+n5;

    moyenne=total/5;

    printf("\nle total des notes est : %.2f\n",total);
    printf("la moyenne est : %.2f\n",moyenne);

    max=n1;

    if (max<n2)
        max=n2;
    else if (max<n3)
        max=n3;
    else if (max<n4)
        max=n4;
    else
        max=n5;

    printf("la note la plus haute est : %.2f\n",max);


    min=n1;

    if (min>n2)
        min=n2;
    else if (min>n3)
        min=n3;
    else if (min>n4)
        min=n4;
    else
        min=n5;

    printf("la note la plus basse est : %.2f\n",min);


    if(moyenne>=90)
        printf("Exellent ");
    else if(moyenne<90)
        printf("Tres bien ");
    else if(moyenne<80)
        printf("Bien ");
    else if(moyenne<70)
        printf("Passable ");
    else
        printf("Echec !! ");


    if(moyenne>=50)
        printf("\nReussi\n");
    else
        printf("\nEchoue !!\n");

    return 0;
}
