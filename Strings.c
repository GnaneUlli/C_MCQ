1.
  
#include<stdio.h>
#include<string.h>
#define strcpy(x , y) x = y
int main()
{
int i;
char s[10];
strcpy(i , 10); //line 4
strcpy(s , "hello"); //line 5
printf("%d %s",i,s);
return 0;
}
Ans : error at line 5
//Beacause all other operations have instance but at line 5 it wants to directly copy a string without variable
//since inside macros variables are defined so it will not pass just string and throw an error.

2.
#include<stdio.h>
#define type_char char*
int main()
{
type_char a , b; // line 1
char c[10] , d[10];
strcpy(c , "hello");
strcpy(d , "world");
a = c;
b = d; //line 6
printf("%c %c" , a[2],b[2]); //line 7
return 0;
}
Ans : error compile time
/* so according to macro it takes char *a ,b.‘b’ is assigned to an address whereas ‘b’ is a character
variable. In line 7, we are doing *(b+2), which is not a relevant operation
with a character variable. Hence, compile throws an error */

3.
#include<stdio.h>
int main()
{
char *s = "";
do
{
printf("hello");
}while(s);
return 0;
}

Ans :  hello is printed infinite time
  
In a given program, ‘s’ is a character pointer that is pointing
to an empty string, s contains the address of the empty string. In the while
statement, the condition is applied on ‘s’ which contains the address that is
always non-zero. The loop will execute infinite time.

4.
#include<stdio.h>
int main()
{
char *str[] = {"hello", "India", "love", "great"};
char **ptr[] = {str, str+2, str+1, str+3};
char ***p;
p = &ptr;
p += 2;
printf("%s %s", *ptr[1], **p);
return 0;
}
Ans : love India
//Stick to the basics

5.
#include<stdio.h>
int main()
{
char *str[] = {"hello", "India", "love", "great"};
char **ptr[] = {str, str+2, str+1, str+3};
char ***p;
p = ptr;
p += 3;
printf("%s %s", (**p)+2, *ptr[1]+’b’-’a’ );
return 0;
}
Ans :  eat ove
//5+str will terminate the first five characters or str+5 

6.
#include<stdio.h>
#include<string.h>
int main()
{
char str1[] = "Hello In\0dia";
printf("%u %u", sizeof(str1), strlen(str1));
return 0;
}
Ans :  13 8
//Read string notes

7.
#include<stdio.h>
int main()
{
char *str1 = "%d %d %d\n";
char str2[] = "%d %d %d\n";
printf(str1, sizeof(str1), strlen(str1), sizeof(str2));
return 0;
}
Ans :  4 9 10
// Beacause str1 is a pointer so its size will be 4.

8.
#include<stdio.h>
#include<string.h>
int main()
{
char *str = "India";
char a[10];
int i;
int len = strlen(str);
for(i=len; i>=0; i--)
a[i] = str[len-i];
printf("%s", a);
return 0;
}
Ans : Nothing will get printed
/*The strlen() will return 5, we are doing a[0] = str[5]; in for
loop’s first iteration. So, at the first index of an array ‘a’ there is a null
character. Hence, nothing will get printed.*/

9.
#include<stdio.h>
int main()
{
int x=5;
int *p = &x;
printf("%d", x**p+((p+2)-(p+1))**p);
return 0;
}
Ans : 30
/*The unary operators have higher precedence than the binary
operators. Given
expression can be written as: → x**p+((p+2)-(p+1))**p) ; //given x=5; p
= &x;
→ x*(*p)+((p+2-p+1))*(*p);
→ 5*5 + (1)*5; → 30.*/

10.
#include<stdio.h>
#include<string.h>
int main()
{
printf("%u, %u, %d, %u", sizeof(NULL), sizeof(""),
strlen(""), sizeof(‘\0’));
return 0;

Ans : 4,1,0,4

11.
#include<stdio.h>
int i;
int main()
{
char *str1 = "Hello";
char str2[] = "India is great";
while(*str1){
str2[i] = *str1++;
i++;
}
printf("%s", str2);
return 0;
}
Ans : "Hello is great"

12.
#include<stdio.h>
#include<string.h>
int main()
{
char str[] = "India";
char s[5];
int i=0, len = strlen(str);
while(len > 0)
{
s[i++] = str[--len];
}
s[i] = ‘\0’;
printf("%s ", s);
return 0;
}

Ans : aidnI
/*Since its length is 5 it will loop from last element 'a' so if length is 6 then answer will be blank space.*/

13.
#include<stdio.h>
int main()
{
char str1[] = "India";
char str2[] = "Bharat";
char *s1 =str1;
char *s2 =str2;
while(*s1)
{
*s2++ = *s1++;
}
printf("%s %s", str1, str2);
return 0;
}
Ans : India Indiat

14.
#include<stdio.h>
int main()
{
char a[]={'a','s','c','\n','i','\0'};
char *b,*q1;
b=a+3; //line 3
q1=a;
printf("%c",++*b + *q1++-30);
return 0;
}

Ans : N
/*: The integer pointer ‘b’ is pointing third element of an array
a[3] and ‘q1’ is pointing to first element of an array ‘a’, the first element is
‘a’ whose ascii value is 97. The expression in printf() will be evaluated
as:
++(*b) + (*(q1++)-30) → ++10 + ((97)++ - 30) → 11 + (97 - 30) → 11
+ 67 → 78; Because of ‘%c’ format specifier, the output will be ascii
value of 78 is ‘N’.*/

15.
#include<stdio.h>
void change(char (*ptr)[6])
{
(*ptr)[2] = ‘x’; // line 1
(*ptr+1)[2] = ‘x’; // line 2
ptr++; // line 3
(*ptr)[2] = ‘x’; // line 4
(*ptr+1)[2] = ‘x’; // line5
}
int main()
{
char str[][6] = {"hello", "India"};
change(str);
printf("%s %s", str[0], str[1]);
return 0;
}

Ans : hexxo inxxa
// Based on two - dimensional array indexing figure it out like you already did.

16.
#include<stdio.h>
#include<string.h>
void foo(char *);
int main()
{
char a[100] = {0};
printf("%u %u",sizeof(a),strlen(a));
return 0;
}

Ans : 100,0
  
/*In the given program, character array ‘a’ is initialized with
{0}. In C, if we initialize some starting elements of an array then all
remaining elements get initialized with 0 (by default). The sizeof operator
returns 100, the amount of memory taken by array ‘a’. The strlen() library
function returns 0 because the first element of an array ‘a’ is 0. Since 0 is
the ASCII value of ‘\0’ (null character) and strlen() does not consider
null character. Hence, strlen() will not count and return 0.*/


