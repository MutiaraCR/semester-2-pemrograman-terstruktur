#include <iostream>
using namespace std;
struct  Mahasiswa
{
    string nama;
    double ipk;
    Mahasiswa(){

    }
    Mahasiswa(string n, double val){
        nama=n;
        ipk=val;
    }
};

struct MyQueue{
    static const int QSIZE = 6;
    Mahasiswa items[QSIZE];
    int front, rear;
    MyQueue(){
        front=rear=0;
    }   
    bool isEmpty(){
        return front==rear;
    }
    bool isFull(){
        return front==(rear+1)%QSIZE;
    }
    void enq(string nama, double ipk){
        if (isFull()){
            cout<<"Queue Penuh\n";
            return;
        }
        rear = (rear+1)%QSIZE;
        items[rear]=Mahasiswa(nama,ipk);
    }
    Mahasiswa deq(){
        if (isEmpty()){
            cout<<"Queue kosong\n";
            return Mahasiswa();
        }
        front = (front + 1) % QSIZE;
        return items[front];
    }
    void cetakfistNLast(){
        if (isEmpty())
            cout<<"Queue Kosong\n";
        else 
            cout<<items[front+1].nama<<" "<<items[rear].nama<<endl;
    }
};

int main(){
    MyQueue q;
    q.enq("Rita",3.2);
    q.enq("Rida",3.2);
    q.enq("Risa",3.2);
    q.enq("Rina",3.2);
    q.enq("Rima",3.2);
    cout<<q.deq().nama<<endl;
    q.enq("Riza",3.2);
    q.cetakfistNLast();
    return 0;
}
