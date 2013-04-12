/*
 * source.c
 *
 *  Created on: Apr 10, 2009
 *      Author: sana
 */

#include "include/header.h"

/**
 * Pentru fiecare element din vector, schimba valoarea cu o noua valoare prin
 * apelul functiei transform. ( v[i] = transform(v[i]) for-all i in range(size) ).
 * Nu este nevoie de atribuire pentru ca lucram cu pointeri.
 */
void iterate(pmystruct *data, int size, void transform(pmystruct element)) {
	int i = 0;
	//TODO: de scris functia

	for (i = 0; i < size; i++)
		transform(data[i]);
}

/**
 * Intoarce cubul unui numar natural.
 */
void cube(pmystruct x) {
	x->key = x->key * x->key * x->key;
}

int main() {
	pmystruct *data;
	int i, size = 5;

	//TODO: Incercati sa folositi cat mai multe feature-uri prezentate :
	// autocomplete (CTRL + space)
	// plimbatul mouselui pe variabile/functii
	// open declaration
	// macro expansion
	// Outline - rezumat al fisierului sursa

	//TODO: Alocati un pointer in care sa puteti "retine" size mystruct-uri.
	// Cu open declaration pe malloc observati si restul functiilor de
	// alocare/eliberare a memoriei.
	data = malloc(size * sizeof(pmystruct));

	//TODO: Initializati vectorul cu valori random : rand()
	for (i = 0; i < size; i++) {
		data[i] = malloc(sizeof(struct mystruct));
		data[i]->key = rand() % 10;
	}

	//TODO: Afisati vectorul creat
	//TODO: Gasiti o alta metoda de afisare
	//Hint: folositi functia iterate
	for (i = 0; i < size; i++) {
		PRINT("(%d, %d)\n", i, data[i]->key);
	}

	iterate(data, size, cube);

	//TODO: Afisati noul vector, folosind functia PRINT
	for (i = 0; i < size; i++) {
		PRINT("(%d, %d)\n", i, data[i]->key);
	}

	//TODO: Puneti breakpoint pe linia apelului functiei de afisare.
	// Intrati in debug si executati programul pas cu pas, observati ce se intampla
	// cu variabilele - dreapta sus, Variables.
	// Cand ajungeti in breakpoint-ul de la print faceti resume de cateva ori
	// si apoi modificati valoarea lui i astfel incat sa iasa din bucla.
	// Scopul este utilizarea grafica a unui debugger.
	for (i = 0; i < size; i++) {
		PRINT("%d\n", i);
	}

	for (i = 0; i < size; i++)
		free(data[i]);
	free(data);

	return 0;
}
