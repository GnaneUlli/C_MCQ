1.
#include<stdio.h>
void change(char (*ptr)[6])
{
char temp;
temp = (*ptr)[1];
(*ptr)[1] = *ptr[0];
(*ptr)[0] = temp;
ptr++;
temp = (*ptr)[1];
(*ptr)[1] = *ptr[0];
(*ptr)[0] = temp;
}
int main()
{
char str[][6] = {"Hello", "India"};
change(str);
printf("%s %s", str[0], str[1]);
return 0;
}
Ans : eHllo nIdia
  
// Just changing first and second values in two different 2d array elemnts.

2.
#include<stdio.h>
int main()
{
char *str1 = "hello";
char *str2 = "hello";
char str3[] = "hello";
char str4[] = "hello";
if(str1 == str2)
printf("one ");
else
printf("zero ");
if(str3 == str4)
printf("yes ");
else
printf("no ");
return 0;
}

Ans : one no

/*The read-only
area is limited, so in order to utilize the memory allocation, the compiler
first checks whether the same string gets allocated in the memory or not, if
yes the memory manager simply returns the previous address otherwise it
allocates the new memory and returns new address. Here, str1 and str2
contain the same string, the string gets stored in the read-only area of
memory. Hence the address is the same. str3[] and str4[] get memory
allocated in stack area, each of them get separate address space. Hence,
they get stored at different locations.*/
  
3.
#include<stdio.h>
int main()
{
char q[] = "Hello India",*ptr;
ptr=q;
while(*ptr!=’\0’)
{
++*ptr++; // line 4
}
printf("%s %s",ptr,q);
return 0;
}

Ans : ifmmp!Joejb
/*: We already discussed these kinds of questions, the
expression ++*ptr++ at line 4 gets expanded as ++*ptr; and ptr++; After
the execution of the while loop, each character of a given string will get
incremented by 1. The character ‘H’ becomes ‘I’, ‘e’ becomes ‘f’, blank
space gets converted into ‘!’ and so on as per the ASCII convention*/

4.
#include<stdio.h>
int main()
{
char str[4][20]={"hello", "India", "love", "great"};
int i;
char *temp;
temp=str[2];
str[2]=str[3];
str[3]=temp;
for (i=0;i<4;i++)
printf("%s",str[i]);
return 0;
}

Ans : Error compile time.
/*: We discussed a similar concept in the explanation of
question 57, group 2. 2D array is a collection of 1D arrays, Each string get
stored in the form of a 1D array. The base address of each 1D array cannot
be modified. If we declare given 2D array as *str[4], → char *str[4]=
{"hello", "India", "love", "great"};, the program will give output "hello
India great love"*/

5.
#include<stdio.h>
int main( )
{
int x[2][3][2] = {{{2,4},{7,8},{3,4}},{{2,2},{2,3},
{3,4}}};
printf("%u %u %u %d ",x,*x,**x,***x);
printf("%u %u %u %d \n",x+1,*x+1,**x+1,***x+1);
return 0;
}

Ans : 1000 1000 1000 2 1024 1008 1004 3

6.
#include<stdio.h>
#include<string.h>
int main()
{
int i, len;
char x[] = "India";
len = strlen(x);
*x = x[len];
char *ptr = x;
for(i=0; i<len; ++i)
{
printf("%s ",ptr);
ptr++;
}
return 0;
}

Ans : blank spcae, ndia, dia,ia,a.

7.
#include<stdio.h>
int main()
{
char str[8] = "India";
str[6] = ‘x’; //line 2
printf("%s", str); //line 3
return 0;
}

Ans : India
//Beacause after allocating str size remaining all will be null characters which is end .

8.
#include<stdio.h>
int main()
{
int x = 0xabcdef;
char p = x;
printf("%d\n",p);
return 0;
}

Ans : -17

/*In gcc, the integer is implicitly typecast into character. We can see this in
statement char p = x; This question is one of the versions of the littleendian storage mechanism. The x = 0xabcdef; is in hexadecimal form, it
gets stored in memory in little-endian mode*/

9.


