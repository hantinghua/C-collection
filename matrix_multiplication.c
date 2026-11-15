#include <stdio.h>

int main(void){
    int a[101][101]={0},b[101][101]={0};
    int r1=0,c1=0;
    scanf("%d %d",&r1,&c1);
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int r2=0,c2=0;
    scanf("%d %d",&r2,&c2);
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            scanf("%d",&b[i][j]);
        }
    }
    if(c1!=r2){
        printf("Error: %d != %d",c1,r2);
    }else{
        printf("%d %d\n",r1,c2);
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                int sum=0;
                for(int k=0;k<c1;k++){
                    sum+=a[i][k]*b[k][j];
                }
                if(j>0)printf(" ");
                printf("%d",sum);
            }
            printf("\n");
        }
    }
    return 0;
}