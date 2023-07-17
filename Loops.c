1.
#include<stdio.h>
int main()
{
    int i=1;
    while()
    {
        printf("%d\n", i++);
        if(i>10)
           break;
    }
    return 0;
}
Ans : There should be a condition in the while loop
//The while() loop must have conditional expression or it shows "Expression syntax" error.
2.
#include<stdio.h>
int main()
{
    int i=1;
    for(;;)
    {
        printf("%d\n", i++);
        if(i>10)
           break;
    }
    return 0;
}
Ans : No error
/* Step 1: for(;;) this statement will genereate infinite loop.
Step 2: printf("%d\n", i++); this statement will print the value of variable i and increement i by 1(one).
Step 3: if(i>10) here, if the variable i value is greater than 10, then the for loop breaks. */

3.

#include<stdio.h>

int main()
{
    int a = 5;
    switch(a)
    {
	case 1:
	printf("First");

	case 2:
	printf("Second");

	case 3 + 2:
	printf("Third");

	case 5:
	printf("Final");
	break;

    }
    return 0;
}

Ans : Duplicate case case 5:

//Because, case 3 + 2: and case 5: have the same constant value 5

4.
#include<stdio.h>
int main()
{
    int P = 10;
    switch(P)
    {
       case 10:
       printf("Case 1");

       case 20:
       printf("Case 2");
       break;

       case P:
       printf("Case 2");
       break;
    }
    return 0;
}
Ans : Error: Constant expression required at line case P:

/*The compiler will report the error "Constant expression required" in the line case P:. 
Because, variable names cannot be used with case statements.
The case statements will accept only constant expression.*/

5.#include<stdio.h> 
int main()
{
    int a = 10, b;
    a >=5 ? b=100: b=200;
    printf("%d\n", b);
    return 0;
}
Ans : Error: L value required for b
/*Variable b is not assigned.

It should be like:

b = a >= 5 ? 100 : 200;*/

6. #include<stdio.h>
int main(){
    int a=1;
    if(a)
        printf("hs");
        printf("jk");
    else
        printf("sd");
    
}
// It prints error because two printfs cannot be used in single if without else
/*#include<stdio.h>
int main(){
    int a=1;
    if(a){
        printf("hs");
        printf("jk");
    }
    else{
        printf("sd");
    }
    
}
but this will print both conditions since a block is used , so using a block  is a standard rule of c written in micheal barr */

7.
#include<stdio.h>
int main()
{
int x=0, y=0;
while(x < 4, y < 7)
{
x++;
y++;
}
printf("%d, %d\n", x, y);
return 0;
}
Ans :  7, 7

8.
#include<stdio.h>
void fun()
{
label1: printf("3");
}
int main()
{
printf("1 ");
goto label1;
printf("2");
return 0;
}
Ans : error compile time 
//you can access goto with in same function.

9.
#include<stdio.h>
#define num(a) a
int main()
{
int a=1;
switch(a)
{
case num(2):
printf("yes ");
case num(1):
printf("no ");
break;
}
switch(a)
{
case 1:
printf("%d ", a);
case 2:
printf("%d ", a);
case 3:
printf("%d ", a);
default:
printf("%d", a);
}
return 0;
}
Ans : no 1 1 1 1
//just a simple switch case statement
