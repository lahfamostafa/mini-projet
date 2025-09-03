#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1,n2,n3,n4,n5,T,M,H,B;
    printf("Saisir la 1er note : ");
    scanf("%f",&n1);

    printf("Saisir la 2eme note : ");
    scanf("%f",&n2);

    printf("Saisir la 3eme note : ");
    scanf("%f",&n3);

    printf("Saisir la 4eme note : ");
    scanf("%f",&n4);

    printf("Saisir la 5eme note : \n");
    scanf("%f",&n5);

    T=n1+n2+n3+n4+n5;

    M=T/5;

    printf("le total des notes est : %.2f\n",T);
    printf("la moyenne est : %.2f\n",M);

    if(n1>n2 && n1>n3 && n1>n4 && n1>n5)
        H=n1;
    else if(n2>n1 && n2>n3 && n2>n4 && n2>n5)
        H=n2;
    else if(n3>n2 && n3>n1 && n3>n4 && n3>n5)
        H=n3;
    else if(n4>n2 && n4>n3 && n4>n1 && n4>n5)
        H=n4;
    else
        H=n5;

    printf("la note la plus haute est : %.2f\n",H);

    if(n1<n2 && n1<n3 && n1<n4 && n1<n5)
        B=n1;
    else if(n2<n1 && n2<n3 && n2<n4 && n2<n5)
        B=n2;
    else if(n3<n2 && n3<n1 && n3<n4 && n3<n5)
        B=n3;
    else if(n4<n2 && n4<n3 && n4<n1 && n4<n5)
        B=n4;
    else
        B=n5;

    printf("la note la plus basse est : %.2f\n",B);

    if(M>=90)
        printf("Exellent \n reussi ");
    else if(M>=80 && M<90)
        printf("Tres bien \n reussi ");
    else if(M>=70 && M<80)
        printf("Bien \n reussi ");
    else if(M>=60 && M<70)
        printf("Passable \n reussi ");
    else
        printf("Echec \nEchoue !! ");

    return 0;
}
