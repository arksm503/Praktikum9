Menghitung Matriks Transpose

char matriks1[3][2]; tipe data matriks1 char, 3 kolom 2 baris
char matrikst[2][3]; tipe data matrikst char, 2 kolom 3 baris

int main()
Main Program

    for(int x=0; x<3; x++){ //operasi untuk 3 kolom, gunakan looping for
    for(int y=0; y<2; y++){ //operasi untuk 2 baris, gunakan looping for

    Perulangan jika telah mencapai 2 baris lanjut ke kolom berikutnya
    Perulangan Jika telah mencapai 3 kolom lanjut ke operasi selanjutnya

    cout<<"Input Baris ke-"<<(y+1)<<" kolom ke-"<<(x+1)<<" : ";
    tampilkan di layar
    cin>>matriks1[x][y];
    input matriks1 dengan array

    cout<<endl<<"Matriks A : "<<endl; //tampilkan di layar

    for(int x=0; x<3; x++){ //operasi untuk 3 kolom, gunakan looping for
    for(int y=0; y<2; y++){ //operasi untuk 2 baris, gunakan looping for

    cout<<matriks1[x][y]<<"    ";
    Print hasil input matriks1

    cout<<endl<<"Matriks A Transpose : "<<endl<<endl;
    Tampilkan di layar

    for(int x=0; x<2; x++){ //operasi untuk 2 kolom, gunakan looping for
    for(int y=0; y<3; y++){ //operasi untuk 3 baris, gunakan looping for

    Perulangan jika telah mencapai 3 baris lanjut ke kolom berikutnya
    Perulangan Jika telah mencapai 2 kolom lanjut ke operasi selanjutnya

    cout<<matriks1[y][x]<<"    ";
    Print matriks1, tetapi antara index [x] dan [y] dibalik
    agar menjadi nilai matrik Transpose

Berikut Flowchartnya : <br/>
![alt text](https://raw.githubusercontent.com/arkyana/Praktikum9/master/soal6.5b/flow.png)

Berikut Hasil Screenshotnya : <br/>
![alt text](https://raw.githubusercontent.com/arkyana/Praktikum9/master/soal6.5b/ss.png)
