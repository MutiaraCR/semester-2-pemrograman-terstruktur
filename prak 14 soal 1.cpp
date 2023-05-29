#include <iostream>
#include <vector>

using namespace std;
int main(){
	
	char c;
	vector<char> karakter;
	vector<char>:: reverse_iterator it;
	
	while(true){
		cin.get(c);
		if (c == '\n'){
			break;
		}
		karakter.push_back(c);
	}
	
	for( it = karakter.rbegin(); it != karakter.rend(); it++){
		cout << *it;
	}
	
}
