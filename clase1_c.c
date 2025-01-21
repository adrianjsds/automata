//incluye la libreria studio.h que permite imprimir respuestas con printf
#include<stdio.h> 
//#include<conio.h>  NO FUNCIONA

//define la variable max = 0, no tiene tipo de declaración y cambia todas las referencias de "max" previo a la compilacion del archivo. Como es constante, usamos MAX en mayusculas
#define MAX 100

//declara una funcion, en este caso una que no devuelve nada, ni enteros ni palabras, solo corre la funcion add. C REQUIERE OBLIGATORIAMENTE QUE SE LE INDIQUE QUE VALOR DEVUELVE UNA FUNCION, SI DEVOLVIERA UN ENTERO, HABRIA QUE DECLARAR DICHA FUNCION COMO INT !!
void add();

//declaracion de un entero 
int x = 100;

int main(){

//declaracion de un entero dentro de main
    int a =100;

//devuelve el valor hola en consola
    printf("holaa");
   
   //indica que la funcion se ejecuto efectivamente hasta finalizar
   return 0;
}

//define la funcion add. HABERLA DEFINIDO ANTES PERMITE USARLA EN EL MAIN (fuera del main las funciones no se ejecutan), pese que se encuentra despues del main, si no no podría
void add(){
    printf("hola gente");
}