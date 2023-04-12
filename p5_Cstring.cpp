#include <iostream>
#include <cstring>

using namespace std;

int main(){
    // char nama[15]="Kartika";
    // char prodi[]="Ilkom";
    // cout<<nama<<endl;
    // cout<<sizeof(nama)<<endl;
    // cout<<prodi<<endl;
    // cout<<sizeof(prodi)<<endl;
    
    // for (int i=0;i<sizeof(prodi);i++)
    //     cout<<prodi[i]<<" "<<(prodi[i]=='\0'?"Null":"Not Null")<<endl;
    
    // int A[]={1,5,2,3};
    // char str[]={'U','N','I','L','A','\0'};
    
    // // int *ptr;
    // // ptr=A;
    
    // char *s=nama;
    // int i=0;
    // while (*s++ !='\0')
    //     i++;
    
    // cout<<i;
    // s = nama;
    
    // cout<<strlen(str)<<endl;

    //InOut C-String:
    char npm[11];
    char mhs[21];
    
    // cin.get(npm,11);
    // cout<<npm<<endl;
    // cin.ignore(255,'\n');
    // cin.get(mhs,20);
    // cout<<mhs;
    
    // cin.getline(npm,11);
    // cin.getline(mhs,21);
    // cout<<npm<<endl;
    // cout<<mhs<<endl;
    
    // char c;
    // while (cin.get(c)){
    //     if (c=='a')
    //         cin.putback('e');
    //     else 
    //         cout<<c;
    // }
    
    //Konversi ke tipe data lain: ATOI(), ATOL(), ATOF()
    //7       2
    //8^1    8^0 = 6 * 8 + 2 * 1
    
    // char data[4][20]={"62Kartika",
    //                     "72Retno",
    //                     "81Adi Ikhsan",
    //                     "ff"};
    
    // // cout << atof(data1) <<" "<< atof(data2) <<" "<< atof(data3) <<" "<< atof(data4) <<"\n";
    // // konversi dengan  strtod (), strtol () and strtoul()
    // char *pstr;
    // for (int i=0;i<4;i++){
    //     long nilai=strtol(data[i],&pstr,16);
    //     cout<<pstr<<" "<<nilai<<endl;
    // }
    
    //Fungsi manipulasi character
    char str[50]="Ilkom";
    char *pstr=str;
    int i=0;
    while (str[i] !='\0'){
        str[i]=toupper(str[i]);
        i++;
    }
    cout<<str;
    
    strcat(pstr,"Unila Lampung");
    
    cout<<endl<<pstr;
    
    return 0;
}
