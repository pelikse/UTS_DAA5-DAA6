#include <iostream>
#include <queue>

using namespace std;
int main()
{
    system("cls");
    queue<string>s;
    int i,n;
    string nama;
    cout<<"Antrian Buat paspor";
    cout<<"\nMasukkan banyak antrian membuat Paspor : ";
    cin>> n;
    cout<<"Silahkan masukkan nama :"<<endl;
    for (i = 0; i <n; i++)
    {
        cout<<i+1<<". ";
        cin>>nama;
        s.push(nama);
    }
    cout<<endl<<"List antrian :"<<endl;
    for (i = 0; i <n; i++)
    {
        cout<<s.front()<<endl;
        s.pop();
    }
}