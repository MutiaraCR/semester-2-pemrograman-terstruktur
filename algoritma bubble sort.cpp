//bubble sort 100

#include  <iostream>
using namespace std;
int main(){
	
	int arr[100] = {72, 17, 98, 39, 56, 24, 85, 9, 31, 50, 64, 94, 21, 40, 88, 33, 2, 66, 52, 43, 89, 77, 79, 35, 70, 4, 48, 93,
46, 29, 3, 38, 73, 55, 69, 80, 87, 42, 97, 23, 5, 60, 34, 19, 16, 41, 53, 15, 51, 10, 58, 75, 14, 81, 91, 25,
95, 30, 96, 83, 49, 54, 76, 32, 90, 74, 18, 71, 57, 68, 7, 12, 8, 99, 84, 86, 63, 36, 13, 92, 1, 62, 65, 78,
22, 37, 59, 67, 11, 45, 61, 6, 100, 20, 27, 47, 44, 28, 26, 82};
	
	cout << "Sebelum di sorting : \n";
	
	for(int i=0 ; i<100 ; i++){
		cout << arr[i] << "\t";
	}
	cout << endl;
	
	for (int i=0 ; i<100 ; i++){
		for (int j=i+1 ; j<100 ; j++){
			if ( arr[j] < arr[i]){
				int temp;
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
		
	}
	cout << "Setelah di sorting : \n";
	for (int i=0 ; i<100 ; i++){
		cout << arr[i] << "\t";	
	}
	return 0;
}
