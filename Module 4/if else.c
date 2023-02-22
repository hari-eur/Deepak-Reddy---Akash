#Write a program to print biggest of 3 numbers using if else 
/*code*/
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the three numbers :");
    scanf("%d %d %d",&a,&b,&c);
    if((a>b) && (a>c))
    {
        printf(" %d is biggest number",a);
    }
    else if((b>c) && (b>a))
    {
        printf(" %d is biggest number",b);
    }
    else
    {
        printf(" %d is biggest number",c);
    }
    return 0;
}

/*output
Enter the three numbers :5 7 2
7 is biggest number
*/
