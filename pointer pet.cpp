#include<iostream>
using namespace std;

//fungsi dengan pointer
//void fungsi(int *b){
//	cout<<"address b "<<b<<endl;
//	cout<<"nilai b "<<*b<<endl;
//}
//void kuadrat(int *valPtr){
//	*valPtr = (*valPtr) * (*valPtr);
//}
//
//
//int main(){
//	
//	int a = 5;
//	//pointer
//	int *ptr = &a;
//	cout << "nilai dari a: "<<a<<endl;
//	cout << "alamat dari a: "<<ptr<<endl;
//	fungsi(&a);
//	
//	//dereferencing, mengambil data dari sebuah pointer
//	//cout<<"nilai dari pointer ptr: "<<*ptr;
//	
//	kuadrat(&a);
//	cout<<"nilai a: "<<a<<endl;
//	return 0;
//}

//kajon

//function pointer
//int tambah(int a, int b){
//	return a+b;
//}
//int kurang(int a, int b, int c){
//	return a-b-c;
//}


int main(){
	
//	int a, b, c;
//	cin>>a>>b>>c;
//	
//	//function pointer
//	
//	//kala antara tambah dan kurang beda jumlah parameter
//	int (*ptr2) (int, int, int) = {kurang};
//	int (*ptr) (int, int) = {tambah};
//	cout << (*ptr) (a, b) <<endl;
//	cout << (*ptr2) (a, b, c)<<endl;
	
	//make 2 tambah dan kurang inputan masukin sendiri
//	int(*ptr[]) (int, int) = {tambah, kurang};
//	
//	for (int i = 0; i < 2; i++){
//		cout<< (*ptr[i]) (a,b) << endl;
//	}
//	
//	//kalo mau tambah aja dan inputan udah ditetapin
//	int(*ptr) (int, int) = {tambah};
//	for (int i = 0; i < 2; i++){
//		cout<< (*ptr[0]) (5,4) << endl;
//	}
	
	
	//pengenalan pointer
//	int a=5;
//	int* ptr = &a; //inisiasi pointer dengan alamat memory a
//	cout<<ptr<<" "<<a<<endl;
//	cout<<*ptr<<" "<<&a<<endl;	
//	
//	//pointer ke pointer
//	int **dptr = &ptr;
//	cout << **dptr;
	
	//pointer dengan array
//	int arr[5] = {10, 20, 30, 40, 50};
//	int *ptr = arr;
//	
//	for (int i=0; i < 5; i++){
//		cout<<"Value of arr ["<< i <<"] = "<<*ptr<<endl;
//		ptr++;
//	}
	
	
	//new dan delete
	int *a;
	a = new int;
	*a = 50;
	cout<<a<<" "<<*a<<endl;
	
	delete a;
	cout<<*a;
	
	
}












