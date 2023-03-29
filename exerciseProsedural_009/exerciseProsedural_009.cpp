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

