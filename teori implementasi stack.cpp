#include<iostream>

using namespace std;
//ADT Mahasiswa as item 
struct Mahasiswa{
    string nama;
    double ipk;
    Mahasiswa(){

    }
    Mahasiswa(string nm, double val){
        nama = nm;
        ipk = val;
    }
}; 
//ADT Stack
struct MyStack{
    static const int STACK_SIZE = 10;
    Mahasiswa item[STACK_SIZE];
    int top;

    MyStack(){
        top = -1;
    }
    bool isEmpty(){
        return top<0;
    }
    bool isFull(){
        return top >= STACK_SIZE-1;
    }
    void push(string nama, double ipk){
        if (isFull()){
            cout<<"Stack is Full\n";
            return;
        }
        item[++top] = Mahasiswa(nama,ipk);
    }
    Mahasiswa pop(){
        if (isEmpty()){
            cout<<"Stack is Empty\n";
            return Mahasiswa("",0);
        }
        return item[top--];
    }
    void printTop(){
        cout<<item[top].nama<<" "<<item[top].ipk<<endl;
    }

};
int main(){
    MyStack st;
    st.push("Rika",3.2);
    st.push("Rina",3.3);
    st.push("Rida",3.4);
    st.push("Rima",3.5);
    st.push("Rita",3.6);
    cout<<st.pop().nama<<endl;
    st.printTop();
    return 0;
}
