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


