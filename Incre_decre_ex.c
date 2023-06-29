1.
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

Ans : Find answers on your own and check with gdb compiler

2.
#include<stdio.h>
int main()
{
int a = 10;
a++;
(a++)++; //line 3
printf("%d",a);
return 0;
}


Ans  : Error l-value required
/*We cannot assign a value to a number,
there must be a variable at the left-hand side of the assignment operator for
storing a value*/

3.
#include<stdio.h>
int main()
{
int a = 1 , b = 0;
int c = ++(++b)||a++;
printf("%d %d %d",a,b,c);
return 0;
}

Ans : Error l-value required

/*At line 2, we are applying ++ operator
on value not on variable, (++(++b)).*/

4.
#include<stdio.h>
#define a 100
int foo()
{
printf("%d ",a); //line 5
return 0;
}
int main()
{
int b = a; //line 10
#define a 200 //line 11
printf("%d ",b);
printf("%d ",a); //line 13
foo();
return 0;
}

Ans : 100,200,100
//Here scope of once defined macro cannot be unchanged until its #undefine, but redeclaration variable changes variable value.
