//UFRN - Programação Avançada
//BC&T - Ênfase em Tecnologia de Computação
//Hadênia Rodrigues Ferreira
//Questão 13

#include <stdio.h>

/* Ponteiros para função serve principalmente para definir,
 * em tempo de execução, qual função será executada, sem a
 * necessidade de escrever o nome da função, de forma explícita naquele ponto do código.
 * Em geral, a definição de qual função será executada é feita em um outro ponto do código,
 * fazendo o ponteiro apontar para a função desejada.
*/


int some(int n)
{
    printf("+");
    return n+1;
}

int sub(int n)
{
    printf("-");
     return n-1;
}


int main()
{
    int n, o;
    int retorno;
    int (*pt)(int);

    printf("Digite um numero\n");
    scanf("%d", &n);
    printf("Para somar digite 1, para subtrair digite 2\n");
    scanf("%d", &o);

    if (o == 1) {
        pt = some;
    }else if(o == 2){
        pt = sub;
    }

    printf ("%d ", n);
    retorno = (*pt)(n);
    printf (" 1 = %d\n",retorno);

}
