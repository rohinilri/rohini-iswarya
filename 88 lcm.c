 
#include <stdio.h>
int main()
{
    int n1, n2, m;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);
    m = (n1>n2) ? n1 :  n2;
    while(1)
    {
        if( m%n1==0 && m%n2==0 )
        {
            printf("The LCM of %d and %d is %d.", n1, n2,m);
            break;
        }
        ++m;
    }
}
