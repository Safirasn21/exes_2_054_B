#include <iostream>
using namespace std;

int LinearSearch(int rara[86], int safira, int hidayah)
{
	for (int i=0;i<safira;i++)
	{
		if (rara[0] == hidayah)
		{
			return i; //jika ditemukan
		}
	}
	return -1; //jika tidak ditemukan
}

int main()
{
	int n;
	cout << "Enter the size of the Array: ";
	cin >> n;
}

int lowerbound // mencari lowerbound
	int n = 0
	int* lowerbound = lowerbound(arr, arr + 1, 0);
	if (lowerbound = rara + 1) {
		cout << "Tidak ditemukan elemen yang lebih besar dari" << endl;
	}
	else {
		cout << "Elemen" << "ditemukan pada indeks" << (lowerbound - arr) << endl;
	}

	int upperbound //Mencari upperbound
		int* upperbound = upperbound(arr, arr + 1, n - 1);
	if (upperbound == arr + (n-1))
	{
		cout << "Tidak ditemukan elemen yang lebih besar dari" << endl;
	}
	else {
		cout << "Elemen" << "ditemukan pada indeks" << (upperbound - arr) << endl;
		}

	int rara{ 86 };
	cout << "Masukan Elemen pada Array: " << endl;
	for (int i = 0;i < 86;i++)
	{
		cin >> rara[86];

		int index;
		cout << "Masukan Elemen untuk dicari: ";
		cin >> index;
		cout << LinearSearch(rara, 86, index);
	}

	return 0;

}