#include <stdio.h>
int giaiThua(int a){
    int tich =1;
    for(int i=1;i<=a;i++){
        tich*=i;
    }
    return tich;
}
int main(int argc, const char * argv[]) {
    printf("Giai thua cua %d la %d", 4,giaiThua(4));
    return 0;
}
