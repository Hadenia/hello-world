//UFRN - Programação Avançada
//BC&T - Ênfase em Tecnologia de Computação
//Hadênia Rodrigues Ferreira
//Questão 17

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

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
    clock_t t;
    int n = 10000;
    float *x, *k;

    //Aloca memoria para x
     x = (float*) malloc(n*sizeof(float));
     k = (float*) malloc(n*sizeof(float));

    //Preencher x com valores aleatorios
     srand(time(NULL));
     for(i = 0; i < n; i++) {
         *(x + i) = rand()%100;
     }

     //Copiar os mesmo valores para y
     memcpy(k, x, n*sizeof(float));


     void (*pt)(void *x, size_t n, size_t size, int(*compare)(const void *, const void *));

     t = clock();
     pt = qsort;
     (*pt)(x, n, sizeof(float), compare);
     t = clock() - t;
     printf ("Tempo do qsort: %f segundos \n",((float)t)/CLOCKS_PER_SEC);


     t = clock();
     pt = ordem;
     (*pt)(k, n, sizeof(float), compare);
     t = clock() - t;
     printf ("Tempo da funcao ordem: %f segundos\n",((float)t)/CLOCKS_PER_SEC);


    //Libera x da memoria
    free(x);
    free(k);
    return 0;
}
