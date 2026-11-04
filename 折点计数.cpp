#include<stdio.h>
int main(){
    int n,t,a,b=0,c;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&t);
        if(i==0){
            a=t;/*初始化a为第一个数*/
            continue;
        }else if(i==1){
            c=t;
            continue;
        }
        else{
            if(c>a&&c>t || c<a&&c<t){/*判断当前数是否在a和c之间*/
                b++; 
                a=c;/*更新a为前一个数*/
                c=t;/*更新c为当前数*/
            }else{
                a=c;/*更新a为前一个数*/
                c=t;/*更新c为当前数*/
            }
        }
    }
    printf("%d\n",b);
    return 0;
}