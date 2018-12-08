#include <iostream>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int harga[100],jumlah[100],sub=0;
string nama[1000];
long nota,trans,bayar,total[100],diskon,ppn,grand,kembalian;



int main (void) {
	cout << "=======================================================================" << endl;
	cout << "                             Expensive Restaurant                           " << endl;
	cout << "=======================================================================" << endl;

        cout<<"Menu :                                      Harga :"<<endl;
        cout<<"1.PAKET(1) AYAM + NASI + AIR MINERAL        Rp. 19.000"<<endl;
        cout<<"2.PAKET(2) NASI GORENG + ES TEH MANIS       Rp. 18.000"<<endl;
        cout<<"3.PAKET(3) MIE AYAM PANGSIT + ES JERUK      Rp. 19.000"<<endl;
        cout<<"4.PAKET(4) PECEL AYAM + ES JERUK            Rp. 19.000"<<endl;
        cout<<"5.OMELET                                    Rp. 10.000"<<endl;
        cout<<"6.NasGor                                    Rp. 12.000"<<endl;
        cout<<"7.RAMEN                                     Rp. 12.000"<<endl;
        cout<<"8.FRIED CHICKEN                             Rp. 12.000"<<endl;
        cout<<"9.ICE TEA                                   Rp. 6.000"<<endl;
        cout<<"10.ORANGE JUICE                             Rp. 7.000"<<endl;
        cout<<"11.WATER                                    Rp. 5.000"<<endl;
        cout<<'\n'<<"Ketikan pesanan : \n";


	cout << "No.Nota : ";
	cin >> nota;
	cout << "Jumlah Transaksi : ";
	cin >> trans;
	cout << endl;

	 for (int c=1;c<=trans;c++) {
		cout << "Transaksi Ke - " << c << endl;
		cout << "Nama Makanan : ";
		cin >> nama[c];
		cout << "Harga Satuan : ";
		cin >> harga[c];
		cout << "Jumlah Beli : ";
		cin >> jumlah[c];
		cout << endl;
		total[c] = harga[c] * jumlah[c];
	 }
	 for (int d=1;d<=trans;d++) {sub = sub + total[d];}
	 if (sub > 180000) {diskon = sub * 0.15;}
     else if (sub>70000){diskon = sub * 0.05;}
     else {diskon = 0;}
	 ppn = 0.1 * sub;
	 grand = sub - diskon + ppn;

    system ("cls");
	cout << "                    Expensive Restaurant                  " << endl;
	cout << "                Holliwood ,Bouluvard                      " << endl;
	cout << "Nama Makanan                 @Harga               Jml Beli" << endl;
	cout << "======================================================" << endl;
	for (int m=1;m<=trans;m++) {
		cout << nama[m];
		cout << "                     " << harga[m];
		cout << "                     " << jumlah[m] << endl;
	}
	cout << "======================================================         " << endl;
	cout << "SubTotal    : Rp. "<< sub <<  endl;
    cout << "Diskon      : Rp. "<< diskon << endl;
    cout << "PPN 10%     : Rp. "<< ppn << endl;
    cout << "Grand Total : Rp. "<< grand << endl;
    cout << "Bayar       : Rp. "; cin >> bayar;
	kembalian = bayar - grand;
    cout << "Kembalian   : Rp. "<< kembalian << endl;
	cout << endl;
    cout << "Terimakasih Atas ";
    cout << "Kunjungan Anda !!!" << endl;
	cout << endl;
    system ("pause");
	return (0);
}

