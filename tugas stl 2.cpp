#include <iostream>

using namespace std;

template<class T>
class Umursaya{
	private:
	    T* tanggal; T* bulan; T* tahun;
	
	public:
	    Umursaya(T* tanggal, T* bulan, T* tahun){
	        this->tanggal = tanggal;
	        this->bulan = bulan;
	        this->tahun = tahun;
	    }
	
	    T* getTanggal() const{
	        return tanggal;
	    }
	
	    void setTanggal(T* tanggal){
	        this->tanggal = tanggal;
	    }
	
	    T* getBulan() const{
	        return bulan;
	    }
	
	    void setBulan(T* bulan){
	        this->bulan = bulan;
	    }
	
	    T* getTahun() const{
	        return tahun;
	    }
	
	    void setTahun(T* tahun){
	        this->tahun = tahun;
	    }
	    
	    bool HitungKabisat(int tahun)const{
			if(tahun % 4 == 0) {
		        if(tahun % 100 == 0) {
		            if(tahun % 400 == 0) {
		                return true;
		            }
					else{
		                return false;
		            }
		        }
				else{
		            return true;
		        }
		    }
			else{
		        return false;
		    }
		}
	    
	    int HitungHari(int bulan, int tahun){
	        if(bulan == 2){
	            if(HitungKabisat(tahun) == false){
	                return 28;
	            } else {
	                return 29;
	            }
	        }
			else if(bulan == 4 || bulan == 6 || bulan == 9 || bulan == 11){
	            return 30;
	        }
			else{
	            return 31;
	        }
	    }
	    
	    void HitungUmur(int tanggall, int bulann, int tahunn);
};

template<class T>
void Umursaya<T>::HitungUmur(int tanggall, int bulann, int tahunn){
	int hari = tanggall - *tanggal;
        int bulan2 = bulann - *bulan;
        int tahun2 = tahunn - *tahun;

        if (hari < 0) {
            bulan2 -= 1;
            if (bulan2 < 0) {
                tahun2 -= 1;
                bulan2 += 12;
            }
            hari += HitungHari(*bulan, *tahun);
        }
        cout << "Umur Anda adalah " << tahun2 << " tahun, " << bulan2 << " bulan, " << hari << " hari." << endl;   
}

int main() {
    int tanggal, bulan, tahun, tanggall, bulann, tahunn;
    
    tanggall = 7;
    bulann = 5;
    tahunn = 2023;

    cout << "Masukkan tanggal, bulan, dan tahun lahir Anda: " << endl;
    cin >> tanggal >> bulan >> tahun;

    Umursaya<int> usia(&tanggal, &bulan, &tahun);

    usia.HitungUmur(tanggall, bulann, tahunn);

    return 0;
	
}
