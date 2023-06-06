1.
Which of the following sentences are correct about a switch loop in a C program?
1:	switch is useful when we wish to check the value of variable against a particular set of values.
2:	switch is useful when we wish to check whether a value falls in different ranges.
3:	Compiler implements a jump table for cases used in switch.
4:	It is not necessary to use a break in every switch statement.
  
Ans : 1,3,4
  
2.
Which of the following sentences are correct about a for loop in a C program?
1:	for loop works faster than a while loop.
2:	All things that can be done using a for loop can also be done using a while loop.
3:	for(;;); implements an infinite loop.
4:	for loop can be used if we want statements in a loop get executed at least once.

Ans : 2, 3, 4

3.

#include<stdio.h>
int main()
{
    int i = 10, j = 15;
    if(i % 2 = j % 3)
        printf("IndiaBIX\n");
    return 0;
}

Ans : L value required

/*if(i % 2 = j % 3) This statement generates "LValue required error". 
There is no variable on the left side of the expression to assign (j % 3).*/

4.
If scanf() is used to store a value in a char variable then along with the value a carriage return(\r) also gets stored it.
  
Ans : false

/*No, the carriage return tells the compiler to read the input from the buffer after ENTER key is pressed.*/
  
5.
The modulus operator cannot be used with a long double.
  
Ans : True

/*fmod(x,y) - Calculates x modulo y, the remainder of x/y.
This function is the same as the modulus operator. But fmod() performs floating point or long double divisions.*/

6.
continue can work only with loops and not with switch
 
Ans : yes

7.
By default, the data type of a constant without a decimal point is int, whereas the one with a decimal point is a double.
  
Ans : Yes

/*6 is int constant.
6.68 is double.
6.68L is long double constant.
6.68f is float constant.*/
