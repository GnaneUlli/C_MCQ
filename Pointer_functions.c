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

4.
#include<stdio.h>
int main()
{
int b=65;
void p = b;
int c = (int)p;
printf("%d\n", p);
return 0;
}

Ans :  error- compile time
/*Explanation: The void data type is not allowed because the size of the
void data type is not known. It cannot be used as a generic data type.*/

5.
#include<stdio.h>
#include<stdlib.h>
int main()
{
int *p = NULL;
p = (int*)malloc(sizeof(int));
*p = 10;
free(p);
int * q = (int*)malloc(sizeof(int));
*q = 15;
printf("%d, %d\n", *p, *q);
return 0;
}

Ans:  15, 15
  
/*Explanation: The memory for malloc is allocated dynamically in heap
area using ‘brk’ (keyword) system call. As we can see in figure (i) brk is
pointing to the free (unallocated) pool of memory. When we call the
malloc() function, the brk pointer allocates memory of 4B to ‘p’ and itself
get shifted right, and (ii) also assigns a value 10 to the allocated space.
Now we are doing free(p), (iii) the memory allocated by malloc get free
and its content becomes zero or NULL, and brk return to its previous
location. We can notice that ‘p’ is still pointing to the same address (figure
iii). We again did malloc() to allocate memory for ‘q’ (figure iv). If we try
to access the content of pointer ‘q’, it returns 15 as expected. Suppose if
we access the content of pointer ‘p’, it also returns the same content as ‘q’.
This was not expected from ‘p’ as we have already freed the ‘p’, but what
actually happened is that we freed the memory from the heap area, but p
still points to a memory location/address, as p is just a pointer variable,
this ‘p’ is called dangling pointer.
The dangling pointer in the program can be avoided by making p = NULL
just after the free(p) statement*/
6.
What is the output of the following program? Assumption: address of p
is 1000 and q is 2000.?
#include<stdio.h>
#include<stdlib.h>
void *fun(int **q)
{
int r = 20;
**q=r;
printf("%u ", *q);
}
int main()
{
int *p = (int *)malloc(sizeof(int));
*p = 55;
fun(&p);
printf("%d %u\n", *p, p);
return 0;
}

Ans :  1000 20 1000
  
/*: The memory to ‘p’ gets allocated using malloc() in main(),
the memory is accessible to other functions also, here in fun(), we are
modifying the shared memory value pointed by pointer ‘p’, which get
updated with value 20. */
  
7.
#include<stdio.h>
#include<string.h>
int main()
{
char *p = "hello";
char q[] = "hello";
printf("%d %d %d ", sizeof(*p), sizeof(p), sizeof(q));
printf("%d %d", strlen(p), strlen(q));
return 0;
}

Ans : 1 4 6 5 5
/*Explanation: The sizeof() operator returns the number of bytes consumed
by its operand. Here, ‘p’ is a character
pointer, which needs only 1 byte for storing the value. Hence, sizeof(*p)
returns value 1.
Since ‘p’ is a pointer whose size depends on the number of address lines
in a machine, as we discussed in the introduction, the size of the pointer
variable is 4 bytes. Hence sizeof(p) returns 4. The sizeof(q) returns 6, 5
characters and one termination (null) character (‘\0’). Each string gets
suffixed with a termination character (‘\0’).
The strlen() in a library function, present in the string.h header file counts
the number of characters in a given string and it doesn’t count the ‘\0’ (null
character).*/
  
8.
Which of the following given statements are true?
(i) (void*)0 is void pointer
(ii) (void*)0 is NULL pointer
(iii) int *p = (int *)0; p is null pointer
(iv) a[i] == i[a]
(v) a[i][j] == *(*(a+i)+j);


Ans :  ii, iii, iv, v

/*"(void*)0" is not a void pointer, void pointer is "void *p;".
For (ii), (iii), (iv), (v) explanation not required.*/

9.
#include<stdio.h>
void fun(int x, int *y, int *z)
{
*y += 4;
printf("%d\n",*y);
printf("%d\n",*z);
*z = *z + x + *y;
}
int main()
{
int x=10, y=3;
fun(y, &x, &x);
printf("%d, %d\n", x, y);
return 0;
}

Ans : 31
/*When ever y value is updated z also gets the same value.

10.
#include<stdio.h>
void test(int* , int*);
int main()
{
int a=5;
test(&a, &a);
printf("%d ", a);
return 0;
}
void test(int *c, int *d)
{
*c += *d * 2;
*d *= *c - 3;
}
Ans : 180




