//Konversi Nilai Angka ke Huruf
#include <iostream>

using namespace std;

char konversiNilai(int angka)
{
	if (angka >= 86 && angka <= 100)
	{
		return 'A';
	}
	else if (angka >= 66 && angka <= 85)
	{
		return 'B';
	}
	else if (angka >= 46 && angka <= 65)
	{
		return 'C';
	}
	else if (angka >= 1 && angka <= 45)
	{
		return 'E';
	}
	else 
	{
		return 'X';
	}
}

int main()
{
	int nilai;

	cout << "Masukkan Nilai Anda : ";
	cin >> nilai;

	char hasilKonversi = konversiNilai(nilai);

	if (hasilKonversi == 'X')
	{
		cout << "Nilai Tidak Valid" << endl;
	}
	else
	{
		cout << "Grade : " << hasilKonversi << endl;
	}

	system("pause");

	return 0;
}