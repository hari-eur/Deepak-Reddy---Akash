//write a program to find whether entered number is palindrome or not(Use finding the reverse of a number logic)
/*code*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int rev = 0;
    int temp = n;
    while(n!=0)
    {
        int r = n%10;
        rev = (rev*10)+r;
        n = n/10;
    }
    if(rev==temp)
    {
        printf("%d is a palindrome number",temp);
    }
    else
    {
        printf("%d is not a palindrome number",temp);
    }
    return 0;
}

/*output
Enter a number :758
758 is not a palindrome number

Enter a number :858
858 is a palindrome number
*/
