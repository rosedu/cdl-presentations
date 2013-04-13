public interface IArray {
    /* Întoarce valoarea aflată la index */
    public int  get(int index);
    
    /* Setează valoarea aflată la index */
    public void set(int index, int value);
    
    /* Adauga la finalul vectorului valoarea value */
    public void push_back(int value);

    /* Întersecția cu other */
    public Array intersection(final Array other);
    
    /* Reuniunea cu other */
    public Array reunion(final Array other);
    
}
