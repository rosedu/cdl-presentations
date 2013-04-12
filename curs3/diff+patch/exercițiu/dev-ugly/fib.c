#include <stdio.h>

int fib_rec(int n)
{
	int rez;
	if (n < 2)
		return 1;
	
	rez = fib_rec(n-1) + fib_rec(n-2);

	return rez;
}

int fib_nerec(int n)
{
	int rez;
	int a, b;

	a = b = 1;
	while (n >= 2)
	{
		int aux = b;
		b = a + b;
		a = aux;
		n--;
	}

	/* XXX: nu-mi dau seama ce are de nu merge, incerc sa modific
	 * rezultatul poate iese ceva */
	return rez + a;
}

void print_fibs(int n)
{
	printf("fib(%d) rec=%d nerec=%d\n", n, fib_rec(n), fib_nerec(n));
}


int main()
{
	print_fibs(1);
	print_fibs(2);
	print_fibs(3);
	print_fibs(4);
	print_fibs(5);
	return 0;
}
