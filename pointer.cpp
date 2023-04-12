#include <iostream>
using namespace std;

int tambah(int a, int b){
    return a + b;
}

int kurang(int a, int b){
    return a - b;
}

int callfunc(int (*ptr) (int, int), int a, int b){
    return (*ptr) (a, b);
}

int main(){

    int (*ptr[]) (int, int) = {tambah, kurang};

    for (int i = 0; i < 2; i++){
        cout << callfunc(*ptr[i], 5, 4) << endl;
    }

    // int a, b, c;

    // cin >> a >> b >> c;

    // int (*ptr2) (int, int, int) = {kurang};

    // int (*ptr) (int, int) = {tambah};

    // cout << (*ptr) (a, b) << endl;
    // cout << (*ptr2) (a, b, c) << endl;

    // for(int i = 0; i < 2; i++){
        
    // }

    //Deklarasi pointer
    // int a = 5;
    // int* ptr = &a;

    // int **dptr = &ptr;

    // cout << **dptr;

    // cout << *ptr << " " << &a;
    // int arr[5] = {10, 20, 30, 40, 50};
    // int *ptr = arr;

    // for (int i = 0; i < 5; i++){
    //     cout << "Value of arr[" << i << "] = " << *ptr << endl;
    //     ptr++;
    // }

    //new & delete
    // int *a;

    // a = new int;

    // *a = 50;

    // cout << a << " " << *a << endl;

    // delete a;

    // cout << *a;
}