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

	