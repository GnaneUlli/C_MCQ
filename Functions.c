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


