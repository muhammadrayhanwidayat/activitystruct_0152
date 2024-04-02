#include <iostream>
using namespace std;

struct DetailAlamat {
	string desa;
	string kota;
};

struct Mahasiswa {
	string nim;
	string nama;
	DetailAlamat alamat;
	int umur;
};

int main()
{
	Mahasiswa mhs;
	cout << "nomor Mahasiswa :";
	cin >> mhs.nim;
	cout << "nama mahasiswa: ";
	cin >> mhs.nama;
}
