#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, f=1;

    scanf("%i", &n);

    for (n = n; n > 1; n--)
    {
        f = f * n;
    }

    printf("%i\n", f);

    system("pause");
    return 0;
}
