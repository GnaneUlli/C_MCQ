1.
  
What is the output of the following program?
  
#include<stdio.h>
int *fun()
{
int b = 10;
return &b;
}
int main()
{
int *p;
p = fun();
printf("%d\n", *p);
return 0;
}

Ans : Unexpected behaviour

/*When the execution of fun() gets completed, the addresses assigned to
the fun() also get destroyed and the space allocated to fun() in the
stack area is available for the next function call.
Hence, the address of variable ‘b’ is no more liable after the
completion of fun(). If we try to access ‘b’, there is no guarantee that
the value assigned to ‘b’ is still present or not. Sometimes it may be
there or some time it is overwritten by other function calls. This
depends on the implementation of the compiler.
Like in Turbo C, it gives an error while in the gcc compiler it gives
just a warning. */

2.
What modification should we do in the above program such that it
returns the address of variable ‘b’ defined in called function?
  
Ans : /* Explanation: Using static memory allocation The memory for 'b' is
getting allocated in data area and now the fun() is returning the address,
that will be available even after the completion of fun(). It will not throw
any error.

As we discussed in "A touch to C" chapter the data area is sharable among
all the functions.

int *fun()
{
static int b = 10;
return &b;
}

Using dynamic memory allocation Here, the memory for 'b' is getting
allocated dynamically that resides in heap area. Now the variable 'b' holds
the address of memory from heap area.

As we alreadydiscussed, the heap area is also shared among all the
functions.

int *fun()
{
int *b = (int *)malloc(sizeof(int));
return b;
}
*/

3.
#include<stdio.h>
int main()
{
int b = 65;
void *p = &b;
int *j = (int*)p;
char *ch = (char*)p;
printf("%d, %c\n", *j, *ch);
return 0;
}

Ans :  65, A
/*Explanation: The void pointer is a generic pointer type. It can hold
addresses of all data types. It is used when the actual data type of a pointer
is not known for the time, and later it may be known. In the given code we
are using a void pointer that is holding addresses of an integer and
character type.*/

