Menghitung Modus 

int x;  //tipe data x integer
void zmodus(float bil[], int n, float mds[])
Fungsi zmodus

    int total[100];
    int k=1;
    x=0;
=====================================================================================================

Inisialisasi tipe data varibel

    //urutkan dari yang terkecil ke yang terbesar
    for(int j=0; j<n; j++)
    {
        for(int i=(n-1); i>=0; i--)
        {
            if (bil[i]<bil[i-1]){  // percabangan mengurutkan bilangan
                int temp;           //tipe data temp integer
                temp=bil[i];        //temp sama dengan bil[i]
                bil[i]=bil[i-1];    // bil[i] sama dengan bil [indeks i dikurang 1]
                bil[i-1]=temp;      //bil [indeks i dikurang 1] sama dengan temp
            }
        }
    }


    cout<<"Hasil Pengurutan : ";    |
    for(int d=0; d<n; d++){         | Print hasil pengurutan dari yang terkecil ke yang terbesar
    cout<< " "<<bil[d];             |
    }cout<<endl;                    |

=====================================================================================================

    //hitung berapa kali muncul tiap angka
    for(int j=0; j<n; j++)
    {
        total[j]=0;
        for(int i=0; i<n; i++)
        {
            if (bil[j]==bil[i]){    percabangan jika bil[j] sama dengan bil[i]
                total[j]++;         maka total[j]++
            }
        }
    }

=====================================================================================================

    //menentukan nilai yg sering muncul
    for(int j=0; j<n; j++){
        if (total[j]>k){        jika total[j] lebih dari k
            k=total[j];         maka k sama dengan total[j]
        }
    }

=====================================================================================================
    //modus lebih dari satu
    for(int j=0; j<n; j++)
    {
        if(x==0)                        jika x sama dengan 0
            mds[x]=0;                   maka mds[x]=0
        else                            selain itu
            mds[x]=mds[x-1];            mds[x] sama dengan mds[x-1]

        if(total[j]==k)                 jika total[j]sama dengan k
            {
            if(bil[j]!=mds[x])          dan jika bil[j] tidak sama dengan mds[x]
            {
            mds[x]=bil[j];              maka mds[x]=bil[j]
            x++;                        x++
            }
        }
    }

=====================================================================================================

    //jika semua angka muncul sama banyak
    int z=0;                            tipe data z adalah integer
    for(int j=0; j<n; j++)
    {
        if(total[j]==k){                jika total[j] sama dengan k
            z++;                        maka z++
        }
    }
    if(z==n){                           jika z sama dengan n
        x=0;                            maka x sama dengan 0
    }
}
====================================================================================================

int main()
Main Program
    int n;              tipe data n integer
    float bil[100];     tipe data bil indeks 100 float
    float mds[100];     tipe data mds indeks 100 float

    cout<< "Input Banyaknya Bilangan : ";cin>>n;
    Tampilkan di layar
    cin>>n; //Input banyaknya bilangan variabel n

    for(int j=0; j<n; j++){     //perulangan jika j lebih kecil dari n
        cout<< "Input Bilangan ke "<<(j+1)<<" : ";      //tampilan di layar
        cin>>bil[j];            // input array bil[j]
    }
    cout<<endl;

    zmodus(bil,n,mds);  //panggil fungsi zmodus


    if(x==0)                                    jika x sama dengan 0
        cout<<"Tidak Ada Modus ! "<<endl;       maka print "Tidak Ada Modus !"
    else
    {
        cout<<"Modus : ";                       selain itu
        for(int j=0; j<x; j++)                  perulangan jika j lebih kecil dari x
        {
        cout<<mds[j]<<" ";                      panggil arra mds[j]
        }
    }

Berikut Flowchartnya : <br/>
![alt text](https://raw.githubusercontent.com/arkyana/Praktikum9/master/soal6.3b/flow.png) <br/>
![alt text](https://raw.githubusercontent.com/arkyana/Praktikum9/master/soal6.3b/flow1.png) <br/>
![alt text](https://raw.githubusercontent.com/arkyana/Praktikum9/master/soal6.3b/flow2.png) <br/>
![alt text](https://raw.githubusercontent.com/arkyana/Praktikum9/master/soal6.3b/flow3.png) <br/>

Berikut Hasil Screenshotnya : <br/>
![alt text](https://raw.githubusercontent.com/arkyana/Praktikum9/master/soal6.3b/ss.png)
