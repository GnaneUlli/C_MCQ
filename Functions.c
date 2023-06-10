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


