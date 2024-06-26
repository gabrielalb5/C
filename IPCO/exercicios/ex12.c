/*Sobre unidades de medida, sabe-se que:
- 1 pé = 12 polegadas
- 1 jarda = 3 pés
- 1 milha = 1760 jardas
- 1 milha = 1609.3 metros
Desenvolva um programa que receba uma medida em pés e apresente as conversões para
polegadas, jardas, milhas e metros.
*/
#include <stdio.h>

int main() {
    float pes, pol, jar, mil, met;

    printf("Digite a medida em pés: ");
    scanf("%f", &pes);

    pol = pes*12;
    jar = pes/3;
    mil = jar/1760;
    met = mil*1609.3;

    printf("Conversão de medidas\n");
    printf("%.2f polegadas\n%.2f jardas\n%.2f milhas\n%.2f metros\n", pol, jar, mil, met);
    getchar();
    return 0;
}