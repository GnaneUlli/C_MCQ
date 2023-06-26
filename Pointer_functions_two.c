1.
#include <stdio.h>
void fun1(int*, int);
void fun2(int*, int);
void (*fun_ptr[2])(int*, int);
int main()
{
int x = 4;
int y = 7;
fun_ptr[0] = fun1;
fun_ptr[1] = fun2;
fun_ptr[0](&x, y);
printf("%d %d ", x, y);
fun_ptr[1](&x, y);
printf("%d %d\n", x, y);
return 0;
}
void fun1(int *a, int b)
{
int temp = *a;
*a = b;
b = temp;
}
void fun2(int *a, int b)
{
int temp = *a;
*a = b;
b = temp;
}
Ans : 7,7,7,7
  
/*A simple swapping program where one variable is call by value and another is call by reference, so the call by 
  reference will have changes where as call by value doesn't changes*/

2.
#include<stdio.h>
int fun()
{
int a = 10;
return a;
}
int main()
{
int *a = fun();
printf("%d %u ",a, a+1 );
return 0;
}

Ans : 10,14
// a is value and increasing a+1 means a value + step size of integer value 4 so 14.

3.
#include<stdio.h>
int fun()
{
int a = 10;
return a;
}
int main()
{
int *a = NULL;
*a = fun()
printf("%d ",*a );
return 0;
}

Ans : Error compile time 
/*In the given program, it compiles fine but we are trying to
access memory location 10 after the function call, which could not be a
valid memory address. Hence, a run time error gets thrown.*/

4.
#include<stdio.h>
int a = 10;
void fun2()
{
int *p;
{
int a=5;
p = &a;
}
a++;
++*p;
printf("%d ", *p);
}
void fun1()
{
a = 1;
printf("%d ",a);
a++;
fun2();
int a=4;
printf("%d ", --a);
}
int main()

Ans : 1,6,3,6,4
// A good practice question explian yourself.

5.

