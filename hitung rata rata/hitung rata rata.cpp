#include <iostream>
using namespace std;

int main()
{
    int nilaiMatematika, nilaiFisika, nRerata;
    string status;
     
    cout << "Masukan Nilai Matematika : ";
    cin >> nilaiMatematika;

    cout << "Masukan Nilai Fisika : ";
    cin >> nilaiFisika; 

    nRerata = (nilaiMatematika + nilaiFisika) / 2;

    if (nRerata > 60) {
        status = "Lulus";
    }
    else if (nilaiMatematika > 70) {
        status = "Lulus";
    }
    else {
        status = "tidak Lulus";
    }
    cout << "Nilai MTK : " << nilaiMatematika << endl;
    cout << "Nilai Fisika : " << nilaiFisika << endl;
    cout << "Rata-rata nilai : " << nRerata << endl;
    cout << "Statusnya adalah : " << status << endl;



}

