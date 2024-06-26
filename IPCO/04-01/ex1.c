/*Calcule a média de quatro números dados. Exiba o valor da média e, para
cada número exiba se ele está abaixo ou acima da média*/

#include <stdio.h>

float media(float n1, float n2, float n3, float n4);

int main(){
    float n1,n2,n3,n4,m;

    printf("MEDIA DE 4 NUMEROS\n");
    printf("Numero 1: ");
    scanf("%f",&n1);
    printf("Numero 2: ");
    scanf("%f",&n2);
    printf("Numero 3: ");
    scanf("%f",&n3);
    printf("Numero 4: ");
    scanf("%f",&n4);

    m = media(n1,n2,n3,n4);

    printf("Media = %.2f\n",m);

    if(n1>m){
        printf("N1 maior que a media\n");
    }else if(n1<m){
        printf("N1 menor que a media\n");
    }else{
        printf("N1 igual a media\n");
    }

    if(n2>m){
        printf("N2 maior que a media\n");
    }else if(n2<m){
        printf("N2 menor que a media\n");
    }else{
        printf("N2 igual a media\n");
    }

    if(n3>m){
        printf("N3 maior que a media\n");
    }else if(n3<m){
        printf("N3 menor que a media\n");
    }else{
        printf("N3 igual a media\n");
    }

    if(n4>m){
        printf("N4 maior que a media\n");
    }else if(n4<m){
        printf("N4 menor que a media\n");
    }else{
        printf("N4 igual a media\n");
    }

    return 0;
}

float media(float n1, float n2, float n3, float n4){
    return((n1+n2+n3+n4)/4);
}