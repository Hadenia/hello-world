//UFRN - Programação Avançada
//BC&T - Ênfase em Tecnologia de Computação
//Hadênia Rodrigues Ferreira
//Questão 4

#include <stdio.h>

int main()
{   int i=2,j=3;
    int *p, *q;

    p=i; //ok
    printf("%d\n", p);

    q=&j; //ok. Q recebe o endereço de j.
    printf("%d\n", q);

    p = &*&i; //ok
    printf("%d\n", p);

    // i = (*&)j; //Expressão é ilegal, parenteses errados

    i = *&j; //ok. *& == conteudo do endereço de J, é o proprio conteudo de J
    printf("%d\n", i);

    i = *&*&j; //ok. Semelhante ao anterior
    printf("%d\n", i);

    q = *p; //q recebe o conteudo do endereço de p, porém se p estiver vazio a comando é ilegal
    printf("%d\n", q);

    i = (*p)++ + *q; //Expressão é ilegal
    printf("%d\n", i);

    return 0;
}
