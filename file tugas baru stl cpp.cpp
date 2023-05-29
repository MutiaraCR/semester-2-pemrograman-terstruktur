#include <iostream>
using namespace std;

template<class T>
class Umur {
private:
    T* tanggal;
    T* bulan;
    T* tahun;

public:
    Umur(T* tanggal, T* bulan, T* tahun) {
        this->tanggal = tanggal;
        this->bulan = bulan;
        this->tahun = tahun;
    }

    T* getTanggal() const {
        return tanggal;
    }

    void setTanggal(T* tanggal) {
        this->tanggal = tanggal;
    }

    T* getBulan() const {
        return bulan;
    }

    void setBulan(T* bulan) {
        this->bulan = bulan;
    }

    T* getTahun() const {
        return tahun;
    }

    void setTahun(T* tahun) {
        this->tahun = tahun;
    }
    
    bool HitungKabisat(int tahun)const;

    void hitungUmur(int tanggalSekarang, int bulanSekarang, int tahunSekarang) {
        int tahun2 = tahunSekarang - *tahun;
        int bulan2 = bulanSekarang - *bulan;
        int hari = tanggalSekarang - *tanggal;

        if (hari < 0) {
            bulan2 -= 1;
            if (bulan2 < 0) {
                tahun2 -= 1;
                bulan2 += 12;
            }
            hari += HariDalamBulan(*bulan, *tahun);
        }

        cout << "Umur Anda adalah " << tahun2 << " tahun, " << bulan2 << " bulan, " << hari << " hari." << endl;
    }

    int HariDalamBulan(int bulan, int tahun) {
        if (bulan == 2) {
            if (HitungKabisat(tahun)) {
                return 29;
            } else {
                return 28;
            }
        } else if (bulan == 4 || bulan == 6 || bulan == 9 || bulan == 11) {
            return 30;
        } else {
            return 31;
        }
    }

};

template<class T>
bool Umur<T>::HitungKabisat(int tahun) const {
    if (tahun % 4 == 0) {
        if (tahun % 100 == 0) {
            if (tahun % 400 == 0) {
                return true;
            } else {
                return false;
            }
        } else {
            return true;
        }
    } else {
        return false;
    }
}

int main() {
    int tanggal, bulan, tahun, tanggalSekarang, bulanSekarang, tahunSekarang;
    tanggalSekarang = 7;
    bulanSekarang = 5;
    tahunSekarang = 2023;

    cout << "Masukkan tanggal, bulan, dan tahun lahir Anda: " << endl;
    cin >> tanggal;
    cin >> bulan;
    cin >> tahun;

    Umur<int> usia(&tanggal, &bulan, &tahun);

    usia.hitungUmur(tanggalSekarang, bulanSekarang, tahunSekarang);

    return 0;
	
}
