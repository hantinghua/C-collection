#include <stdio.h>

void insert(int* a,int* b,int k,int n){
    for(int i=0;i<n-k;i++){
        b[i]=a[k+i];
    }
    return;
}

int main(void){
    int n;
    int a[100]={0};
    int b[100]={0};
    scanf("%d",&n);
    int cnt=n;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int x;
    scanf("%d",&x);
    for(int i=0;i<n;i++){
        if(a[i]>x){
            insert(a,b,i,n);
            a[i]=x;
            cnt=i;
            break;
        }
    }
    if(cnt==n){
        a[n]=x;
    }else{
        for(int i=0;i<n-cnt;i++){
        a[cnt+i+1]=b[i];
    }
    }
    for(int i=0;i<n+1;i++){
        printf("%d ",a[i]);
    }
    return 0;
}