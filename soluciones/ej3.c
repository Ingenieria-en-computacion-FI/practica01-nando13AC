#include <stdio.h>

int main(){
    int a[3];
    
    for(int i = 0; i<3; i++){
        printf("Direcciones del arreglo a:%p\n", &a[i]);
    }

    printf("\n");

    int b[3];

    for(int i = 0; i<3; i++){
        printf("Direcciones del arreglo b:%p\n", &b[i]);
    }

    printf("\n");

    int c[3];

    for(int i = 0; i<3; i++){
        printf("Direcciones del arreglo c:%p\n", &c[i]);
    }

    return 0;
}


//1. Imprime todas las direcciones.
//Direcciones del arreglo a:0061FF08
//Direcciones del arreglo a:0061FF0C
//Direcciones del arreglo a:0061FF10

//Direcciones del arreglo b:0061FEFC
//Direcciones del arreglo b:0061FF00
//Direcciones del arreglo b:0061FF04

//Direcciones del arreglo c:0061FEF0
//Direcciones del arreglo c:0061FEF4
//Direcciones del arreglo c:0061FEF8

//2. ¿Están juntos en la memoria?
//No es seguro que las direcciones estén juntas en la memoria, pues podrían aparecer de forma inversa o con saltos,
//por lo que es más seguro que estén cerca, pero no juntos. 


//3. ¿De qué depende?
//Depende de la alineación de memoria, pues el procesador lee en bloques de 4 o de 8 bytes.
//Si el arreglo termina en un valor distinto se añaden espacios vacíos antes de empezar con el siguiente.
