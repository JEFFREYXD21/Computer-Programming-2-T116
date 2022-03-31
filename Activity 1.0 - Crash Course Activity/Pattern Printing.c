#include <stdio.h>
int main()
{
    int n;
    printf("Enter integer: ");
    scanf("%d", &n);
    if (n > 0)
    {
        for (int i = 1; i < n + 1; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                if (j == 1)
                {
                    for (int k = 0; k < n - i; k++)
                    {
                        printf(" ");
                    }
                }
                printf("* ");
            }
            printf("\n");
        }
    }
    else
    {
        printf("Invalid input!");
        return -1;
    }
    return 0;
}
