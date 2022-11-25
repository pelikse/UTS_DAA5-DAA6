#include <iostream>

using namespace std;

struct datadiri{
    string nama;
    int nim;
};
void bubble(datadiri get[],int m){
    int i,j;
    for (i = 0; i < m-1; i++)
    {
        for (j = 0; j < m-1; j++)
        {
            if (get[j].nim >get[j+1].nim)
            {
                swap(get[j].nama,get[j+1].nama);
                swap(get[j].nim,get[j+1].nim);
            }
        }
    }
    
}
int main(){
    int n;
    system("cls");
    cout<<"Program Data Mahasiswa"<<endl;
    cout<<"Banyak data yang ingin di masukkan : ";
    cin>>n;
    datadiri siswa[n];
    int i=0;
    for ( i = 0; i < n; i++)
    {
        cout<<"\t"<<i+1<<".Masukkan NIM\t: ";
        cin>>siswa[i].nim;
        cout<<"\t  Masukkan nama\t: ";
        cin.ignore();
        getline(cin,siswa[i].nama);
    }
    bubble(siswa,n);
    for  (i = 0; i < n; i++)
    {
        cout<<"\t"<<i+1<<".NIM : "<<siswa[i].nim<<endl;
        cout<<"\t  Nama : "<<siswa[i].nama<<endl;
    }
    
}