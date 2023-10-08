#include <stdio.h> //inclusão para poder usar a função printf
int main() {
 int a; //Declaração de um tipo simples
 int *p; //Declaração de um ponteiro
 p = &a; //O ponteiro recebe o endereço da variável a
 a = 10; //Atribuímos 10 para a variável a
 printf(“a = %d\n”, *p); //Ao imprimir, usamos a indireção do ponteiro p (o valor de a, que é 10)
 *p = 20; //Atribuímos para o local do endereço de p (a variável a) o valor 20
 printf(“a = %d\n”, a); //Ao imprimir, usamos a variável a (que agora é 20)
 return 0;
}