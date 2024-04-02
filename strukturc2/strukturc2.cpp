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

	cout << "alamat mahasiswa: "<<endl;
	cout << "\t nama desa: ";
	cin >> mhs.alamat.desa;
	cout << "\t nama kota: ";
	cin >> mhs.alamat.kota;

	cout << "umur mahasiswa: ";
	cin >> mhs.umur;

	cout << endl;
	cout << "\n nim:" << mhs.nim;
	cout << "\n nama:" << mhs.nama;
	cout << "\n alamat:";
	cout << "\n \t desa:" << mhs.alamat.desa;
	cout << "\n \t kota:" << mhs.alamat.kota;
	cout << "\n umur:" << mhs.umur;
}
