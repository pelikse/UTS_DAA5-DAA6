#include <iostream>

using namespace std;

struct kantin{
    string makanan;
    int harga,banyak,total;
};

void order(){
    int x,nmr,jlh,total,kembalian;
    total=0;
    kantin menu[10];
    long uang;

    system("cls");
    cout<<"Masukkan Budget : Rp.";
    cin>>uang;
    if (uang<3000){
        cout<<"Maaf, Uang anda tidak cukup untuk kantin ini";
    }else{
        cout<<"Selamat Datang !\n";
    }
    system("cls");
    cout<<"Menu\n1.Roti\t\tRp.5000";
    cout<<"\n2.Aqua\t\tRp.3000";
    cout<<"\n3.Susu\t\tRp.7000";
    cout<<"\n4.Nasi Bungkus\tRp.10000";
    cout<<"\nSecret Menu\tRp.??";
    cout<<"\nHarap memesan sesuai budget!";
    cout<<"\nMasukkan Jumlah barang yang akan dipesan : ";
    cin>>x;
    for (int i=1;i<=x;i++){
        cout<<"Barang ke-"<<i<<endl;
        cout<<"Nomor di menu : ";
        cin>>nmr;
        cout<<"Jumlah : ";
        cin>>menu[i].banyak;

        if (nmr==1){
            menu[i].makanan="Roti";
            menu[i].harga=5000;
        }else if (nmr==2){
            menu[i].makanan="Aqua";
            menu[i].harga=3000;   
        }else if (nmr==3){
            menu[i].makanan="Susu";
            menu[i].harga=7000;
        }else if (nmr==4){
            menu[i].makanan="Nasi Bungkus";
            menu[i].harga=10000;
        }else{
            menu[i].makanan="O2(Oksigen)";
            menu[i].harga=0;
        }
        menu[i].total=menu[i].banyak*menu[i].harga;
        total+=menu[i].total;
    }

    kembalian=uang-total;
    cout<<"\nPembayaran Otomatis !";
    cout<<"\nJumlah yang harus dibayar adalah : Rp."<<total<<endl;
    cout<<"\nUang anda : Rp."<<uang<<endl;
    if (uang<total){
        cout<<"Uang anda tidak cukup ! Lain kali jika memesan sesuai budget dong";
    }else{
        cout<<"Kembalian : Rp."<<kembalian<<endl;
    }

};


int main(){
    order();
    return 0;
}