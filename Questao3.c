//UFRN - Programação Avançada
//BC&T - Ênfase em Tecnologia de Computação
//Hadênia Rodrigues Ferreira
//Questão 3

#include <stdio.h>

int main()
{      int i=5, *p;
       p = &i;
       printf("%x \n", p); //Mostra o conteudo de p, que é o endereço de i
       printf("%d \n", *p+2); //Conteudo de i +2
       printf("%d \n", *p); //conteudo de i
       printf("%d \n", 3**p);  //3*(conteudo de i)
       printf("%x \n", *p+4); //conteudo de i +4

    return 0;
}

/*RESULTADO NA TELA
28fea8 --> no caso do enunciado da quest  seria 4094
7
5
15
9
*/
