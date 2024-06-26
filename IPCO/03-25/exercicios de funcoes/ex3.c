/*Sobre unidades de medida, sabe-se que:
1 pé = 12 polegadas
1 jarda = 3 pés
1 milha = 1760 jardas
1 milha = 16093 metros*/
#include <stdio.h>

float PesToPolegadas(float pes);
float PesToJardas(float pes);
float JardasToMilhas(float jardas);
float MilhasToMetros(float milhas);

int main(){
    float pe, polegada, jarda, milha, metro;

    printf("Digite a distancia em pes: ");
    scanf("%f",&pe);

    polegada = PesToPolegadas(pe);
    jarda = PesToJardas(pe);
    milha = JardasToMilhas(jarda);
    metro = MilhasToMetros(milha);
    printf("Valores convertidos\n%.2f Polegadas\n%.2f Jardas\n%.2f Milhas\n%.2f Metros\n",polegada,jarda,milha,metro);
    return 0;
}

float PesToPolegadas(float pes){
    float resultado = pes*12;
    return resultado;
}

float PesToJardas(float pes){
    float resultado = pes/3;
    return resultado;
}

float JardasToMilhas(float jardas){
    float resultado = jardas/1760;
    return resultado;
}

float MilhasToMetros(float milhas){
    float resultado = milhas*1609.3;
    return resultado;
}