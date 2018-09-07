//UFRN - Programação Avançada
//BC&T - Ênfase em Tecnologia de Computação
//Hadênia Rodrigues Ferreira
//Questão 9

int main(){
  int vet[] = {4,9,13};
  int i;
  for(i=0;i<3;i++){
    printf("%d ",*(vet+i));
  }
  //Exibi o conteudo do vetor vet[];

 // int vet[] = {4,9,13};
  // int i;
   for(i=0;i<3;i++){
      printf("%X ",vet+i);
   }
// Exibi o endereço de cada posição do vetor vet[]

}
