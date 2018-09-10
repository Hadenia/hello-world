//UFRN - Programação Avançada
//BC&T - Ênfase em Tecnologia de Computação
//Hadênia Rodrigues Ferreira
//Questão 16

#include <stdio.h>
#include <stdlib.h>

//Função para usar o qsort
int compare (const void * a, const void * b)
{
  return ( *(float*)a - *(float*)b );
}

int main(int argc)
{
    int i;
    int n = 5;
    float *x;

    //Aloca memoria para x
    x = (float*) malloc(n*sizeof(float));

    //declaração dos valores de x
    x[0] = 7.9;
    x[1] = 6.4;
    x[2] = 9.3;
    x[3] = 3.9;
    x[4] = 1.5;

    //Apresenta a matriz original
    printf("Matriz original \n");
    for (i=0; i<n; i++){
         printf("%.1f ", x[i]);
    }
    printf("\n \n");

    void (*pt)(void *x, size_t n, size_t size, int(*compare)(const void *, const void *));
    pt = qsort;

    (*pt)(x, n, sizeof(float), compare);

    //Apresenta a matriz ordenada
    printf("Matriz ordenada \n");
    for (i=0; i<n; i++){
          printf("%.1f ", x[i]);
    }

    //Libera x da memoria
    free(x);
    return 0;
}
