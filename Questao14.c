//UFRN - Programação Avançada
//BC&T - Ênfase em Tecnologia de Computação
//Hadênia Rodrigues Ferreira
//Questão 14

#include <stdio.h>
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
    x = (float*) malloc(n*sizeof(float));
    x[0] = 7.9;
    x[1] = 9.4;
    x[2] = 0.3;
    x[3] = 4.9;
    x[4] = 8.5;

    printf("Matriz \n");
    for (i=0; i<n; i++){
         printf("%.1f ", x[i]);
    }
    printf("\n \n");
    ordem(x, n);

    printf("Matriz ordenada \n");
    for (i=0; i<n; i++){
          printf("%.1f ", x[i]);
    }
    return 0;
}
