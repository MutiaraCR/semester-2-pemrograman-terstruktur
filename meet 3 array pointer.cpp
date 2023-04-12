#include<iostream>
using namespace std;

/*int main(){
	int myarray[5] = {10,20,30,40,50}
	for(int i=0 ; i<5 ; i++){
		cout<<"Nilai dari elemen ke-"<<i<<" adalah "<<myarray[i]<<endl;
	}
	return 0;
}*/

/*int main(){
//	int a[0];
//	cout<<&a[0]<<" "<<&a[1]<<" "<<&a[2]<<" "<<&a[3]<<" "<<&a[4];
//	cout<<sizeof(double)<<endl;
//	cout<<sizeof(int);
	
	int a[] = {2,4,5,21,42,44,3,211};
	
//	for (int i=0 ; i<sizeof(a)/sizeof(int) ; i++){
//		cout<<a[i]<<" ";
//	}

//	cout<<sizeof(a);

	for(auto& i:a){
	cout<<i<<endl;
	}
	return 0;
}*/

/*int main(){
	
	char b[]={"hi manis"};
	char c[] = {'h','a','l','o','\0'};
	
	cout<<b<<endl;
	cout<<c;
	
}*/

/*int main()
{
	int n;
	cin>>n;
	int a[n];
	
	for(int i=0 ; i<n ; i++){
		cin>>a[i];
	}
	return 0;
}*/

/*void printarray(int *arr, int size){
	for(int i=0 ; i<size ; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int arr[] = {1,2,3,4,5};
	int size = sizeof(arr)/sizeof(int);
	
	printarray(arr,size);
	
	return 0;
	
}*/

/*int main(){
	int a=5;
	int* ptr = &a;
	
	cout<<a<<endl;
	cout<<*ptr;
}*/

int main(){
	
	string a[]={"HI","MANIS"};
	cout<<*a;
	
	return 0;
}
