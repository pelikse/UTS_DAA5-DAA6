#include<iostream>
using namespace std;

struct buku{
    string judul, pengarang;
    int tahunterbit;

    buku *next;
};

int main(){
    buku *node1, *node2, *node3;

    node1 = new buku();
    node2 = new buku();
    node3 = new buku();

    node1->judul = "Matematika";
    node1->pengarang = "Ahli Mate";
    node1->tahunterbit = 1999;
    node1->next = node2;

    node2->judul = "Harry Potter";
    node2->pengarang = "J.K. Rowling";
    node2->tahunterbit = 2002;
    node2->next = node3;

    node3->judul = "Kata";
    node3->pengarang = "Geez & Aan";
    node3->tahunterbit = 2000;
    node3->next = NULL;

    buku *cur;
    cur = node1;
    while(cur != NULL){
        cout<<"Judul Buku = "<<cur->judul<<endl;
        cout<<"Pengarang = "<<cur->pengarang<<endl;
        cout<<"Tahun Terbit  = "<<cur->tahunterbit<<endl;
        cur = cur->next;
    }
}