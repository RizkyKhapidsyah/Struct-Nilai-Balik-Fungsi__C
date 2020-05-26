#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct {
	int tahun;
	int bulan;
	int tanggal;
} data_tanggal;

data_tanggal TanggalLahir() {
	data_tanggal tgl;
	tgl.tahun = 1764;
	tgl.bulan = 9;
	tgl.tanggal = 19;
	return tgl;
}

int main() {
	data_tanggal Tanggal;
	Tanggal = TanggalLahir();

	printf("Tanggal Lahi  = %i - %i - %i\n\n", Tanggal.tanggal, Tanggal.bulan, Tanggal.tahun);
	_getch();
	return 0;
}