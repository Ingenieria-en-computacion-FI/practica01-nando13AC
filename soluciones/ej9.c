#include <stdio.h>
int main(){
    int a[5];

    printf("Direccion de memoria de: %p",&a[-1]);
    printf("\n");
    printf("Direccion de memoria de: %p", &a[5]);
    
    return 0;
}

//Por qué compila
//En C, el compilador no verifica los límites del arreglo en tiempo de compilación.

//Por qué es peligroso
//Porque estás accediendo a memoria fuera del bloque reservado para el arreglo. Eso puede:
//Corromper otra variable
//Alterar valores del stack
//Causar segmentation fault
//Generar comportamiento indefinido

//Qué revela sobre memoria
//Revela que:
//C permite aritmética de apuntadores sin protección.
//El lenguaje no implementa control automático de límites.
//El programador es responsable del manejo correcto de memoria.
