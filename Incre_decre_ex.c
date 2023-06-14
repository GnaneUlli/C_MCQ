#include<stdio.h>

int main(){
    
    int a=8;
    
    int b=a++;
    
    printf("%d\n",b);
    
    int c = b*a;
    
    printf("%d\n",c);
    
    c=++a;
    
    printf("%d\n",a);
    
    printf("%d",c);
}
