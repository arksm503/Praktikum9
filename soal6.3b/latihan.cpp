#include <iostream>
using namespace std;

int x;
void zmodus(float bil[], int n, float mds[])
{
    int total[100];
    int k=1;
    x=0;
    //urutkan kecil ke besar
    for(int j=0; j<n; j++)
    {
        for(int i=(n-1); i>=0; i--)
        {
            if (bil[i]<bil[i-1]){
                int temp;
                temp=bil[i];
                bil[i]=bil[i-1];
                bil[i-1]=temp;
            }
        }
    }


    cout<<"Hasil Pengurutan : ";
    for(int d=0; d<n; d++){
        cout<< " "<<bil[d];
    }cout<<endl;

    //hitung berapa kali muncul tiap angka
    for(int j=0; j<n; j++)
    {
        total[j]=0;
        for(int i=0; i<n; i++)
        {
            if (bil[j]==bil[i]){
                total[j]++;
            }
        }
    }

    //menentukan nilai yg sering muncul
    for(int j=0; j<n; j++){
        if (total[j]>k){
            k=total[j];
        }
    }

    //modus lebih dari satu
    for(int j=0; j<n; j++)
    {
        if(x==0)
            mds[x]=0;
        else
            mds[x]=mds[x-1];
        if(total[j]==k)
            {
            if(bil[j]!=mds[x])
            {
            mds[x]=bil[j];
            x++;
            }
        }
    }

    //jika semua angka muncul sama banyak
    int z=0;
    for(int j=0; j<n; j++)
    {
        if(total[j]==k){
            z++;
        }
    }
    if(z==n){
        x=0;
    }
}

int main()
{
    int n;
    float bil[100];
    float mds[100];
    cout<< "Input Banyaknya Bilangan : ";cin>>n;
    for(int j=0; j<n; j++){
        cout<< "Input Bilangan ke "<<(j+1)<<" : ";cin>>bil[j];
    }
    cout<<endl;
    zmodus(bil,n,mds);
    if(x==0)
        cout<<"Tidak Ada Modus ! "<<endl;
    else
    {
        cout<<"Modus : ";
        for(int j=0; j<x; j++)
        {
        cout<<mds[j]<<" ";
        }
    }
}
