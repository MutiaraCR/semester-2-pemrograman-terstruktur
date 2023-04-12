#include <iostream>
using namespace std;

struct mahasiswa
{
	string name; //atribut
	string npm; //atribut
}

int main(){
	
	mahasiswa mhs1; //(mhs1 object)
	
//Pemanggilan atribut dilakukan dengan menuliskan nama “object.atribut”.
	
	cin >> mhs1.name ;
	cin >> mhs1.npm ;
	
	cout << mhs1.name << " " << mhs1.npm ;
}

class mahasiswa{
	public:
		string nama, npm;
		
		void Perkenalan(){
			cout << "Nama : " << nama << endl;
			cout << "NPM : " << npm << endl;
		}
}

//langkah praktikum
class PersegiPanjang{
	private:
		int panjang;
		int lebar;
		
	public:
		PersegiPanjang(int panjang, int lebar){ //constructor
			this -> panjang = panjang;
			this -> lebar = lebar;
		}
		void setPanjang(int panjang){
			this -> panjang = panjang;
		}
		void setLebar(int lebar){
			this -> lebar = lebar;
		}
		int getPanjang(){
			return this->panjang;
		}
		int getLebar(){
			return lebar;
		}
		int Luas(){
			return panjang*lebar;
		}
		
}

int main(){
	
	PersegiPanjang pp (10,5);
//	pp.setPanjang(10);
//	pp.setLebar(5);
	
	cout << "Panjang : " << pp.getPanjang() << endl;
	cout << "Lebar : " << pp.getLebar() << endl;
	cout << "Luas : " << pp.Luas() << endl;
	
}
