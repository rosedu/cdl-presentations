#ifndef __INVERTEDINDEX_H__
#define __INVERTEDINDEX_H__

/* Vector de întregi
 * v   - vectorul
 * n   - numărul de elemente
 * cap - capacitatea vectorului
 * */
typedef struct Array {
    int     *v;
    int     n, cap;
} Array_t;

/* O intrare în Map_t */
typedef struct Entry {
    char    *word;
    Array_t   documents;
} Entry_t;

/* Nod pentru o listă simplu înlănțuită */
typedef struct Node {
    struct Node_t    *next;
    Entry_t          data;
} Node_t;

/* Reține o mapare Cheie - Valoare (în cazul nostru char* - Array_t)
 *
 * buckets - vector de liste simplu înlănțuite.
 * size    - mărimea lui buckets.
 */
typedef struct Map {
    Node_t    **buckets;
    int     size;
} Map_t;

/* Întoarce o valoare reprezentând întregul asociat unui șir de caractere
 *
 * Se folosește pentru a decide în ce bucket din Map_t va ajunge șirul de
 * caractere.
 * e.g. "ana" va ajunge în buckets[hash("ana") % size]
 */
unsigned long hash(unsigned char *str)
{
	unsigned long hash = 5381;
	int c;

	while(c = *str++) {
 		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}

	return hash;
}

/* Adauga id-ul unui fisier la valorile cheii key din dictionar.
 * Se folosește următoarea rutină:
 *
 * Se parcurge lista aflată în buckets[hash(key) % size]
 *
 * Dacă se întâlnește un Entry_t având cheia key, se adaugă în Array_t-ul din
 * Entry_t.
 *
 * Altfel, se adaugă în listă un nou Entry_t având cheia key și un Array_t ce
 * conține doar docID.
 */
void put_doc(Map_t *map, char *key, int docID);

/* Returneaza un Array_t cu ID-urile documentelor în care apare cheia key */
Array_t get_docs(Map_t *map, char *key);

/* Realizeaza intersectia a doua multimi de indici de fisiere. */
Array_t intersection(const Array_t files1, const Array_t files2);

/* Realizeaza reuniunea a doua multimi de indici de fisiere. */
Array_t reunion(const Array_t files1, const Array_t files2);

/* Functia ce va contine rezolvarea problemei. Tot aici va fi construit si
 * dictionarul pe baza regulilor stabilite. */
void solve();

#endif
