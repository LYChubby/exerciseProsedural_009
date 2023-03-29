#include <iostream>
using namespace std;

float rerata(float m, float b) {
	return (m + b) / 2;
}

string hasil(float r, float m) {
	if (r >= 70 || m > 80) {
		return "Diterima";
	}
	else {
		return "Ditolak";
	}
}

int main() {
	string nama[20], kelulusan[20];
	int nilb[20], nilm[20];
	int diterima = 0, ditolak = 0;

	for (int i = 0; i < 20; i++) {

		cout << "\nMasukkan Nama Ke- " << (i + 1) << ": " << endl;
		cin >> nama[i];
		cout << "Masukkan Nilai Matematika : " << endl;
		cin >> nilm[i];
		cout << "Masukkan Nilai Bahasa Inggris : " << endl;
		cin >> nilb[i];

		cout << "Nilai Rata - Rata Anda : " << rerata(nilm[i], nilb[i]) << endl;
		cout << "Status Kelulusan Anda : " << hasil(rerata(nilm[i], nilb[i]), nilm[i]) << endl;

		kelulusan[i] = hasil(rerata(nilm[i], nilb[i]), nilm[i]);

		if (hasil(rerata(nilm[i], nilb[i]), nilm[i]) == "Diterima") {
			diterima++;
		}
		else {
			ditolak++;
		}
	}

	cout << "\nNama" << "\t\tStatus" << endl;
	for (int i = 0; i < 20; i++) {
		cout << nama[i] << "\t\t" << kelulusan[i] << endl;
	}
	
	cout << "\nJumlah Kandidat Yang Diterima : " << diterima << endl;
	cout << "Jumlah Kandidat Yang Tidak Diterima : " << ditolak << endl;

	return 0;

}