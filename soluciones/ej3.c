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
