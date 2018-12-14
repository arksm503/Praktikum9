#include <iostream>

using namespace std;

int matriks1[2][3];
int matriks2[3][1];
int matriksh[2][1];

int main()
{
    //matriks 1
    for(int x=0; x<2; x++){
        for(int y=0; y<3; y++){
            cout<<"Input Baris ke-"<<(y+1)<<" kolom ke-"<<(x+1)<<" : ";
            cin>>matriks1[x][y];
        }
    }
    cout<<"Matriks Pertama : "<<endl;
    for(int x=0; x<2; x++){
       for(int y=0; y<3; y++){
           cout<<matriks1[x][y]<<"    ";
       }cout<<endl;
    }cout<<endl;

    //matriks 2

    for(int x=0; x<3; x++){
        for(int y=0; y<1; y++){
            cout<<"Input Baris ke-"<<(y+1)<<" kolom ke-"<<(x+1)<<" : ";
            cin>>matriks2[x][y];
        }
    }
    cout<<"Matriks Kedua : "<<endl;
    for(int x=0; x<3; x++){
       for(int y=0; y<1; y++){
           cout<<matriks2[x][y]<<"    ";
       }cout<<endl;
    }cout<<endl;

    //perkalian
    cout<<"Hasilnya : "<<endl;
    for(int x=0; x<2; x++){
        for(int y=0; y<1; y++){
            matriksh[x][y]=matriks1[x][0]*matriks2[0][y]+matriks1[x][1]*matriks2[1][y]+matriks1[x][2]*matriks2[2][y];
            }
        }

    for(int x=0; x<2; x++){
        for(int y=0; y<1; y++){
        cout<<matriksh[x][y]<<"    ";
        }cout<<endl;
    }cout<<endl;
}

