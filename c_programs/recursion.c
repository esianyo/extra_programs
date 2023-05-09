#include <stdio.h>

int fun(int n)
{
    if (n == 0)
    {
        return 2;
    }
    else
        return 4 + fun(n - 2);
}

int main()
{
    printf("%d", fun(2));
    return 0;
}
