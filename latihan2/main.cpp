#include <iostream>

using namespace std;

int main()
{
    int i,n,max,min,nilai;

    cout<<"Mencetak Bilangan Terbesar & Terkecil dari 4 bil.yang diinputkan"<< endl;
    cout<<"Masukan Banyak Bilangan:";
    cin>> n;
    cout<<"Masukan Nilai ke =";
    cin>> nilai;

    max=nilai;
    min=nilai;

    for(i=2;i<=n;i++)
    {

        cout<<"Masukan Nilai Ke"<<i<<"=";
        cin>>nilai;

        if (nilai>max) max=nilai;
        if (nilai<min) min=nilai;
    }
    cout<<"Nilai Terbesar Adalah:" <<max<<"\nNilai Terkecil Adalah:"<<min;
    return 0;
}
