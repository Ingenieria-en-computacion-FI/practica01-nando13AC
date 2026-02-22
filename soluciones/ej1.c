
#include <stdio.h>
int main(){
    int a[6];
    
    for(int i = 0; i<6; i++){
        printf("La direccion de a[%i] es: %p\n",i, &a[i]);
    }
    return 0;
}
//Direcciones impresas:
//La direccion de a[0] es: 0061FF04
//La direccion de a[1] es: 0061FF08
//La direccion de a[2] es: 0061FF0C
//La direccion de a[3] es: 0061FF10
//La direccion de a[4] es: 0061FF14
//La direccion de a[5] es: 0061FF18

//Diferencia entre direcciones consecutivas:
//La diferencia es de 0x4 en hexadecimal, es decir, 2 bytes de diferencia.

//Fórmula general para dirección de a[i].
//Dirección(a[i]) = &a[0] + i * sizeof(int)
//En este caso al ser el tamaño de 4 bytes la fórmula es: Dirección de a[i]=&a[0]+i*4
