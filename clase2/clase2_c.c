#include <stdio.h>

//permite manupular cadenas de valores (tipo char) con mayor facilidad
#include <string.h>


int main(){
int nota =5;

//funcion switch case

//Comparando el valor ingresado en switch, lo compara con los casos y emite una accion hasta el break
switch (nota) {
case '5':
    printf("fino papi \n");
    break;
case '4':
printf("bien bien");
default:
printf("guanabana");
    break;
}


// funcion do while

int valorMaximo = 10;
int valorMinimo = 1;

//ejecuta la palabra indicada hasta valorMaximo cantidad de veces
do {
    valorMinimo++;
    printf("papaya con cambur");
}

while (valorMinimo < valorMaximo);


//estructura de datos 


//declara variables distintas agrupadas bajo un mismo nombre
struct books {
    char title[50]; //array con capacidad de 50 caracteres
    char author[50]; 
    int bookId;
};


//se declara la variable de tipo struct books antes creada
struct books libro1;

//funcion de la libreria string.h
strcpy(libro1.title, "cien años de soledad");

libro1.bookId = 1;


    return 0;
    //no se ejecuta nada despues del return
}



