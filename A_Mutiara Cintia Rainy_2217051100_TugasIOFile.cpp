#include <iostream>
#include <fstream>
using namespace std;

int main(){
	
	string teks[4];
	for (int i = 0 ; i < 4 ; i++){
		cin >> teks[i];
	}
	
	ofstream readFile("barang.txt");
	
	for (int i = 0 ; i < 4 ; i++){
		readFile << teks[i] << "\n";
	}
}
