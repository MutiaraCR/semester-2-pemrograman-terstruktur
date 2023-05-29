#include <iostream>
using namespace std;

class Template {
private:
    int tanggal_lahir, bulan_lahir, tahun_lahir;

public:
    Template(int tanggal, int bulan, int tahun) {
        tanggal_lahir = tanggal;
        bulan_lahir = bulan;
        tahun_lahir = tahun;
    }

    void setTanggalLahir(int tanggal) {
        tanggal_lahir = tanggal;
    }

    int getTanggalLahir() {
        return tanggal_lahir;
    }

    void setBulanLahir(int bulan) {
        bulan_lahir = bulan;
    }

    int getBulanLahir() {
        return bulan_lahir;
    }

    void setTahunLahir(int tahun) {
        tahun_lahir = tahun;
    }

    int getTahunLahir() {
        return tahun_lahir;
    }

    void hitungUmur(int tanggal_sekarang, int bulan_sekarang, int tahun_sekarang) {
        int tahun = tahun_sekarang - tahun_lahir;
        int bulan = bulan_sekarang - bulan_lahir;
        int hari = tanggal_sekarang - tanggal_lahir;

        if (hari < 0) {
            bulan -= 1;
            if (bulan < 0) {
                tahun -= 1;
                bulan += 12;
            }
            hari += jumlahHariBulan(bulan_lahir, tahun_lahir);
        }

        cout << "Umur Anda adalah " << tahun << " tahun, " << bulan << " bulan, " << hari << " hari." << endl;
    }

    int jumlahHariBulan(int bulan, int tahun) {
        if (bulan == 2) {
            if (apakahTahunKabisat(tahun)) {
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

    bool apakahTahunKabisat(int tahun) {
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
};

int main() {
    int tanggal, bulan, tahun;

    cout << "Masukkan tanggal, bulan, dan tahun lahir Anda: " << endl;
    cout << "Tanggal: ";
    cin >> tanggal;
    cout << "Bulan: ";
    cin >> bulan;
    cout << "Tahun: ";
    cin >> tahun;

    Template templateObj(tanggal, bulan, tahun);

    // Menghitung umur
    int tanggal_sekarang = 6;
    int bulan_sekarang = 5;
    int tahun_sekarang = 2023;

    templateObj.hitungUmur(tanggal_sekarang, bulan_sekarang, tahun_sekarang);

    return 0;
}

