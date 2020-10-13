/*FATEC
Curso:ADS/B; Matutino
Disciplina: Linguagem de programação
Professor: Reinaldo Arakaki
Aluno: Ricardo Sousa de Paiva
Desafio: Camadas Alfabéticas - EP3*/


#include <stdio.h>
int main(){
  int n; 
  printf("Entrada número natural (1<= N <= 52)= ");
  scanf("%d",&n);//Entrada de um número natural

  int y=(2*n); // valor final linha/coluna
  int y2=y; //Precisei armazenar o valor final para as saídas.
  char ma[2*n+1][2*n+1]; // matriz com tamanho determinado pela fórmula.
  char a= 'A';
  int k=y2-y;// valor do início da linha/coluna
  
  
 for(int l=n; l > 0; l--){// 1for determina loop geral da quantidades de camadas
    ma[n][n]=(char)'*'; //asterisco será armazenado 
    
    for(int i=0+k; i <= y; i++){//formação da linha superior e inferior
      ma[k][i]=a;
      ma[y][i]=a;   
    }
    
    for(int i=0+k; i <= y; i++){//formação da coluna direita e esquerda
      ma[i][k]=a;
      ma[i][y]=a;  
    }
    
    k=k+1;//É adicionado  +1 em k(início da linha) para char ser adicionado em outra camada.
    y=y-1;// Subtraido -1 do final da linha. Limite sequencial das camadas 
    

    if(a == 'Z'){
      a='a'; // Quando char chegar em 'Z' irá  receber 'a' onde seguirá a seguência da tabela ascii das letras minúsculas.  
    } else  //Um detalhe que observei nos teste. Considerei colocar condição eliminativa. Pois char recebendo 'a' mais a++ ocorreu perda de caracteres.
      a++;
  }
  for(int m=0; m <= y2; m++){ // Saídas
    printf("\n");
    for(int n=0; n <= y2; n++){
      printf("%c ", ma[m][n]);
    }  
  }     
   
 return 0;
}  