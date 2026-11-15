#include <stdio.h>

int check(int* a,int* b,int m,int n,int* c){
    int flag=0;
    int t=0;
    for(int i=0;i<m;i++){
        flag=0;
        for(int j=0;j<n;j++){
            if(a[i]==b[j]){
                flag=1;
                break;
            }
        }
        if(flag==0){
            int exist=0;
            for(int k=0;k<t;k++){
                if(c[k]==a[i]){
                    exist=1;
                    break;
                }
            }
            if(exist==0){
                c[t++]=a[i];
            }
        }
    }
    for(int i=0;i<n;i++){
        flag=0;
        for(int j=0;j<m;j++){
            if(a[j]==b[i]){
                flag=1;
                break;
            }
        }
        if(flag==0){
            int exist=0;
            for(int k=0;k<t;k++){
                if(c[k]==b[i]){
                    exist=1;
                    break;
                }
            }
            if(exist==0){
                c[t++]=b[i];
            }
        }
    }
    return t;
}

int main(void){
    int m=0,n=0;
    int a[21]={0};
    int b[21]={0};
    int c[21]={0};
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    int cnt=check(a,b,m,n,c);
    for(int i=0;i<cnt;i++){
        if(i>0)printf(" ");
        printf("%d",c[i]);
    }
    return 0;
}