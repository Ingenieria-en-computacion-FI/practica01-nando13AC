#include <stdio.h>

int main(){
    int gigante[10000000];
    printf("Direccion de memoria de: %p", &gigante);

    return 0;
}

//Si falla:
//1. explica causa
//La principal causa es el desbordamiento de la pila, al declarar “int gigante[1000000]” dentro de main,
//pedimos que se reserven 10 millones de enteros por 4 bytes cada uno de golpe. 

//2. indica dónde se almacena
//Se almacena en el Stack o en la Pila 

//3. propone solución sin memoria dinámica
//Declarar un arreglo, como una variable global o usando “static”
