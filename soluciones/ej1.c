
#include <stdio.h>
int main(){
    int a[6];
    
    for(int i = 0; i<6; i++){
        printf("La direccion de a[%i] es: %p\n",i, &a[i]);
    }
    return 0;
}
