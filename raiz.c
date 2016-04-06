#include <stdio.h>

double raizq(double);

int main(void){
double n;
int loop = 1;
char s = 's';
float resultado;

scanf("%lf",&n);
resultado = raizq(n);
printf("Resultado final: %lf\n",resultado);

printf("Deseja realizar outra operacao com raiz?s/n\n");
scanf(" %c",&s );
while(s != 'n' && s != 's' && s != 'S' && s !='N'){
  printf("Resposta invalida, por favor digite uma caractere válido s/n: \n" );
  fflush(stdin);
  scanf(" %c",&s );
}
if(s == 'n' || s == 'N')
return 0;
if(s == 's' || s == 'S')
return main();



}

double raizq(double n)
{
  double erro = 0.00001; // Margem de erro
  double  s = n;
  while ((s - n/s) > erro) {
    s = (s + n/s)/2;
    printf("Resultado Intermediário: %lf\n",s );
  }
  return s;
}
