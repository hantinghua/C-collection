#include <stdio.h>

int shift_once(int* a,int* b,int n){
    for(int i=0;i<n-1;i++){
        b[i]=a[i];
    }
    a[0]=a[n-1];
    for(int i=0;i<n-1;i++){
        a[i+1]=b[i];
    }
}

int main(void){
    int n,m;
    int a[101];
    int b[101];
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<m;i++){
        shift_once(a,b,n);
    }
    for(int i=0;i<n;i++){
        if(i>0)printf(" ");
        printf("%d",a[i]);
    }
    return 0;
}