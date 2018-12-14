#include <iostream>

using namespace std;

char matriks1[3][2];
char matrikst[2][3];

int main()
{
    for(int x=0; x<3; x++){
        for(int y=0; y<2; y++){
            cout<<"Input Baris ke-"<<(y+1)<<" kolom ke-"<<(x+1)<<" : ";
            cin>>matriks1[x][y];
        }
    }
    cout<<endl<<"Matriks A : "<<endl;
    for(int x=0; x<3; x++){
       for(int y=0; y<2; y++){
           cout<<matriks1[x][y]<<"    ";
       }cout<<endl;
    }cout<<endl;

    cout<<endl<<"Matriks A Transpose : "<<endl<<endl;
    for(int x=0; x<2; x++){
        for(int y=0; y<3; y++){
            cout<<matriks1[y][x]<<"    ";
        }cout<<endl;
    }

}
