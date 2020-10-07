/*FATEC
Curso:ADS/B; Matutino
Disciplina: Linguagem de programação
Professor: Reinaldo Arakaki
Aluno: Ricardo Sousa de Paiva
Desafio: senhas possíveis  */


#include <stdio.h>


int main(void) {

  int i,unity_df,ten_df,hundred_df,thousand_df,dthousand_df,counter,sum;
  float unity,ten,hundred,thousand,dthousand;

  counter=23456;//o valor mínimo possível para formar a senha 
  for(i=0; counter <= 99999; counter++) {

    

    dthousand=counter/10;//Divisão do counter
    dthousand_df= counter%10;// Pega o último número pela diferença da divisão por 10

    thousand= dthousand/10;
    thousand_df=(int)dthousand%10;

    hundred= thousand/10;
    hundred_df=(int)thousand%10;

    ten= hundred/10;
    ten_df=(int)hundred%10;

    unity= ten/10;
    unity_df= (int)ten%10;

    if( ten_df >=3 && hundred_df >=4 && thousand_df >=5 && dthousand_df >=6){
      i++; //classificar se os últimos números são maiores ques as respectivas casas
      if( unity_df != ten_df && unity_df != hundred_df && unity_df != thousand_df && unity_df != dthousand_df && ten_df != hundred_df && ten_df != thousand_df && ten_df != dthousand_df && hundred_df != thousand_df && hundred_df != dthousand_df && thousand_df != dthousand_df){// o if classifica apenas os números diferentes entre si para imprimir.
       sum+=1; // variável contador. Saber a quantidade de senhas. Soma mais 1.  
       printf("%d%d%d%d%d\n", (int)unity_df, (int)ten_df,(int)hundred_df,(int)thousand_df,(int)dthousand_df); //saídas das variaveis que receberam os últimos números das divisões .
       
      }
    }


      
  } 
  
  printf("All passaword: %d",sum);// saída da variável contador. Deve está fora do loop.

  return 0;
}