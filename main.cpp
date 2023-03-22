#include <iostream>
using namespace std;

//function
void cetakElementArray(int array[], int jumlahElemenArray);
int getNilaiTerkecil(int array[], int jumlahElemenArray);
int getNilaiMax(int array[], int jumlahElemenArray);
float getRataRata(int array[], int jumlahElemenArray);

//mainnya
int main() {

	//jumlah array yg mau tentukan
	int jumlahElemenArray;
	cout << "Silahkan masukan jumlah elemen array : ";
	cin >> jumlahElemenArray;

	int* nilaiArray = new int[jumlahElemenArray];

	//nilai array
	for (int i = 0; i < jumlahElemenArray; i++)
	{
		cout << "Inputan nilai Array ke " << i+1 << " = ";
		cin >> nilaiArray[i];
	}

	int NilaiTerkecil = getNilaiTerkecil(nilaiArray, jumlahElemenArray);
	int NilaiMax = getNilaiMax(nilaiArray, jumlahElemenArray);
	float RataRata = getRataRata(nilaiArray, jumlahElemenArray);

	//tampilin hasil di tampilan baru
	system("cls");
	cout << "";
	cetakElementArray(nilaiArray, jumlahElemenArray);
	cout << "\nHasil.................. ";
	cout << "\n    Nilai Min      : " << NilaiTerkecil << endl;
	cout << "    Nilai Max      : " << NilaiMax << endl;
	cout << "    Nilai Avarage  : " << RataRata << endl;

	system("pause");
	return 0;
}

//tampilin semua nilai di array
void cetakElementArray(int array[], int jumlahElemenArray) {
	cout << endl;
	for (int i = 0; i < jumlahElemenArray; i++)
	{
		cout << array[i] << " ";
	}
}

//min
int getNilaiTerkecil(int array[], int jumlahElemenArray) {
	int nilai = array[0];
	for (int i = 0; i < jumlahElemenArray; i++)
	{
		if (nilai > array[i]) {
			nilai = array[i];
		}
	}
	return nilai;
}

//max
int getNilaiMax(int array[], int jumlahElemenArray) {
	int nilai = 0;
	for (int i = 0; i < jumlahElemenArray; i++)
	{
		if (nilai < array[i]) {
			nilai = array[i];
		}
	}
	return nilai;
}

//avarage
float getRataRata(int array[], int jumlahElemenArray) {
	float nilai = 0;
	float total = 0;
	for (int i = 0; i < jumlahElemenArray; i++)
	{
		total = total + array[i];
	}
	nilai = total / jumlahElemenArray;
	return nilai;
}
