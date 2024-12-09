#include <stdio.h>
void soNguyenTo(int a){
    if(a>=2){
        int count=0;
        for(int i=2;i<a;i++){
            if(a%i==0){
                count++;
            }
        }
        if(count==0){
            printf("true\n");
        }else{
            printf("false\n");
        }
    }
}
int main(int argc, const char * argv[]) {
    int num;
    printf("hay nhap mot so bat ki : ");
    scanf("%d",&num);
    soNguyenTo(num);
    return 0;
}
