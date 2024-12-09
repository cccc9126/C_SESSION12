#include <stdio.h>
int Max(int a[],int length){
    int max = a[0];
    for(int i=0;i<length;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    return max;
}
int main(int argc, const char * argv[]) {
    int b[]={1,2,3,4,76,5,7,6};
    int length=sizeof(b)/sizeof(int);
    printf("so lon nhat trong mang la %d",Max(b,length));
    return 0;
}
