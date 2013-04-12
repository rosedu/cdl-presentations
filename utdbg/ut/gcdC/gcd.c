#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * Returnează cel mai mic divizor comun al celor două numere
 */ 
int gcd(int a, int b)
{
	return 0;
}

/**
 * Obține un număr random întreg între a și b
 */
int Random(int a, int b)
{
	return rand()%(b-a) + a;
}

int main()
{
	srand(time(NULL));
	int i, ok, failedcount = 0, passedcount = 0;
	int a, b;

	/* pozitiv? */
	printf("%20s", "Pozitiv?");
	ok = 1;
	for (i = 0; i < 5; i++)
		if(gcd(Random(-10, 10), Random(-10, 10)) <= 0)
			ok = 0;
	if (ok == 0){
		printf("...FAILED.\n");
		failedcount++;
	} else {
		printf("...passed.\n");
		passedcount++;
	}

	/* gcd(1, a)? */
	printf("%20s", "gcd(1, a)=1?");
	ok = 1;
	for (i = 0; i < 5; i++)
		if(gcd(1, Random(-10, 10)) != 1)
			ok = 0;
	if (ok == 0){
		printf("...FAILED.\n");
		failedcount++;
	} else {
		printf("...passed.\n");
		passedcount++;
	}
	
	/* multipli? */
	printf("%20s", "Multipli?");
	ok = 1;
	for (i = 0; i < 5; i++){
		a = Random(-10, 10);
		b = Random(-10, 10);
		if(gcd(a, b * Random(1, 4)) != gcd(a, b))
			ok = 0;
	}
	if (ok == 0){
		printf("...FAILED.\n");
		failedcount++;
	} else {
		printf("...passed.\n");
		passedcount++;
	}

	/* reverse? */
	printf("%20s", "Reverse?");
	ok = 1;
	for (i = 0; i < 5; i++){
		a = Random(-10, 10);
		b = Random(-10, 10);
		if(gcd(a, b) != gcd(b, a))
			ok = 0;
	}
	if (ok == 0){
		printf("...FAILED.\n");
		failedcount++;
	} else {
		printf("...passed.\n");
		passedcount++;
	}

	/* -arg? */
	printf("%20s", "-arg?");
	ok = 1;
	for (i = 0; i < 5; i++){
		a = Random(-10, 10);
		b = Random(-10, 10);
		if(gcd(a, b) != gcd(-a, b))
			ok = 0;
	}
	if (ok == 0){
		printf("...FAILED.\n");
		failedcount++;
	} else {
		printf("...passed.\n");
		passedcount++;
	}

	printf("%20s:%d\n", "Teste trecute", passedcount);
	printf("%20s:%d\n", "Teste picate", failedcount);
	
	return 0;
}
