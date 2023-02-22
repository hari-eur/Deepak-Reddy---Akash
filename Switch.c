//write a program to implement calculator using switch case(+ - / %)

Ex : Enter the two numbers : 
    Enter the operation
/*code*/

#include<stdio.h>
int main()
{
    int a,b;
    float r = 0;
    char ch;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    printf("Enter the operation: ");
    scanf(" %c",&ch);
    switch(ch)
    {
        case '+':
                r = a+b;
                break;
        case '-':
                r = a-b;
                break;
        case '/':
                r = (float)a/(float)b;
                break;
        case '%':
                r = a%b;
                break;
    }
    printf("%d %c %d = %f\n",a,ch,b,r);
    return 0;
}

/*output
Enter the first number: 20
Enter the second number: 10
Enter the operation: /
The output is : 20 / 10 = 2.000000

Enter the first number: 5
Enter the second number: 2
Enter the operation: +
The output is : 5 + 2 = 7.000000
*/
