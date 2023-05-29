#include <iostream>
#include <list>

using namespace std;
class Kontak{
	private:
		list<string> nomor;
	
	public:
		void setNomor(list<string> nomor){
			this->nomor = nomor;
		}
		list<string> getNomor(){
			return nomor;
		}
		void tambah(string no){
			nomor.push_back(no);
		}
		void hapus(string no){
			nomor.remove(no);
		}
		void tampil(){
			list<string>::iterator it;
			for (it=nomor.begin() ; it!=nomor.end() ; it++)
			cout << *it << "\n";
		}
};

int main(){
	
	Kontak kontak;
	int jumlah;
	cin >> jumlah;
	
	//buat masukin nomor
	for(int  i=0 ; i<jumlah ; i++){
		string no;
		cin >> no;
		if(i==jumlah/2){
		kontak.hapus(no);
		}
		else{
			kontak.tambah(no); 
		}
	}
	cout << "\n";
	kontak.tampil();
}
