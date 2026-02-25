#include <stdio.h>

int main(){
    int m[2][4];

    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            printf("\nDireccion de m[%i][%i] : %p\n",i,j, &m[i][j]);
        }
    }

    return 0;
}

//1. Imprime direcciones de todos los elementos.
//Direccion de m[0][0] : 0061FEF8
//Direccion de m[0][1] : 0061FEFC
//Direccion de m[0][2] : 0061FF00
//Direccion de m[0][3] : 0061FF04
//Direccion de m[1][0] : 0061FF08
//Direccion de m[1][1] : 0061FF0C
//Direccion de m[1][2] : 0061FF10
//Direccion de m[1][3] : 0061FF14

//2. Determina si almacenamiento es por filas o columnas.
//El almacenamiento es por filas

//3. Deduce la fórmula de dirección de m[i][j].
//Dir(m[i][j])=Base+((i⋅columnas+j)⋅sizeof(type))
//Para este caso la formula seria:
//Dir(m[i][j])=Base + (4i+j) * 4
