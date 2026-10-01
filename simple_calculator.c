#include <stdio.h>
int main(void){
    char n;
    int a,b;
    int q,w,e,r;
    
    printf("1番目数字入力してください");
    scanf("%d", &a);
    printf("演算子を入力してください(+,-,/,*)");
    scanf("%c", &n);
    printf("2番目数字入力てしてください");
    scanf("%d", &b);
    
    q=a+b;
    w=a-b;
    e=a/b;
    r=a*b;
    
    switch(n){
        case'+':
        printf("%d",q);
        break;

        case'-':
        printf("%d",w);
        break;
        
        case'/':
        printf("%d",e);
        break;
        
        case'*':
        printf("%d",r);
        break;

        default:
        printf("わかりません");
        break;
    }
}
