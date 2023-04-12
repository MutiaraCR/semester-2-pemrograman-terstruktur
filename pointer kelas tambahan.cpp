#include<iostream>
#include<cmath>
using namespace std;

int tambah(int a, int b){
	return a+b;
}

int kurang(int a, int b, int c){
	return a-b-c;
}

int main(){
	int a,b,c;
	int(*ptr2[]) (int,int,int) = {kurang};	
	int (*ptr[]) (int,int) = {tambah};
	
	cin>>a>>b>>c;
	
	cout << (*ptr) (a,b) << endl;
	cout << (*ptr2) (a,b,c) << endl;

//	for(int i=0 ; i<2 ; i++){
//		cout << (*ptr[0]) (5,4) << endl;
//	}
		
	
/*	int a = 5;
	int* ptr = &a;
	
	int **dptr = &ptr;
	
	cout << **dptr;
	*/
}




