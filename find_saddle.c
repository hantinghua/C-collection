#include <stdio.h>

int check(int a[][7],int m,int n,int max){
    int flag=0;
    for(int i=0;i<max;i++){
        if(a[m][n]>a[i][n]){
            return 0;
        }
    }
    for(int i=0;i<max;i++){
        flag=0;
        if(a[m][n]<a[m][i]){
            return 0;
        }
    }
    return 1;
}

int main(void){
    int n=0;
    int t1=0,t2=0;
    scanf("%d",&n);
    int a[7][7];
    int flag=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n&&!flag;i++){
        flag=0;
        for(int j=0;j<n;j++){
            if(check(a,i,j,n)){
                flag=1;
                t1=i;
                t2=j;
                break;
            }
        }
    }
    if(flag==0){
        printf("NONE");
    }else{
        printf("%d %d",t1,t2);
    }
    return 0;
}