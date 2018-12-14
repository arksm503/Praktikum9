Menghitung Perkalian Matriks

int matriks1[2][3]; //matriks1, 2 kolom 3 baris
int matriks2[3][1]; //matriks2, 3 kolom 1 baris
int matriksh[2][1]; //matriksh, 2 kolom 1 baris
=========================================================================
int main()
main program

    for(int x=0; x<2; x++){         //operasi untuk 2 kolom
        for(int y=0; y<3; y++){     //operasi untuk 3 baris

    Perulangan jika telah mencapai 3 baris lanjut ke kolom berikutnya
    Perulangan Jika telah mencapai 2 kolom lanjut ke operasi selanjutnya

    cout<<"Input Baris ke-"<<(y+1)<<" kolom ke-"<<(x+1)<<" : ";
    //tampilkan untuk di layar
    cin>>matriks1[x][y];
    //input matriks1 menggunakan array

=========================================================================

    cout<<"Matriks Pertama : "<<endl;   //tampilkan di layar
    for(int x=0; x<2; x++){     //operasi 2 kolom, gunakan looping for
    for(int y=0; y<3; y++){     //operasi 3 baris, gunakan looping for

    Perulangan jika telah mencapai 3 baris lanjut ke kolom berikutnya
    Perulangan Jika telah mencapai 2 kolom lanjut ke operasi selanjutnya

    cout<<matriks1[x][y]<<"    ";
    //tampilkan hasil input dari array

=========================================================================

    for(int x=0; x<3; x++){     //operasi 3 kolom, gunakan looping for
    for(int y=0; y<1; y++){     //operasi 1 baris, gunakan looping for

    Perulangan jika telah mencapai 1 baris lanjut ke kolom berikutnya
    Perulangan Jika telah mencapai 3 kolom lanjut ke operasi selanjutnya

    cout<<"Input Baris ke-"<<(y+1)<<" kolom ke-"<<(x+1)<<" : ";
    //tampilkan untuk di layar
    cin>>matriks2[x][y];
    //input matriks2 menggunakan array

=========================================================================

    cout<<"Matriks Kedua : "<<endl; //tampilkan di layar
    for(int x=0; x<3; x++){     //operasi 3 kolom, gunakan looping for
    for(int y=0; y<1; y++){     //operasi 1 baris, gunakan looping for

    Perulangan jika telah mencapai 1 baris lanjut ke kolom berikutnya
    Perulangan Jika telah mencapai 3 kolom lanjut ke operasi selanjutnya

    cout<<matriks2[x][y]<<"    ";
    //tampilkan hasil input dari array

=========================================================================

    for(int x=0; x<2; x++){     //operasi 2 kolom, gunakan looping for
    for(int y=0; y<1; y++){     //operasi 1 baris, gunakan looping for

    Perulangan jika telah mencapai 1 baris lanjut ke kolom berikutnya
    Perulangan Jika telah mencapai 2 kolom lanjut ke operasi selanjutnya

    matriksh[x][y]=
    matriks1[x][0]*matriks2[0][y]+  //matriks1 baris pertama, kolom pertama dikali matriks 2 baris pertama, kolom pertama ditambah
    matriks1[x][1]*matriks2[1][y]+  //matriks1 baris kedua, kolom pertama dikali matriks 2 baris pertama, kolom kedua ditambah
    matriks1[x][2]*matriks2[2][y];  //matriks1 baris ketiga, kolom pertama dikali matriks 2 baris pertama, kolom ketiga ditambah
    // Operasi Perkalian Matriks matriks1 x matriks2

=========================================================================

    for(int x=0; x<2; x++){     //operasi 2 kolom, gunakan looping for
    for(int y=0; y<1; y++){     //operasi 1 baris, gunakan looping for

    Perulangan jika telah mencapai 1 baris lanjut ke kolom berikutnya
    Perulangan Jika telah mencapai 2 kolom lanjut ke operasi selanjutnya

    cout<<matriksh[x][y]<<"    ";
    Print hasil matriksh dengan array


Berikut Flowchartnya : </br>
![alt text](https://raw.githubusercontent.com/arkyana/Praktikum9/master/soal6.5a/flow.png)

Berikut Hasil Screenshotnya : <br/>
![alt text](https://raw.githubusercontent.com/arkyana/Praktikum9/master/soal6.5a/ss.png)
