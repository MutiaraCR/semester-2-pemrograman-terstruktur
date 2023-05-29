#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};

struct MyList{
  Node *head;
  MyList(){
    head = NULL;
  }  

  bool isEmpty(){
    return head == NULL;
  }

  void tambahDepan(int databaru){
    Node *baru;
    baru=new Node;
    baru->data=databaru;
    baru->next=NULL;

    if (isEmpty())
        head = baru;
    else {
        baru->next = head;
        head = baru;
    }
  }

  void display(){
    
    if (isEmpty())
        cout<<"List Kosong";
    else {
        Node *bantu;
        bantu=head;
        while (bantu != NULL){
            cout<<bantu->data<<", ";
            bantu = bantu->next;
        }
    }
  }
};

struct Student{
    int year;
    double ipk;
};

int main(){
   MyList *l;
   l = new MyList();
   l->tambahDepan(5);
   l->tambahDepan(20);
   l->tambahDepan(15);
   l->tambahDepan(3);
   l->tambahDepan(7);
   l->display();
    return 0;
}   
