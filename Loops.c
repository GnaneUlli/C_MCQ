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
//The while() loop must have conditional expression or it shows "Expression syntax" error.

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

/* Step 1: for(;;) this statement will genereate infinite loop.
Step 2: printf("%d\n", i++); this statement will print the value of variable i and increement i by 1(one).
Step 3: if(i>10) here, if the variable i value is greater than 10, then the for loop breaks. */

2.
