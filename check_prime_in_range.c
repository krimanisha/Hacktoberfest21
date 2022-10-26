//check the prime number within the range 
#include<stdio.h>
int main(){
    int m,n,i,j,p=1;
    printf("enter the range to check the prime : ");
    scanf("%d %d",&m,&n);
    for(i=m;i<=n;i++){
        p=1;
        for(j=2;j<=i/2;j++){
            if(i%j==0)
                p=0;
        }
        if(p==1)
        printf("%d , ",i);
    }
    return 0;
}