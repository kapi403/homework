#include<stdio.h>
int main(){
    int n,a1=1,a2=3;
    scanf("%d",&n);
    double sum=0;
    for(int i=1;i<=n;i++){
        if(i==1){    
        sum=1;
        a1=a1+1;
        continue;
        }else{
        if(a1%2==0){       
            sum=sum-(double)a1/a2;
        }else{
            sum=sum+(double)a1/a2;
        }a1=a1+1;
        a2=a2+2;
}}
    printf("%.3f\n", sum);
    return 0;
}