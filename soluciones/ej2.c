// Con la formula:  Dirección(a[i]) = &a[0] + i * sizeof(int)
    //Suponiendo que la dirección de a[0] es 0061FF04 ya que es en numeración hexadecimal
    //y además tomamos un dato de size of = 4 ya que trabajamos con int, la fórmula para &a[4] 
    //queda dada por 0061FF04+4*4 , 16 decimal = 0x10 en hexadecimal, 0061FF04+10 por lo tanto
    //la dirección será: 0061FF14, la dirección de a[5] queda dada por la fórmula: 0061FF04+5*4,
    //20 decimal=0x14 hexadecimal, 0061FF04+14, por lo tanto su dirección es: 0061FF18, 
    //comparando las direcciones nos damos cuenta de que la dirección de a[5] es mayor que la dirección de a[4].

    //Codigo para comprobara respuesta:

#include <stdio.h>
int main(){
    int a[6];
    
    for(int i = 4; i<6; i++){
        printf("La direccion de a[%i] es: %p\n",i, &a[i]);
    }
 
    return 0;
}
