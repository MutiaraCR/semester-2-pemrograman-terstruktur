#include <iostream>
#define MAX(x,y) (x>y?x:y)
#define SUM(x,y) (x+y)
#define C 0.0000027
using namespace std;

double weight(int, int, int, double);
void cetak(void);
int product(int, int, int);
int product(int, int);
double product(int, double);
double product(double, double, double);
void ubah(int&);
int factorial(int);
int pangkat(int, int);
int main(){
    int a, b, c;
    double d;
    cetak();
    cin>>a>>b>>c>>d;
    
    /*ternary operator
    (boolean condition) ? (if true) : (if false)
    */
    double hasil;
    hasil = a>b ? c : d;
    // if (a>b)
    //     hasil = c;
    // else 
    //     hasil = d;
    
    // cout<<"Casting d ke int: "<<(int) d <<endl;
    // cout<<weight(a,b,c,d)<<endl;
    // cout<<product(a,b)<<endl;
    // cout<<product(a,b,c)<<endl;
    // cout<<product(a,d)<<endl;
    // cout<<MAX(a,b)<<endl;
    // cout<<SUM(a,b)<<endl;
    // cout<<C<<endl;
    
    //Operator reference -> &
    //Operator dereference -> *
    
    cout<<&a<<" "<<a<<endl;
    ubah(a);
    cout<<&a<<" "<<a<<endl;
    cout<<factorial(4)<<endl;
    cout<<pangkat(a,b)<<endl;
    
    return 0;
}
int pangkat(int a, int n){
    if (n==0) return 1;
    return a * pangkat(a, n-1);
}
int factorial(int n){
    /* Langkah2 membuat fungsi rekursif:
       1. Tentukan base fungsi, kondisi dimana fungsi berhenti
       2. Ada statmen fungsi yang menuju ke kondisi base.
    */
    if (n==0) return 1;
    return n*factorial(n-1);
    
void ubah(int &x){
    x += 2;
}
int product(int x, int y, int z){
    return x*y*z;
}
double product(double x, double y, double z){
    return x*y*z;
}
int product(int x, int y){
    return x*y;
}
double product(int x, double y){
    return x*y;
}
inline double weight(int l, int w, int h, double density){
  return l*w*h*density; 
}
void cetak(void){
    cout<<"Pemrograman Terstruktur\n";
    return;
}

