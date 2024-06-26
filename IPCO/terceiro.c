#include <stdio.h>
int main()
{
    int idade, anoNasc, qtdeAnos;
    int anoAtual = 2024; 

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Qual ano voce nasceu? ");
    scanf("%d", &anoNasc);

    qtdeAnos = anoAtual - anoNasc;

    printf("\nIdade informada pelo usuario = %d\n", idade);
    printf("Idade que tera ao final deste ano: %d\n\n", qtdeAnos);
    
    getchar();
    return 0;
}