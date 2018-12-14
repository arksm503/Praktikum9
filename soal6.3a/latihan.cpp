#include <iostream>

using namespace std;

int a[10];

int input (int n)
{
    int i;
    for (i=0; i<n; i++)
    {
        cout<< "Input Bilangan Ke ["<<i+1<<"] : ";
        cin>>a[i];
    }
}

int hasil (int n)
{
    int i, max, min;
    max = a[0];
    for (i=0; i<n; i++)
    {
        if(max<a[i]){
            max = a[i];
        }else if (min>a[i]){
            min = a[i];
        }
    }
    cout<<"Nilai Max adalah : "<<max<<endl;
    cout<<"Nilai Min adalah : "<<min<<endl;
}

int main()
{
    int n;
    cout<<"Masukan Jumlah Bilangan : ";
    cin>>n;
    input(n);
    hasil(n);
}
