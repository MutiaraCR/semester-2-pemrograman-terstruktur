// menghitung luas persegi panjang
// dengan macro
#include <iostream>
using namespace std;
#define Area_Rect(x,y) ((x)*(y))
int main()
{
	double A, B;
	cout<< “Write sides of rectangle :”; cin>>A>>B;
	cout << “Area_Rect(A,B) = “ <<Area_Rect(A,B) << endl;
	return 0;
	}

// menghitung faktorial
#include <iostream>
long fact(int i)
	{ if (i < 0) return 0;
	int k = 1;
	while (i > 0)
	k *= i– –;
	return k;
}
using namespace std;
int main()
{
	int n,m;
	long p;
	m = 5;
	n=3;
	p = fact(m)/fact(m–n);
	cout <<“Factorial 6 = ” <<fact(6)<<“, Factorial 4 = ”<<fact(4)<< “, p = ”
	<<p<<endl;
return 0;
}

//fungsi trigonometri
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a =60,b=45,c=30;
	double alpha, beta, gama, C, S ,T ,theta, pi;
	pi = 3.14159;
	alpha = a*pi/180; //converting angle from degrees to radians.
	beta = b*pi/180;
	gama = c*pi/180;
	C = cos (alpha); // calling trigonometric functions
	T = tan(beta);
	S = sin(gama);
	cout.precision(4); // number of digits desired in output
	cout << “cos 60 = ” <<C <<endl;
	cout << “tan 45 = ” << T << endl;
	cout << “sin 30 = ” << S << endl;
	theta = acos (0.5)*180/pi; // conversion of radians into degrees
	cout << “cos inverse 0.5 = “ << theta << “ degrees” << endl;
	return 0;
}

// FUNGSI FIBONACCI
#include<iostream>
using namespace std;
int Fib(int n){ 
	if (n ==0 || n <2) return n ;
 	else
	return Fib(n–1) + Fib(n–2); }

int main()
{
for(int N=0; N<=11; N++)
cout<< Fib(N)<<“ “;
return 0;
}

//menghitung nilai kubus dengan rekursi
#include <iostream>
using namespace std;
void Recf(int x)
{ int cube ; //Definition of function
cube= x*x*x;
cout<< cube <<“ ”;
if (x> 5) exit(0);
Recf (x+1);}
int main ()
{
int x =1;
Recf (x);
return 0;
}
