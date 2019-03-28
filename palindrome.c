#include <stdio.h>

int main()
{
    int n,reversedInteger=0,remainder,originalInteger;
    printf("enter an integer:");
    scanf("%d",&n);
    originalInteger=n;
    while( n!=0)
    {
        remainder=n%10;
        reversedInteger=reversedInteger*10+remainder;
        n/=10;
        if(originalInteger==reversedInteger)
        printf("%d is a palindrome.",originalInteger);
        else
        printf("%d is a not palindrome.",originalInteger);
        
    }

    return 0;
}
