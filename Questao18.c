//UFRN - Programação Avançada
//BC&T - Ênfase em Tecnologia de Computação
//Hadênia Rodrigues Ferreira
//Questão 18

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int i, n, k;

int *soma(int *a, int *b, int *sun, int n){
    for (i=0; i<n; i++){
        sun[i]=a[i]+b[i];
    }
    return sun;
}

void print(int *k, int n){
    for (i=0; i<n; i++){
         printf("%d ", k[i]);
    }
     printf("\n");
}

int main(int argc)
{
    int *x, *y, *s;

    //Aloca memoria para x e y
     x = (int*) malloc(n*sizeof(int));
     y = (int*) malloc(n*sizeof(int));
     s = (int*) malloc(n*sizeof(int));

     printf("Informe o tamanho do vetor: ");
     scanf("%d", &n);

    //Preencher x, y com valores aleatorios
     srand(time(NULL));
     for(i = 0; i < n; i++) {
         *(x + i) = rand()%10;
         *(y + i) = rand()%10;
     }

    print(x, n);
    print(y, n);

    s = soma(x, y, s, n);
    print(s, n);

    //Libera x da memoria
    free(x);
    free(y);
    free(s);
    return 0;
}
