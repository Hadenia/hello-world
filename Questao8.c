//UFRN - Programação Avançada
//BC&T - Ênfase em Tecnologia de Computação
//Hadênia Rodrigues Ferreira
//Questão 8

int main(void){
    int mat[4], *p, x;

   p = mat + 1; //p recebe o endereço da segunda posição de mat
    printf("%d\n", p);
   //valido


    p = mat++; //invalido
    printf("%d\n", p);


    p = ++mat; //invalido
    printf("%d\n", p);


     x = (*mat)++;//X recebe o conteudo da primeira posição de mat
     printf("%d\n", x);
     //valido, porém não incrementa
}
