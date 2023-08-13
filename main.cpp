#include <iostream>
using namespace std;

template <class T>
void Swap(T& x, T& y) {
	T local_x(x);
	x = y;
	y = local_x;
}

int main() {
	string x = "ZZZZZ";
	string y = "XXXXX";
	int w = 10;
	int z = 20;
	Swap(x, y);
	Swap(w, z);
	cout << x << " " << y << "\n";
	cout << w << " " << z;
}