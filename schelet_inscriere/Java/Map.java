public class Map implements IMap {
    private Entry[] buckets;
    /* TODO */
    
    /** Întoarce o valoare reprezentând întregul asociat unui șir de caractere.
     *
     ** Se folosește pentru a decide în ce bucket din Map va ajunge șirul de
     ** caractere.
     ** e.g. "ana" va ajunge în buckets[hash("ana") % size]
     */
    private long hash(final String s)
    {
        char[] c = s.toCharArray();
        long result = 5381;
        for(int i = 0; i < c.length; i++) {
            result = (result * 33) + c[i];
        }
        return result;
    }

    @Override
    public void putDoc(String key, int docID) {
        /* TODO */
    }

    @Override
    public Array getDocs(String key) {
        /* TODO */
    }
    
}
