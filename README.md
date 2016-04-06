# bccpolya
Exercicio do BCC de raiz quadrada
Exercício de função que calcula uma raiz quadrada


#Linguagem Matemática
Os Babilônios utilizavam um algoritmo para aproximar uma raiz quadrada de um número qualquer, da seguinte maneira:

Dado um número n, para encontrar a raiz quadrada aproximada, assumimos uma aproximação inicial a0 e calculamos b0. Em seguida, utilizamos o algoritmo: 

aK = (aK-1+ bK-1)/2   

bK = n/ aK

Onde, para cada iteração (aK , bK), para todo K = 1, 2, 3, ..., encontramos uma raiz n mais aproximada.

O erro da aproximação é dado por E = |(bK)2 - n|. Se o valor absoluto da diferença entre (bk)2 e n for menor do que a precisão ε, então tome como raiz aproximada.

#Logica em português estruturado
```
REAL
INICIO
REAL n
CARACTER s = 's'
REAL resultado

LEIA N
resultado = RAIZQ(n);
ESCREVA ("Resultado final: ",resultado)

ESCREVA("Deseja realizar outra operacao com raiz?s\n");
LEIA s
REPITA
  ESCREVA("Resposta invalida, por favor digite uma caractere válido s/n ou S/N:" );

  LEIA s
ENQUANTO(s != 'n' E s != 's' E s != 'S' E s !='N')
SE(s == 'n' OU s == 'N')
FIM
SE(s == 's' OU s == 'S')
RETORNE INICIO:


REAL RAIZQ(REAL n)
{
  REAL erro = 0.00001
  REAL  s = n;
  REPITA
    s = (s + n/s)/2;
    LEIA("Resultado Intermediário:",s );
  ENQUANTO ((s - n/s) > erro) 
  RETORNE s;


```

BCCPolya é uma homenagem ao George Pólya matemático hungaro, autor do livro "A Arte de Resolver Problemas" 

