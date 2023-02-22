//write a program to print fibonacci series in terms of number of elements
ex:I/P : Enter the number of elements : 2
    O/P: 0 1
/*code*/
#include<stdio.h>
int main()
{
    int a = 0;
    int b = 1;
    int num;
    int sum = 0;
    printf("enter the elements :");
    scanf("%d",&num);
    printf("%d %d",a,b);
    int l = num-2;
    while(l!=0)
    {
        sum = a+b;
        a = b;
        b = sum;
        printf(" %d",sum);
        l--;
    }
    return 0;
}

/*output
enter the elements : 7
0 1 1 2 3 5 8 
*/

//write a program to print fibonacci series in terms of range
ex:I/P : Enter the  range : 5
    O/P: 0 1 1 2 3  (should be less than the input)
/*code*/
#include<stdio.h>
int main()
{
    int a = 0;
    int b = 1;
    int range;
    printf("Enter the range :");
    scanf("%d",&range);
    if(range==1)
    {
        printf("%d",a);
    }
    else if(range==2)
    {
        printf("%d %d",a,b);
    }
    else if(range>2)
    {
        int sum = 0;
        printf("%d %d",a,b);
        while(sum<range)
        {
            sum = a+b;
            a = b;
            b = sum;
            if(sum<range)
            {
                printf(" %d",sum);
            }
                else if(sum>=range)
            {
                break;
            }
        }
    }
    return 0;
}

/*output
Enter the range :5
0 1 1 2 3
*/
