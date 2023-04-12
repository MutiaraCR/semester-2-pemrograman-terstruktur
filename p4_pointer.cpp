#include <iostream>

using namespace std;
int product(int a, int b){
    return a*b;
}
int add(int a, int b){
    return a+b;
}
int sub(int a, int b){
    return a-b;
}

int callFunc(int (*Fptr)(int, int),int x,int y){
    return (*Fptr)(x,y);
}
void tukar(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
    int x=10, y=20;
    int *px,  *py;
    px = &x;
    py = &y;
    
    *px = 15;
    
    
    
    // cout<<px<<" "<<&x<<" "<<py<<" "<<&y;
    // cout<<z;
    
    
    int **ptr;
    ptr = &px; // ???
    
    int z = *py***ptr**px;
    
    // cout<<&px<<" "<<**ptr<<" "<<*px<<" "<<x;
    // cout<<endl<<z;
    
    //Pointer ke Array
    int A[] = {3,1,6,9,2};
    int B[] = {55,64,67,92,72};
    
    int C[2][3] = {1,2,3,4,5,6};
    int (*ptrC)[3] = C;
    
    // cout<<A<<" "<<&A[0];
    int *ptrA;
    ptrA = A;
    // for (int i=0; i<5; i++)
    //     cout<<*(ptrA+i)<<" "<<A[i]<<" "<<ptrA+i<<" "<<&A[i]<<endl;
    
    // int *arrPtr[] = {A,B};
    
    // for (int i=0;i<2;i++)
    //     for (int j=0;j<3;j++)
    //         cout<<*(*(ptrC+i)+j)<<" ";
    
    //Pointer ke Fungsi
    int (*Fptr[]) (int, int)={product,add,sub};
    // Fptr = sub;
    // for (int i=0;i<3;i++)
    //     cout<< (*Fptr[i])(3,4)<<endl;
    for (int i=0;i<3;i++)
        cout<<callFunc(*Fptr[i],5,4)<<endl;
        
    //Keyword new dan delete
    
    int *k;
    k = new int;
    *k = 50;
    cout<<k<<" "<<*k<<endl;
    delete k;
    cout<<k<<" "<<*k<<endl;
    k = NULL;
    int c=5, d=7;
    tukar(&c, &d);
    cout<<c<<" "<<d;
    
    return 0;
}
