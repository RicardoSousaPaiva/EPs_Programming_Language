/*FATEC 
Curso: ADS/B; Matutino
Disciplina: Linguagem de programação
Professor: Reinaldo Arakaki
Aluno: Ricardo Sousa de Paiva
Desafio: Problema Taylor*/


#include <stdio.h>
#include <math.h>

int main(){

 int x,four_digit;
 float r,sum,a,b,i;

 scanf("%d",&x); //entrada número inteiro
    r= (x * 3.1415)/180; //Converter em radianos
    a=1;
    b=1;
    sum=0;

    for (i = 1; i <= 5;i++ ){
        sum= sum + (a/b);
        a= a * -pow( r,2); //Termo de recorrência de a 
        b= b * (2 * i) * (2 * i - 1); //Termo de recorrência de b
    }
 //Critérios para o arredondamento das saídas
 four_digit=(int)sum%10;//última casa de sum 
    if (four_digit > 6){ //acrescentar +1 apenas se for >6
        sum=ceilf(sum); //função que aumenta um valor. 
    }
 //Imprimir saída
 printf("%.3f",sum);//saída com 3 casas decimais após a vírgula.

 return 0;
}
