1.
#include<stdio.h>
#define SWAP(a, b, c)(c t; t=a, a=b, b=t)
int main()
  
{
    int x=10, y=20;
    SWAP(x, y, int);
    printf("%d %d\n", x, y);
    return 0;
}

Ans: Not compile

//The code won't compile since declaration of t cannot occur within parenthesis.

2.

#include<stdio.h>
#define MAN(x, y) ((x)>(y)) ? (x):(y);

int main()
{
    int i=10, j=5, k=0;
    k = MAN(++i, j++);
    printf("%d, %d, %d\n", i, j, k);
    return 0;
}
Ans : 12, 6, 12
/*The macro MAN(x, y) ((x)>(y)) ? (x):(y); returns the biggest number of given two numbers.

Step 1: int i=10, j=5, k=0; The variable i, j, k are declared as an integer type and initialized to value 10, 5, 0 respectively.

Step 2: k = MAN(++i, j++); becomes,

=> k = ((++i)>(j++)) ? (++i):(j++);

=> k = ((11)>(5)) ? (12):(6);

=> k = 12

Step 3: printf("%d, %d, %d\n", i, j, k); It prints the variable i, j, k.

In the above macro step 2 the variable i value is increemented by 2 and variable j value is increemented by 1.

Hence the output of the program is 12, 6, 12 */
  
3.
  
#include<stdio.h>
#define SQUARE(x) x*x

int main()
{
    float s=10, u=30, t=2, a;
    a = 2*(s-u*t)/SQUARE(t);
    printf("Result = %f", a);
    return 0;
}

Ans : -100.000000
  
/*Associative operations perform yourself */
  
4.
  
#include<stdio.h>
#define SQR(x)(x*x)

int main()
{
    int a, b=3;
    a = SQR(b+2);
    printf("%d\n", a);
    return 0;
}

Ans : 11
/* The macro function SQR(x)(x*x) calculate the square of the given number 'x'. (Eg: 102)

Step 1: int a, b=3; Here the variable a, b are declared as an integer type and the variable b is initialized to 3.

Step 2: a = SQR(b+2); becomes,

=> a = b+2 * b+2; Here SQR(x) is replaced by macro to x*x .

=> a = 3+2 * 3+2;

=> a = 3 + 6 + 2;

=> a = 11;

Step 3: printf("%d\n", a); It prints the value of variable 'a'.

Hence the output of the program is 11 */
  
5.
  
#include<stdio.h>
#define FUN(i, j) i##j

int main()
{
    int va1=10;
    int va12=20;
    printf("%d\n", FUN(va1, 2));
    return 0;
}

Ans : 20
  
/* ## combines  the given variable names */
  
6.
#include<stdio.h>
#define str(x) #x
#define Xstr(x) str(x)
#define oper multiply

int main()
{
    char *opername = Xstr(oper);
    printf("%s\n", opername);
    return 0;
}

Ans : print 'multiply'
  
7.

Preprocessor directive #undef can be used only on a macro that has been #define earlier

Ans : True

8.

Every C program will contain at least one preprocessor directive.

Ans : False

9.
The preprocessor can trap simple errors like missing declarations, nested comments or mismatch of braces.

Ans : False

10.
Once preprocessing is over and the program is sent for the compilation the macros are removed from the expanded source code.
  
Ans : True
