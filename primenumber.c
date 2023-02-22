//write a program to reverse a number and check if the reversed number is prime number or not

/*code*/

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int rev = 0;
    while(n!=0)
    {
        int r = n%10;
        rev = (rev*10)+r;
        n = n/10;
    }
    printf("The reverse of number is %d\n",rev);
    int count = 0;
    for(int i=2;i<=(rev/2);i++)
    {
        if(rev%i==0)
        {
            count = 1;
            break;
        }
    }
    if(count==1)
    {
        printf("No, %d is not a prime number",rev);
    }
    else if(count==0)
    {
        printf("Yes,%d is a prime number",rev);
    }
    return 0;
}

/*output
Enter a number :19
The reverse of number is 91
No, 91 is not a prime number

Enter a number :14
The reverse of number is 41
Yes,41 is a prime number
*/
