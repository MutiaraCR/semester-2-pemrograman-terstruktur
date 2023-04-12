#include <iostream>
#include <fstream>

using namespace std;

int main(){
	ofstream infile ("contoh.txt");
	
	infile << "saya lagi puasa";
	
	infile.close();
}
