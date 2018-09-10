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

int i, j;
void ordem(float *x, int n){
    float y=0;
    for (i=0; i<n; i++){
      for (j=i+1; j<n; j++){
        if(x[i]>x[j]){
            y = x[i];
            x[i] = x[j];
            x[j]= y;
        }
     }
    }
}

int main(int argc)
{
    int n = 5;
    float *x;
    int r;

    //Aloca memoria para x
    x = (float*) malloc(n*sizeof(float));

    //declaração dos valores de x
    x[0] = 1.9;
    x[1] = 0.4;
    x[2] = 3.3;
    x[3] = 2.9;
    x[4] = 9.5;

    //Apresenta a matriz original
    printf("Matriz original \n");
    for (i=0; i<n; i++){
         printf("%.1f ", x[i]);
    }
    printf("\n \n");

    void (*pt)(void *x, size_t n, size_t size, int(*compare)(const void *, const void *));

    printf("Digite 1 para qsort ou digite 2 para bubble sort");
    scanf("%d", &r);

    if(r == 1){
        pt = qsort;
    }else if(r ==2){
        pt = ordem;
    }

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
