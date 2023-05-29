#include <iostream>
using namespace std;

// Deklarasi fungsi template untuk menghitung jumlah hari dalam bulan tertentu pada tahun tertentu
template<class T>
int JumlahHari(T tahun, T bulan);

template<class T>
class PerhitunganKabisat {
	private:
		T* tahun;
		
	public:
		// Konstruktor dengan parameter
		PerhitunganKabisat(T* tahun) : tahun(tahun) {
		}
		
		// Getter
		T* getTahun() const {
			return tahun;
		}
		
		// Setter
		void setTahun(T* tahun) {
			this->tahun = tahun;
		}
		
		// Method untuk menghitung umur berdasarkan tanggal lahir dan tanggal sekarang
		void HitungUmur() const {
			T tanggalLahir = 7;
			T bulanLahir = 5;
			T tahunLahir = 2023;

			T tanggalSekarang = *tahun;
			T bulanSekarang = 5;
			T tahunSekarang = 2023;

			T selisihTahun = tahunSekarang - tahunLahir;
			T selisihBulan = bulanSekarang - bulanLahir;
			T selisihHari = tanggalSekarang - tanggalLahir;

			if (selisihHari < 0) {
				selisihBulan--;
				selisihHari += JumlahHari(tahunSekarang, bulanSekarang);
			}
			if (selisihBulan < 0) {
				selisihTahun--;
				selisihBulan += 12;
			}

			cout << "Umur Anda adalah " << selisihTahun << " tahun " << selisihBulan << " bulan " << selisihHari << " hari" << endl;
		}
		
		// Method untuk mengecek apakah tahun kabisat
		bool HitungKabisat() const {
			if (*tahun % 4 == 0) {
				if (*tahun % 100 == 0) {
					if (*tahun % 400 == 0) {
						return true;
					}
					else {
						return false;
					}
				}
				else {
					return false;
				}
			}
			else {
				return false;
			}
		}
};

// Definisi fungsi template untuk menghitung jumlah hari dalam bulan tertentu pada tahun tertentu
template<class T>
int JumlahHari(T tahun, T bulan) {
	if (bulan == 2) {
		if (tahun % 4 == 0) {
			if (tahun % 100 == 0) {
				if (tahun % 400 == 0) {
					return 29;
				}
				else {
					return 28;
				}
			}
			else {
				return 29;
			}
		}
		else {
			return 28;
		}
	}
	else if (bulan == 4 || bulan == 6 || bulan == 9 || bulan == 11) {
		return 30;
	}
	else {
		return 31;
	}
}

int main() {
    int tanggalLahir, bulanLahir, tahunLahir;
    cout << "Masukkan tanggal lahir (format: DD MM YYYY): ";
    cin >> tanggalLahir >> bulanLahir >> tahunLahir;

    PerhitunganKabisat<int> perhitungan(&tahunLahir);
    perhitungan.HitungUmur();

    return 0;
}
