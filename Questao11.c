//UFRN - Programação Avançada
//BC&T - Ênfase em Tecnologia de Computação
//Hadênia Rodrigues Ferreira
//Questão 11

int main(){
  char x1[4];
  int x2[4];
  float x3[4];
  double x4[4];

  //Char ocupou um 1 byte
  printf("%d, %d, %d, %d \n", x1, x1+1, x1+2, x1+3);
  printf("\n");

  //Inteiro ocupou 4 bytes
  printf("%d, %d, %d, %d \n", x2, x2+1, x2+2, x2+3);
  printf("\n");

  //Float ocopou 4 bytes
  printf("%d, %d, %d, %d \n", x3, x3+1, x3+2, x3+3);
  printf("\n");

  //Double ocupou 8 bytes
  printf("%d, %d, %d, %d \n", x4, x4+1, x4+2, x4+3);
  printf("\n");


}
