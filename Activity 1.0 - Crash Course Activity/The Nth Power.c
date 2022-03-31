#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x, y, ans;
    printf("Enter X: ");
    scanf("%d", &x);
    printf("Enter Y: ");
    scanf("%d", &y);
    if (x != 0)
    {
        if (y > 0)
        {
            ans = x;
            for (int i = 1; i < y; i++)
            {
                ans *= x;
            }
        }
        else if (y < 0)
        {
            ans = x;
            for (int i = 1; i < abs(y); i++)
            {
                ans *= x;
            }
            printf("%d ^ %d = 1/%d", x, y, ans);
            return 0;
        }
        else{
            ans = 1;
        }
    }
    else
    {
        printf("X should not be equal to 0!");
        return -1;
    }
    printf("%d ^ %d = %d", x, y, ans);
    return 0;
}
