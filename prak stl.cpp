#include <iostream>
#include <vector>

/*using namespace std;
 int main(){
 	
 	vector<int> v = {1, 2, 3, 4, 5};
 	vector<int> v2(v.size());
 	
 	copy(v.begin(), v.end(), v2.begin())
 	
 	cout << "Isi vector1: ";
	for (auto i:v){
 		cout << i << " ";
	}
	cout << endl;
	
	cout << "Isi vector 2: ";
	for (auto i:v2){
 		cout << i << " ";
	}
	cout << endl;
 	
 	/*vector<int> :: iterator it;
 	
 	cout << "Elemen dari vector: ";
 	for(it = v.begin(); it = v.end(); it++){
 		cout << *it << " ";
	 }
	 */
	 
 	
	/*cout << "Isi : ";
	for (auto i:v){
 		cout << i << " ";
	}
	cout << endl;
	 
	v.push_back(10);
	v.push_back(20);
	 
	cout << "Isi : ";
	for (auto i:v){
 		cout << i << " ";
	}
	cout << endl;
	
	v.erase(v.begin());
	
	cout << "Isi : ";
	for (auto i:v){
 		cout << i << " ";
	}
	cout << endl; 
	
	return 0;
 }*/


using namespace std;

template<class T>

class PerhitunganKabisat {
	private:
		T* tahun;
		
	public:
		//Konstruktor dengan parameter
		PerhitunganKabisat(T* tahun) : tahun(tahun) {
		}
		//Getter
		T* getTahun()const {
			return tahun;
		}
		//Setter
		void setTahun(T* tahun) {
			this->tahun = tahun;
		}
		
	bool HitungKabisat()  const {
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
				return true;
			}
		}
		else {
			return false;
		}
	}
};

int main(){
	int tahun;
	cout << "Masukan tahun : ";
	cin >> tahun;
	
	PerhitunganKabisat<int> Kabisat(&tahun);
	
	if (Kabisat.HitungKabisat()){
		cout << *Kabisat.getTahun() << " adalah tahun kabisat" << endl;
	}
	else {
		cout << *Kabisat.getTahun() << " bukan tahun kabisat" << endl;
	}
	
	return 0;
}
