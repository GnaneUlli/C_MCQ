1.
    
#include<stdio.h>
int main()
{
    int a[5] = {5, 1, 15, 20, 25};
    int i, j, m;
    i = ++a[1];
    j = a[1]++;
    m = a[i++];
    printf("%d, %d, %d", i, j, m);
    return 0;
}

Ans : 3,2,15
//you do it

2.
    
#include<stdio.h>
int main()
{
    static int a[2][2] = {1, 2, 3, 4};
    int i, j;
    static int *p[] = {(int*)a, (int*)a+1, (int*)a+2};
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("%d, %d, %d, %d\n", *(*(p+i)+j), *(*(j+p)+i), 
                                    *(*(i+p)+j), *(*(p+j)+i));
        }
    }
    return 0;
}

Ans : 
1, 1, 1, 1
2, 2, 2, 2
2, 2, 2, 2
3, 3, 3, 3
  
3.
#include<stdio.h>

int main()
{
    static int arr[] = {0, 1, 2, 3, 4};
    int *p[] = {arr, arr+1, arr+2, arr+3, arr+4};
    int **ptr=p;
    ptr++;
    printf("%d, %d, %d\n", ptr-p, *ptr-arr, **ptr);
    *ptr++;
    printf("%d, %d, %d\n", ptr-p, *ptr-arr, **ptr);
    *++ptr;
    printf("%d, %d, %d\n", ptr-p, *ptr-arr, **ptr);
    ++*ptr;
    printf("%d, %d, %d\n", ptr-p, *ptr-arr, **ptr);
    return 0;
}

Ans : 1, 1, 1
2, 2, 2
3, 3, 3
3, 4, 4
  
4.
#include<stdio.h>

int main()
{
    int a[3][4] = {1, 2, 3, 4, 4, 3, 2, 1, 7, 8, 9, 0};
    printf("%u, %u\n", a+1, &a+1);
    return 0;
}

Ans : 65480, 65496
/*Step 1: int a[3][4] = {1, 2, 3, 4, 4, 3, 2, 1, 7, 8, 9, 0}; The array a[3][4] is declared as an integer array having the 3 rows and 4 colums dimensions.

Step 2: printf("%u, %u\n", a+1, &a+1);

The base address(also the address of the first element) of array is 65472.

For a two-dimensional array like a reference to array has type "pointer to array of 4 ints". Therefore, a+1 is pointing to the memory location of first element of the second row in array a. Hence 65472 + (4 ints * 2 bytes) = 65480

Then, &a has type "pointer to array of 3 arrays of 4 ints", totally 12 ints. Therefore, &a+1 denotes "12 ints * 2 bytes * 1 = 24 bytes".

Hence, begining address 65472 + 24 = 65496. So, &a+1 = 65496

Hence the output of the program is 65480, 65496*/
  
5.
#include<stdio.h>

int main()
{
    int arr[]={2, 3, 4, 1, 6};
    printf("%u, %u, %u\n", arr, &arr[0], &arr);
    return 0;
}

Ans : 1200, 1200, 1200

6.
#include<stdio.h>
int main()
{
int a[][3] = {4, 5, 6, 7, 8, 9, 1, 2, 3};
printf("%u, %u, %u", *a[2], a[2][0], **(a+1+(‘b’-’a’)));
return 0;
}
Ans :  1 1 1

7.
#include<stdio.h>

int main()
{
    int size, i;
    scanf("%d", &size);
    int arr[size];
    for(i=1; i<=size; i++)
    {
        scanf("%d", arr[i]);
        printf("%d", arr[i]);
    }
    return 0;
}

Ans : The code is erroneous since the statement declaring array is invalid.

8.
#include<stdio.h>
int main()
{
int a[3][3] = {4, 5, 6, 7, 8, 9, 1, 2, 3};
int *p = &a[2];
int *q = a[2];
printf("%d %d", *p, *q);
return 0;
}
Ans : 1, 1
/*We can directly access the address using the ‘*’ operator without skipping
any column or row in the 2D array-like *1024 return 1.
p = 1024 q = 1024
p = & a[2] = 1024
q = a [2] = 1024
printf("%d %d, *1024 , *1024) ;
Output 1 1
We can directly access the address using the '*' operator without skipping
any column or row in the 2D array-like *1024 return 1.*/
9.
#include<stdio.h>
int main()
{
int a[3][3] = {5, 6, 7, 8, 9, 10, 1, 2,3};
int *p = &a[2];
int *q = a[2];
printf("%d %d", p[1], q[2]);
return 0;
}
/*p = 1024 q = 1024
p = &a[2] = 1024
q = a[2] = 1024;
p[1] = *(p+1) = *1028; → 2
q[2] = *(q+2) = *1032; → 3
//’p’ and ‘q’ are integer pointer, there step size is 4B, they are independent
of an array.*/

