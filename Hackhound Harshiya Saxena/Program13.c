#include <stdio.h>
int fibo(int n)
{
	int a = 0, b = 1, c, i;
	if (n == 0)
	    return 0;
	for (i = 2; i <= n; i++) {
		c = a + b;
		a = b;
		b = c;
	}
	return c;
}

int main()
{
    int n;
	printf("Enter position : ");
	scanf("%d",&n);
	printf("%d", fibo(n));
	return 0;
}
