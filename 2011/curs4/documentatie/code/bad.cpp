std::ifstream in("joc2.in"); // Deschide fis input
std::ofstream out("joc2.out"); /* Deschide fis output */
// ******** == Citirea datelor == *************
in >> N; // Better hope the s*** doesn't fail reading
for (int I = 0; I < N; I++)
	in >> tab[I].first >> tab[I].second;
// *******************************************
// This would've beem much better in O(NlogN), but
// who cares? You don't always get what you want in life...
for (int w = 1; w <= 100 /* maxim 100 linii */; w++){
	for (int h = 1; h <= 100; h++){
		if (w <= h) // If w <= h
			a[w][h] = count_all(w,h);
		else
			a[w][h] = a[h][w];
		//std::cout << a[w][h] << " ";
	}
}
