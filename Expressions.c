1.
#include<stdio.h>
    
int main()
{
    int i=-3, j=2, k=0, m;
    m = ++i && ++j && ++k;
    printf("%d, %d, %d, %d\n", i, j, k, m);
    return 0;
}

Ans : -2, 3, 1, 1
/*Step 1: int i=-3, j=2, k=0, m; here variable i, j, k, m are declared as an integer type and variable i, j, k are initialized to -3, 2, 0 respectively.

Step 2: m = ++i && ++j && ++k;
becomes m = -2 && 3 && 1;
becomes m = TRUE && TRUE; Hence this statement becomes TRUE. So it returns '1'(one). Hence m=1.

Step 3: printf("%d, %d, %d, %d\n", i, j, k, m); In the previous step the value of i,j,k are increemented by '1'(one).

Hence the output is "-2, 3, 1, 1". */
  
2.
  
#include<stdio.h>

int main()
{
    printf("%x\n", -2<<2);
    return 0;
}

Ans : fff8

/*The integer value 2 is represented as 00000000 00000010 in binary system.

Negative numbers are represented in 2's complement method.

1's complement of 00000000 00000010 is 11111111 11111101 (Change all 0s to 1 and 1s to 0).

2's complement of 00000000 00000010 is 11111111 11111110 (Add 1 to 1's complement to obtain the 2's complement value).

Therefore, in binary we represent -2 as: 11111111 11111110.

After left shifting it by 2 bits we obtain: 11111111 11111000, and it is equal to "fff8" in hexadecimal system.*/

3.

#include<stdio.h>
int main()
{
    int i=-3, j=2, k=0, m;
    m = ++i || ++j && ++k;
    printf("%d, %d, %d, %d\n", i, j, k, m);
    return 0;
}

Ans : -2, 2, 0, 1
  
/*Step 1: int i=-3, j=2, k=0, m; here variable i, j, k, m are declared as an integer type and variable i, j, k are initialized to -3, 2, 0 respectively.

Step 2: m = ++i || ++j && ++k; here (++j && ++k;) this code will not get executed because ++i has non-zero value.
becomes m = -2 || ++j && ++k;
becomes m = TRUE || ++j && ++k; Hence this statement becomes TRUE. So it returns '1'(one). Hence m=1.

Step 3: printf("%d, %d, %d, %d\n", i, j, k, m); In the previous step the value of variable 'i' only increemented by '1'(one). The variable j,k are not increemented.

Hence the output is "-2, 2, 0, 1". */
  
4.
  
Associativity has no role to play unless the precedence of operator is same.
  
Ans : True

5.

In the expression a=b=5 the order of Assignment is NOT decided by Associativity of operators

Ans : False

6.
#include<stdio.h>
int main()
{
if(sizeof(int) > -5) //line 1
printf("True\n");
else
printf("False");
return 0;
}

Ans : False
/*In C, sizeof() operator returns unsigned integer value. At line
1, the unsigned integer and default integer (signed) value is getting
compared. The relational operators only allow comparison between the
same data type on both the left and right-hand sides. So, the standard C
compiler promotes the signed integer to an unsigned integer. The value of
-5 in an unsigned integer is a very large positive number. This makes the if
condition false, else part will execute, and ‘False’ will get printed.*/    
    
7.
    
#include<stdio.h>
int main()
{
int i = 3;
int j = i+(i=10); //line 2
printf("%d\n", j);
return 0;
}

Ans : 20
    
/*At line 2 in a given program, parenthesis has higher
precedence than the ‘+’ operator, it first evaluates parenthesis and then
‘+’. If we remove the parenthesis it throws an l-value required error.
"Lvalue required" means that it is not possible to assign a value to
something that has no place in memory. A variable on the left-hand side is
needed to assign a value. Few l-value error occurring operations are 3 = a;
2 = 2;*/

8.

#include<stdio.h>
int main()
{
int i = 1;
int j = 2;
if(i & j == 1)
{
printf("true");
}
else
printf("false");
return 0;
}
Ans: false
    
/*Precedence of the relational operator ‘==’ is higher than
logical operator ‘&’. Hence, ‘false’ will get printed.*/

9.
#include<stdio.h>
int main()
{
int i=3, j=2;
int k = i << 1 > 5;// line 2
printf("%d\n", k);
return 0;
}
Ans : 1
/*‘<<’ is left shift operator, and its precedence is higher than
relational operator ‘>’.
k = i << 1 > 5 ; → k = ( 3 << 1 ) >5 ; → k = (0000 0011 << 1) > 5 ; → k =
(0000 0110) > 5 ; → k = 6 > 5 ; → k=1;*/

10.
    
#include<stdio.h>
int main()
{
int i=2, j=2;
int k = i^j&1;//line 2
printf("%d", k);
return 0;
}

Ans : 2  
    
/*The ‘^’ (XOR) and ‘&’ (Logical And) operators have the
same precedence, associativity will be checked. The logical operators are
R-L associative. The expression at line 2 can be written as:
k = i^(j&1) ;
k = 0000 0010 ^ (0000 0010 & 0000 0001);
k = 0000 0010 ^ (0000 0000) ;
k = 0000 0010 ;
k = 2 ;*/

11.
! has higher precedence than && and == so ! it will execute last

12.
#include<stdio.h>
int main()
{
int a[3] = {5, 6, 7};
char *c = (char *)a;
printf("%d, %d, %d, %d ", *c, c[0], c[1], c[2]);
return 0;
}

Ans :  5, 5, 0, 0


/*int a[3]={5,6,7};
05 00 00 00 06 00 00 00 07 00 00 00
1000 1001 1002 1003 1004 1005 1006 1007 1008 1009 1010 1011
Hence, c[0] = 5; c[1] = 0; c[2] = 0; c[8] = 7;*/

13.
#include<stdio.h>
#define FOO(x) foo(#x) //line 2
int foo(char *x)
{
printf("%c %c", *x,x[1]); //line 4
}
int main()
{
FOO(65); //line 8
return 0;
}

Ans : 6 5
/*the execution of a given program is done in two steps: (i)
The macro FOO(x) will get substituted as foo(#x), where ‘#’ converts ‘x’
to string. The number 65 will be converted into the string "65". (ii) The
function call will take place as foo("65"). In function foo(), string "65" is
pointed by character pointer ‘x’. Hence, x[0] will give ‘6’ and x[1] will give 5*/


