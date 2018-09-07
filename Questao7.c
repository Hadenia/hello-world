//UFRN - Programação Avançada
//BC&T - Ênfase em Tecnologia de Computação
//Hadênia Rodrigues Ferreira
//Questão 7

int main(void){
    int pulo[5] = {1,2,3,4,5};
    printf("%d\n", *(pulo + 2)); //Essa referencia o terceiro valor do vetor pulo[]
    printf("%d\n",  *(pulo + 4));
    printf("%d\n", pulo + 4);
    printf("%d\n",  pulo + 2);
}
