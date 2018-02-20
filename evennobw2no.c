#include <stdio.h>

int main()
{
    int i, n;

    printf("Print all even numbers : ");
    scanf("%d", &n);

    printf("All even numbers from 1 to 2: ");

    for(i=2; i<=n; i+=2)
    {
        printf("%d\n",i);
    }

    return 0;
}
