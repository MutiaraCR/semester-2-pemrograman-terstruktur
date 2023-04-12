#include <iostream>
#include <cstring>
using namespace std;

// deklarasi  dan inisialisasi c-string
int main(){
	
	char nama[15] = "John";
	char prodi[] = "Ilkom";
	
	cout<<nama<<endl;
	cout<<sizeof(nama)<<endl;
	
	cout<<prodi<<endl;
	cout<<sizeof(prodi)<<endl;
	
	for (int i=0 ; i < sizeof(prodi) ; i++)
		cout << prodi[i] <<" "<< (prodi[i] == '\0'? "Null" : "Not Null") << endl;
	
}

// Input pada c-string
int main(){
	
	char nama[15];
	char npm[10];
	
	cin.get(nama,15);
	cin.ignore();
	cin.get(npm,10);
	
	cout << "Nama : " << nama << endl;
	cout << "NPM  : " << npm << endl;
	
}


// cin.putback
int main(){
	
	char karakter;
	while (cin.get(karakter)){
		if (karakter == 'a')
			cin.putback('x'); //ganti a jadi x
		else
		 	cout << karakter;
	}
	
}

//fungsi untuk manipulasi c-string (1. strlen)
int main(){
	char str[] = {'I','L','K','O','M','P','\0'};
	
	cout << str << endl;
	cout << strlen(str) << endl; 
	/* strlen() digunakan untuk menghitung panjang string 
	hingga karakter null-terminator (\0) ditemukan */
}

//(2. strcat) >> untuk menggabungkan 2 buah string
int main(){
	
	char firstname[50] = "Dhiaurrahman Raziq ";
	char lastname [50] = "Ramadhan";
	char *fullname = strcat(firstname,lastname);
	cout << fullname;
	
}

// fungsi strtol()
/* mengkonversi 
(convert) string ke bilangan bulat (integer) */
int main() {
	
	char* endptr;
	
	char str1[] = "00011010John";
	long value1 = strtol(str1, &endptr, 2);
	cout << "The converted value is "<< value1 << endl;
	cout << "Unconverted part: " << endptr << endl;
	
	char str2[] = "1CZidan";
	long value2 = strtol(str2, &endptr, 16);
	cout << "The converted value is "<< value2 << endl;
	cout << "Unconverted part: " << endptr << endl;
	
	char str3[] = "40Raziq";
	long value3 = strtoul(str3, &endptr, 10);
	cout << "The converted value is "<< value3 << endl;
	cout << "Unconverted part: " << endptr << endl;
	
}

// fungsi strtoul()
/* strtoul() untuk mengkonversi 
tiga string ke bilangan bulat */
int main(){
	
	char* endptr;
	
	char str1[] = "00011010John";
	unsigned long value1 = strtoul(str1, &endptr, 2);
	cout << "The converted value is "<< value1 << endl;
	cout << "Unconverted part: " << endptr << endl;
	
	char str2[] = "1CZidan";
	unsigned long value2 = strtoul(str2, &endptr, 16);
	cout << "The converted value is "<< value2 << endl;
	cout << "Unconverted part: " << endptr << endl;
	
	char str3[] = "40Raziq";
	unsigned long value3 = strtoul(str3, &endptr, 10);
	cout << "The converted value is "<< value3 << endl;
	cout << "Unconverted part: " << endptr << endl;

//bedanya yg tol pake long yang toul pake unsigned long	
}

//stdrod
/* strtod() untuk mengkonversi 
tiga string ke bilangan desimal (double) */
int main(){
	
	char* endptr;
	
	char str1[] = "10John";
	double value1 = strtod(str1, &endptr);
	cout << "The converted value is "<< value1 << endl;
	cout << "Unconverted part: " << endptr << endl;
	
	char str2[] = "20Zidan";
	double value2 = strtod(str2, &endptr);
	cout << "The converted value is "<< value2 << endl;
	cout << "Unconverted part: " << endptr << endl;
	
	char str3[] = "40Raziq";
	double value3 = strtod(str3, &endptr);
	cout << "The converted value is "<< value3 << endl;
	cout << "Unconverted part: " << endptr << endl;
	
}

//langkah praktikum
int main(){
	
	char data[8][100] = {"2117051024Jhon Wilken Christoper N",
						"2117051009Nathania Santa N", "2117051048Dhiaurrahman Raziq R",
						"2117051025Stefanus Ferry S", "2117051088Fatimah Abbiyi K",
						"2117051095Jihan Haya M", "2117051057Reza Nur Ramadhan",
						"2117051070Muhammad Zidan Pasya"};
						
	char* endPtr;
	for( int i=0 ; i<8 ; i++){
		long value = strtod(data[i], &endPtr);
		cout << "Nama : " << endPtr << endl;
		cout << "NPM  : " << value << endl;
		cout << endl;
	}
}
