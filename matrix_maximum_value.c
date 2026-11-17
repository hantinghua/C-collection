#include <stdio.h>

int check(int i,int j,int a[21][21]){
    if(a[i][j]>a[i-1][j]&&
      a[i][j]>a[i+1][j]&&
      a[i][j]>a[i][j-1]&&
      a[i][j]>a[i][j+1])return 1;
    return 0;
}

int main(void){
    int m=0;
    int n=0;
    int a[21][21]={0};
    int cnt=0;
    scanf("%d %d",&m,&n);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=1;i<m-1;i++){
        for(int j=1;j<n-1;j++){
            if(check(i,j,a)){
                printf("%d %d %d\n",a[i][j],i+1,j+1);
                cnt++;
            }
        }
    }
    if(cnt==0)printf("None %d %d",m,n);
    return 0;
}