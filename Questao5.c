//UFRN - Programação Avançada
//BC&T - Ênfase em Tecnologia de Computação
//Hadênia Rodrigues Ferreira
//Questão 5

int main() {
  int    valor;
  int   *p1;
  float  temp;
  float *p2;
  char   aux;
  char  *nome = "Ponteiros";
  char  *p3;
  int    idade;
  int    vetor[3];
  int   *p4;
  int   *p5;

  /* (a) */
  valor = 10;
  p1 = &valor;
  *p1 = 20;
  printf("%d \n", valor);
//Autera o conteudo de 'valor' por meio do ponteiro p1

  /* (b) */
  temp = 26.5;
  p2 = &temp;
  *p2 = 29.0;
  printf("%.1f \n", temp);
 //Autera o conteudo de 'temp' por meio do ponteiro p2

  /* (c) */
  p3 = &nome[0]; //o ponteiro p3 recebe o endereço da primeira posição de nome[]
  aux = *p3; //variavel aux recebe o conteudo do endereço de p3
  printf("%c \n", aux); //Apresenta o conteudo de aux


  /* (d) */
  p3 = &nome[4];
  aux = *p3;
  printf("%c \n", aux);
  //Semelhante ao anterior, porém p3 recebe a quinta posição de nome[]

  /* (e) */
  p3 = nome;
  printf("%c \n", *p3);
  //Apresenta a primeira posição de nome[]

  /* (f) */
  p3 = p3 + 4;
  printf("%c \n", *p3);
  //Apresenta a quinta posição de nome[]

  /* (g) */
  p3--;
  printf("%c \n", *p3);
  //Apresenta a quarta posição de nome[]

  /* (h) */
  vetor[0] = 31;
  vetor[1] = 45;
  vetor[2] = 27;
  p4 = vetor;
  idade = *p4;
  printf("%d \n", idade);
  //Apresenta a primeira posição de vetor[]

  /* (i) */
  p5 = p4 + 1;
  idade = *p5;
  printf("%d \n", idade);
 //Apresenta a segunda posição de vetor[]

  /* (j) */
  p4 = p5 + 1;
  idade = *p4;
  printf("%d \n", idade);
//Apresenta a terceira posição de vetor[]

  /* (l) */
  p4 = p4 - 2;
  idade = *p4;
  printf("%d \n", idade);
   //Apresenta a primeira posição de vetor[]

  /* (m) */
  p5 = &vetor[2] - 1;
  printf("%d \n", *p5);
   //Apresenta a segunda posição de vetor[]

  /* (n) */
  p5++;
  printf("%d \n", *p5);
  //Apresenta a terceira posição de vetor[]
  
  //Resultados esperados

  return(0);
}
