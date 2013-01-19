#ifndef __INVERTEDINDEX_H__
#define __INVERTEDINDEX_H__

/* Vector de întregi
 * v   - vectorul
 * n   - numărul de elemente
 * cap - capacitatea vectorului
 * */
class Array {
public:
    /* Crează un array cu capacitatea cap */
    Array(int cap);
    ~Array();

    /* Întoarce valoarea aflată la index */
    int  get(int index);
    /* Setează valoarea aflată la index */
    void set(int index, int value);
    /* Adauga la finalul vectorului valoarea value */
    void push_back(int value);

    /* Întersecția cu other */
    Array intersection(const Array &other) const;
    /* Reuniunea cu other */
    Array reunion(const Array &other) const;

private:
    int     *v;
    int     n, cap;
};

/* O intrare în Map */
struct Entry {
    char    *word;
    Array   documents;
};

/* Nod pentru o listă simplu înlănțuită */
struct Node {
    Node    *next;
    Entry   data;
};

/* Reține o mapare Cheie - Valoare (în cazul nostru char* - Array)
 *
 * buckets - vector de liste simplu înlănțuite.
 * size    - mărimea lui buckets.
 */
class Map {
public:
    Map();
    /* Crează un map cu size bucket-uri */
    Map(int size);

    ~Map();

    /* Adauga id-ul unui fisier la valorile cheii key din dictionar.
     * Se folosește următoarea rutină:
     *
     * Se parcurge lista aflată în buckets[hash(key) % size]
     *
     * Dacă se întâlnește un Entry având cheia key, se adaugă în Array-ul din
     * Entry.
     *
     * Altfel, se adaugă în listă un nou Entry având cheia key și un array ce
     * conține doar docID.
     * */
    void put_doc(char *key, int doc_id);

    /* Returneaza un Array cu ID-urile documentelor în care apare cheia key */
    Array get_docs(char *key) const;

private:
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

        while (c = *str++)
            hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

        return hash;
    }

    Node    **buckets;
    int     size;
};

class Solution {
    /* Functia ce va contine rezolvarea problemei. */
    void solve();
};

#endif

