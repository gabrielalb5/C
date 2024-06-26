#include <stdio.h>// Inclusão da biblioteca stdio.h (padrão, entrada e saída)
int main(){// É a função principal do programa, o ponto de partida
    int Num, i;// Declaração de variáveis "Num" e "i", inteiras
    printf("Digite o numero: ");// Imprime na tela o texto "Digite o numero: "
    scanf("%d", &Num);// Recebe o valor digitado e armazena na variável "Num"
    printf("Divisores próprios de %d: \n", Num);// Imprime na tela "Divisores próprios de %d: " mostrando o valor armazenado em "Num" no lugar de %d
    for (i = 2; i <= Num / 2; i = i + 1)/* Início da estrutura de repetição for. Nessa estrutura
                                        a variável "i" inicia com o valor 2. Para cada valor de i
                                        menor ou igual a metade de Num ele executa o if,
                                        acrescentando 1 no valor de i.*/
        if (Num % i == 0)// Se o valor armazenado em Num, dividido por i, tiver resto igual a 0 ele imprime o valor de i
            printf("%d\n", i);// Impressão de i caso a condição seja verdadeira (um divisor próprio)
    return 0;// Termina o programa e retorna o valor 0 caso tudo ocorra bem
}// Fim do programa (fechamento de main)