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
    /* Crează un array cu o capacitate default */
    Array();

    /* Pentru a copia toate elementele la atribuire,
     * nu doar pointerul la vector trebuie definiti
     * copy constructor și operatorul de atribuire.
     *
     * Vom face noi asta :)
     *
     * Puteti ignora următoarele două definitii.
     */
    Array(const Array &other)
    {
        cap = other.cap;
        n = 0;
        v = new int[other.cap];
        for (int i = 0; i < other.n; i++)
            push_back(other.get(i));
    }

    Array& operator=(const Array &other)
    {
        // Sterge valorile vechi
        if (v != 0) {
            delete[] v;
        }
        cap = other.cap;
        n = 0;
        v = new int[cap];

        for (int i = 0; i < other.n; i++)
            push_back(other.get(i));

        return *this;
    }
    ~Array();

    /* Întoarce valoarea aflată la index */
    int get(int index) const;
    /* Setează valoarea aflată la index */
    void set(int index, int value);
    /* Adauga la finalul vectorului valoarea value */
    void push_back(int value);
    /* Numarul de elemente din vector */
    int size();

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
    char  *word;
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
    void put_doc(const char *key, int doc_id);

    /* Returneaza un Array cu ID-urile documentelor în care apare cheia key */
    Array get_docs(const char *key) const;

private:
    /* Întoarce o valoare reprezentând întregul asociat unui șir de caractere
     *
     * Se folosește pentru a decide în ce bucket din Map va ajunge șirul de
     * caractere.
     * e.g. "ana" va ajunge în buckets[hash("ana") % size]
     */
    unsigned long hash(const char *str) const
    {
        unsigned long hash = 5381;
        int c;

        while ((c = *str++))
            hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

        return hash;
    }

    Node    **buckets;
    int     size;
};

class Solution {
public:
    /* Functia ce va contine rezolvarea problemei. */
    void solve();
};

#endif

