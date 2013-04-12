using namespace std;

struct CriteriuMaiMicInModul{
  bool operator() (int a, int b) {
    return abs(a)<abs(b);
  }
};

int main()
{
  int junk[] = {1,-102,13,-24,2};
  vector<int> v(junk, junk+sizeof(junk)/sizeof(int));
  vector<int>::iterator it;
  sort(v.begin(), v.end()); 
  for (it = v.begin(); it != v.end(); ++it) cout << *it << " ";
  sort(v.begin(), v.end(), CriteriuMaiMicInModul());
  for (it = v.begin(); it != v.end(); ++it) cout << *it << " ";
  CriteriuMaiMicInModul comparator;
  cout << comparator(-1,-7) << "\n";
  cout << comparator(12,-100) << "\n";
  return 0;
}
