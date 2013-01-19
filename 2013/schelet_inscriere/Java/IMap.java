public interface IMap {
    /** Adauga documentul docID in multimea token-ului key. */
    public void putDoc(String key, int docID);
    
    /** Returneaza multimea documentelor pentru token-ul key. */
    public Array getDocs(String key);
}
