#include <stdio.h>
int main(){
    
    //Entrada
    int a, b, c;
    int n1, n2, n3;

    printf("Digite o primeiro número: ");
    scanf("%d",&n1);
    printf("Digite o segundo número: ");
    scanf("%d",&n2);
    printf("Digite o terceiro número: ");
    scanf("%d",&n3);

    //Processamento
    if(n1==n2 && n2==n3){
        printf("Todos os números são iguais");
    }else if(n1==n2 || n2==n3 || n3==n1){
        printf("Dois números iguais");
    }else if(n1<n2 && n1<n3){
        a=n1;
        if(n2<n3){
            b=n2;
            c=n3;
        }else{
            c=n2;
            b=n3;
        }
        printf("A = %d, B = %d, C = %d",a,b,c);
    }else if(n2<n1 && n2<n3){
        a = n2;
        if(n1<n3){
            b=n1;
            c=n3;
        }else{
            c=n1;
            b=n3;
        }
        printf("A = %d, B = %d, C = %d",a,b,c);
    }else if(n3<n1 && n3<n2){
        a = n3;
        if(n1<n2){
            b=n1;
            c=n2;
        }else{
            c=n1;
            b=n2;
        }
        printf("A = %d, B = %d, C = %d",a,b,c);
    }

    return 0;
}
