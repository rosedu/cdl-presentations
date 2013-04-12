#include <stdio.h>

/*
 * Implementare recursiva
 */
int fib_rec(int n)
{
	int rez;
	if (n < 2)
		return 1;
	
	rez = fib_rec(n-1) + fib_rec(n-2);

	return rez;
}

/*
 * Implementare nerecursiva
 */
int fib_nerec(int n)
{
	int rez;
	int a, b;

	a = b = 1;
	n --;
	while (n)
	{
		int aux = b;
		b = a + b;
		a = aux;
		n--;
	}

	return rez;
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
