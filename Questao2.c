//UFRN - Programação Avançada
//BC&T - Ênfase em Tecnologia de Computação
//Hadênia Rodrigues Ferreira
//Questão 2

#include <stdio.h>

int main(int argc, char *argv[])
{
    int i=3, j=5;
    int *p, *q; // declarando os ponteiros
    p = &i; //ponteiro p recebe o endereço do inteiro i
    q = &j; //ponteiro q recebe o endereço do inteiro j
    printf("%x\n", p); //mostra o conteudo de p
    printf("%x\n", q); //mostra o conteudo de q
    printf("%i\n", p==&i); //1 - representando true
    printf("%i\n", *p-*q); // 3-5 resultando em -2
    printf("%d\n", 3-*p/(*q)+7); //3 - 3/5 + 7 -- 3/5 Divisão inteiro = 0 ---//3-0+7 = 10
    return 0;
}

RESULTADOS NA TELA:
28fea4
28fea0
1
-2
10
