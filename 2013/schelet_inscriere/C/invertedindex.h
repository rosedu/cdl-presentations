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
} Array;

/* O intrare în Map */
typedef struct Entry {
    char    *word;
    Array   documents;
} Entry;

/* Nod pentru o listă simplu înlănțuită */
typedef struct Node {
    Node    *next;
    Entry   data;
} Node;

/* Reține o mapare Cheie - Valoare (în cazul nostru char* - Array)
 *
 * buckets - vector de liste simplu înlănțuite.
 * size    - mărimea lui buckets.
 */
typedef struct Map {
    Node    **buckets;
    int     size;
} Map;

/* Întoarce o valoare reprezentând întregul asociat unui șir de caractere
 *
 * Se folosește pentru a decide în ce bucket din Map va ajunge șirul de
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
 * Dacă se întâlnește un Entry având cheia key, se adaugă în Array-ul din
 * Entry.
 *
 * Altfel, se adaugă în listă un nou Entry având cheia key și un Array ce
 * conține doar docID.
 */
void put_doc(Map *map, char *key, int docID);

/* Returneaza un Array cu ID-urile documentelor în care apare cheia key */
Array* get_docs(Map *map, char *key);

/* Construieste un dictionar pe baza regulilor stabilite. Primul parametru
 * reprezinta cheile ce trebuie adaugate in dictionar iar al doilea reprezinta
 * numele fisierelor al caror id va fi adaugat la valorile unei sau mai multor
 * chei. 
 */
Map* create_map(char **keys, char **filenames);

/* Realizeaza intersectia a doua multimi de indici de fisiere. */
Array intersection(const Array files1, const Array files2);

/* Realizeaza reuniunea a doua multimi de indici de fisiere. */
Array reunion(const Array files1, const Array files2);

/* Functia ce va contine rezolvarea problemei. */
void solve();

#ifndef
