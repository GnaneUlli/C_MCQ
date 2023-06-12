1.
#include<stdio.h>

int main()
{
    int fun();
    int i;
    i = fun();
    printf("%d\n", i);
    return 0;
}
int fun()
{
    _AX = 1990;
}

Ans : 1990
/*Turbo C (Windows): The return value of the function is taken from the Accumulator _AX=1990.

But it may not work as expected in GCC compiler (Linux).*/
  
2.
#include<stdio.h>
int i;
int fun();

int main()
{
    while(i)
    {
        fun();
        main();
    }
    printf("Hello\n");
    return 0;
}
int fun()
{
    printf("Hi");
}

Ans : Hello

/*Step 1: int i; The variable i is declared as an integer type.

Step 1: int fun(); This prototype tells the compiler that the function fun() does not accept any arguments and it returns an integer value.

Step 1: while(i) The value of i is not initialized so this while condition is failed. So, it does not execute the while block.

Step 1: printf("Hello\n"); It prints "Hello".

Hence the output of the program is "Hello".*/

3.
#include<stdio.h>
int reverse(int);

int main()
{
    int no=5;
    reverse(no);
    return 0;
}
int reverse(int no)
{
    if(no == 0)
        return 0;
    else
        printf("%d,", no);
    reverse (no--);
}

Ans : infinite loop
/*Step 1: int no=5; The variable no is declared as integer type and initialized to 5.

Step 2: reverse(no); becomes reverse(5); It calls the function reverse() with '5' as parameter.

The function reverse accept an integer number 5 and it returns '0'(zero) if(5 == 0) if the given number is '0'(zero) or else printf("%d,", no); it prints that number 5 and calls the function reverse(5);.

The function runs infinetely because the there is a post-decrement operator is used. It will not decrease the value of 'n' before calling the reverse() function. So, it calls reverse(5) infinitely.

Note: If we use pre-decrement operator like reverse(--n), then the output will be 5, 4, 3, 2, 1. Because before calling the function, it decrements the value of 'n'.*/

4.
#include<stdio.h>
int sumdig(int);
int main()
{
    int a, b;
    a = sumdig(123);
    b = sumdig(123);
    printf("%d, %d\n", a, b);
    return 0;
}
int sumdig(int n)
{
    int s, d;
    if(n!=0)
    {
        d = n%10;
        n = n/10;
        s = d+sumdig(n);
    }
    else
        return 0;
    return s;
}

Ans :6,6
    
5.
#include<stdio.h>

int main()
{
    int fun(int);
    int i = fun(10);
    printf("%d\n", --i);
    return 0;
}
int fun(int i)
{
   return (i++);
}

Ans :9
/*Step 1: int fun(int); Here we declare the prototype of the function fun().

Step 2: int i = fun(10); The variable i is declared as an integer type and the result of the fun(10) will be stored in the variable i.

Step 3: int fun(int i){ return (i++); } Inside the fun() we are returning a value return(i++). It returns 10. because i++ is the post-increement operator.

Step 4: Then the control back to the main function and the value 10 is assigned to variable i.

Step 5: printf("%d\n", --i); Here --i denoted pre-increement. Hence it prints the value 9.*/
    
6.
#include<stdio.h>
int check (int, int);

int main()
{
    int c;
    c = check(10, 20);
    printf("c=%d\n", c);
    return 0;
}
int check(int i, int j)
{
    int *p, *q;
    p=&i;
    q=&j;
    i>=45 ? return(*p): return(*q);
}

Ans : Compile error

/* We cannot use return in ternary operators */

7.
#include<stdio.h>

int main()
{
    int i=1;
    if(!i)
        printf("IndiaBIX,");
    else
    {
        i=0;
        printf("C-Program");
        main();
    }
    return 0;
}

Ans : prints C-program infinetly

8.
#include<stdio.h>
int i;
int fun1(int);
int fun2(int);

int main()
{
    extern int j;
    int i=3;
    fun1(i);
    printf("%d,", i);
    fun2(i);
    printf("%d", i);
    return 0;
}
int fun1(int j)
{
    printf("%d,", ++j);
    return 0;
}
int fun2(int i)
{
    printf("%d,", ++i);
    return 0;
}
int j=1;

Ans : 4,3,4,3
    
/*Step 1: int i; The variable i is declared as an global and integer type.

Step 2: int fun1(int); This prototype tells the compiler that the fun1() accepts the one integer parameter and returns the integer value.

Step 3: int fun2(int); This prototype tells the compiler that the fun2() accepts the one integer parameter and returns the integer value.

Step 4: extern int j; Inside the main function, the extern variable j is declared and defined in another source file.

Step 5: int i=3; The local variable i is defines as an integer type and initialized to 3.

Step 6: fun1(i); The fun1(i) increements the given value of variable i prints it. Here fun1(i) becomes fun1(3) hence it prints '4' then the control is given back to the main function.

Step 7: printf("%d,", i); It prints the value of local variable i. So, it prints '3'.

Step 8: fun2(i); The fun2(i) increements the given value of variable i prints it. Here fun2(i) becomes fun2(3) hence it prints '4' then the control is given back to the main function.

Step 9: printf("%d,", i); It prints the value of local variable i. So, it prints '3'.

Hence the output is "4 3 4 3".*/
    
9.
#include<stdio.h>
int fun(int);
int main()
{
    float k=3;
    fun(k=fun(fun(k)));
    printf("%f\n", k);
    return 0;
}
int fun(int i)
{
    i++;
    return i;
}
Ans : 5.000000
    
10.
#include<stdio.h>

int main()
{
    printf("%p\n", main());
    return 0;
}

Ans : Runs infinitely without printing anything
/*In printf("%p\n", main()); it calls the main() function and then it repeats infinetly, untill stack overflow.*/

11.

A function cannot be defined inside another function
Ans : True

12.
Functions cannot return a floating point number

Ans : False

//It can

13.

Every function must return a value
Ans : False

// Void has no return type

14.

If a function contains two return statements successively, the compiler will generate warnings.
Ans : True

15.
Maximum number of arguments that a function can take is 12
Ans : False
//No, C can accept upto 127 maximum number of arguments in a function.

16.
Recursion takes more time than loops

Ans : True

/*When a recursion is invoved it has to call the whole function again and again but in loops it has to only iterate through 
the line so recursion takes more memory and time */





