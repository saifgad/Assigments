#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0;
        printf("please write your number ");
        scanf("%d",&n);
    if (n%2==0)
    {printf("ThE Number is odd = 0\n");
     printf("ThE Number is even = 1\n");
    }
    else
    {printf("ThE Number is odd = 1\n");
     printf("ThE Number is even = 0\n");
    }
//ANOTHER SOLUTION
 int a=0;
        printf("please write your number ");
        scanf("%d",&a);
        if (a&1)
        {printf("ThE Number is odd = 1\n");
         printf("ThE Number is even = 0\n");
        }
        else
        {printf("ThE Number is odd = 0\n");
         printf("ThE Number is even = 1\n");
        }
    return 0;
}
