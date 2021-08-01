#include <stdio.h>

int f_003_001(int a, int b);
int f_003_002(int a, int b, int c, int d);
int f_003_003(int a, int b, int c, int d);

int main() 
{
    int result1 = f_003_001(18, -2);
    int result2 = f_003_002(3, 4, -2, 1);
    int result3 = f_003_003(3, 4, -2, 1);
    printf("%d %d %d", result1, result2, result3);
    return 0;
}