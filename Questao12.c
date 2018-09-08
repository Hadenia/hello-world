//UFRN - Programação Avançada
//BC&T - Ênfase em Tecnologia de Computação
//Hadênia Rodrigues Ferreira
//Questão 12

#include <stdio.h>

int main(){
    float aloha[10], coisas[10][5], *pf, value = 2.2;
    int i=3;

     aloha[2] = value;
     scanf("%f", &aloha);
    // aloha = value;  //Invalido
     printf("%f", aloha);
     coisas[4][4] = aloha[3];
    // coisas[5] = aloha; //Invalido
    // pf = value; //Invalido
     pf = aloha;
     //Demais comandos são válidos

}
