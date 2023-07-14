1.
  
#include<stdio.h>
int main()
{
char str[] = "India";
const char *ptr;
ptr = str;
ptr++;
//++*ptr;
printf("%s", ptr);
return 0;
}
Ans : ndia

2.
What will be the output if we uncomment the commented line in the
above program?
Ans : Error updating the constant expression is not allowed

3.
#include<stdio.h>
int main()
{
char str[] = "India";
char *const ptr;
ptr = str;
ptr++;
printf("%s", ptr);
return 0;
}
Ans :  Error updating the constant expression is not allowed

4.
#include<stdio.h>
int main()
{
char str[] = "Hello";
const char * const ptr;
ptr = str; //line 3
//ptr++; //line 4
++*ptr; //line 5
printf("%s", ptr);
return 0;
}
Ans : Error at line 3 and 5

5.
What will be the output if we uncomment the commented line in the
above program?
Ans : Error at line 3,4 and 5.

6.
#include<stdio.h>
int main()
{
char str[] = "India";
char *ptr;
ptr = str;
ptr++;
++*ptr;
printf("%s", ptr);
}

Ans : odia
  
6.
#include<stdio.h>
int fun()
{
static int const i = 10;
int j = i+1;
return j;
}
int main()
{
int i , j = 0 ;
for(i = 1 ; i <= 5 ; i++)
j += fun();
printf("%d", j);
return 0;
}

Ans : 55

7.
#include<stdio.h>
int main()
{
int i = 10 , j = 20;
int *const p = &i; //line1
*p = 20; //line2
printf("%d %d",i,*p);
return 0;
}

Ans : 20,20
  
/*In the given program, the const keyword is used after the ‘*’
operator and before ‘p’, so, ‘p’ is constant, we cannot change ‘p’ but we
can change the value of the variable pointed by ‘p’. Hence, the program
will not throw any error and 20 20 get printed by printf() function*/

8.
#include<stdio.h>
int main()
{
const int i = 10;
int *p = &i;
*p = 20;
printf("%d %d",i,*p);
return 0;
}
Ans : 20
/*The given program will throw an error in C++, not in C
because C++ is more type restrictive than C. We have assigned the address
of a constant variable to a non-constant pointer, this concept is called
down qualification. We are updating ‘i’ with the help of its address, this
concept is also called "variable hacking"*/

9.
#include<stdio.h>
int main()
{
const int x=5;
const int *ptrx;
ptrx = &x;
*ptrx = 10;
printf("%d\n", x);
return 0;
}

Ans : Error compile time
//ptrx is not changable

10.
#include <stdio.h>
int *f1()
{
int x = 10;
return &x;
}
int *f2()
{
int *ptr;
*ptr = 10;
return ptr;
}
int *f3()
{
int *ptr;
ptr = (int*) malloc(sizeof (*ptr));
return ptr;
}
Ans :  f3 only
