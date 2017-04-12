#include <iostream>
using namespace std;

struct data_siswa{
	string nama;
	int kelas;
	string nis;

	};


	data_siswa siswa[20];
		int main(){
	cout << "DATA SISWA KELAS 1 SDN MENGGER GIRANG\n";
	cout << "======================\n";
	for (int i = 0; i < 20; ++i)
	{
		cout << "masukan siswa ke-"<< i << endl;  
		cout << "nama : "; cin >> siswa[i].nama;
		cout << "kelas: "; cin >> siswa[i].kelas;
		cout << "nis : ";  cin >> siswa[i].nis;
	}
	for (int i = 0; i < 20; ++i)
	{
		cout << "siswa "<< i << endl;
		cout << siswa[i].nama << endl;
		cout << siswa[i].kelas << endl;
		cout << siswa[i].nis << endl;
	}
	
return 0;
}
   