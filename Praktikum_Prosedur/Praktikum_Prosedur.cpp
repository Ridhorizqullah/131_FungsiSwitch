#include <iostream>
using namespace std;

int a, b;

void input()
{

	cout << "bilanhan pertama = ";
	cin >> a;

	cout << "bilanhan kedua = ";
	cin >> b;

}
int penjumlahan(int bill_1, int bill_2) {
	return bill_1 + bill_2;
}

int pengurangan(int bill_1, int bill_2) {
	return bill_1 + bill_2;
}

int perkalian(int bill_1, int bill_2) {
	return bill_1 + bill_2;
}

int pembagian(int bill_1, int bill_2) {
	return bill_1 + bill_2;
}

int main()
{
	int pilihan;

	do {
		system("cls");
		cout << "===== Menu =====" << endl;
		cout << "1. Penjumlahan " << endl;
		cout << "2. Pengurangan " << endl;
		cout << "3. Perkalian " << endl;
		cout << "4. Pembagian " << endl;
		cout << "5. Keluar " << endl;
		cout << "Masukkan menu yang ingin di pilih (1/2/3/4/5): ";
		cin >> pilihan;

		switch (pilihan)
		{
        case 1:
            input();
            cout << "Hasil penjumlahan = " << penjumlahan(a, b) << endl;
            system("pause");
            break;
        
		case 2:
			input();
			cout << "Hasil pengurangan = " << pengurangan(a, b) << endl;
			system("pause");
			break;

		case 3:
			input();
			cout << "Hasil perkalian = " << perkalian(a, b) << endl;
			system("pause");
			break;

		case 4:
			input();
			cout << "Hasil pembagian = " << pembagian(a, b) << endl;
			system("pause");
			break;
		
		case 5:
			break;
		default:
			cout << "Menu tidak tersedia silahkan pilih lagi!!! " << endl;
			break;


		}
	} while (pilihan != 5);

}


