#include <stdio.h>
int main(){
    int a[5];

    printf("Direccion de memoria de: %p",&a[-1]);
    printf("\n");
    printf("Direccion de memoria de: %p", &a[5]);
    
    return 0;
}
