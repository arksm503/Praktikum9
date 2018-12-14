Menghitung Nilai Max & Min

int a[100]; //inisialiasasi variabel a array indeks 10

int input (int n)   //Fungsi input, n tipe data integer

    int i;  //i tipe data integer
    for (i=0; i<n; i++)
    //perulangan jika i telah mencapai n maka lanjut ke operasi berikutnya

    cout<< "Input Bilangan Ke ["<<i+1<<"] : "; //tamplikan di layar
    cin>>a[i];  //input array a

int hasil (int n) //fungsi hasil n tipe data integer
    int i, max, min; // i, max, min tipe data integer
    max = a[0];
    for (i=0; i<n; i++)
    Proses perulangan untuk mencari nilai terbesar dan terkecil

        if(max<a[i]){   //pemilihan nilai terbesar
            max = a[i];
        }else if (min>a[i]){    //pemilihan nilai terkecil
            min = a[i];

    cout<<"Nilai Max adalah : "<<max<<endl;
    print nilai terbesar ke layar
    cout<<"Nilai Min adalah : "<<min<<endl;
    print nilai terkecil ke layar

int main()
main program

    int n;  //n tipe data integer
    cout<<"Masukan Jumlah Bilangan : ";
    Tampilan ke layar
    cin>>n;
    Input Jumlah Bilangan variabel n
    input(n); //panggil fungsi input
    hasil(n); //panggil fungsi hasil

Berikut Flowchartnya : <br/>
![alt text](https://raw.githubusercontent.com/arkyana/Praktikum9/master/soal6.3a/flow.png)

Berikut Hasil Screenshotnya : <br/>
![alt text](https://raw.githubusercontent.com/arkyana/Praktikum9/master/soal6.3a/ss.png)
