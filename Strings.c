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
