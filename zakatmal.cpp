#include <iostream>
using namespace std;


	

void fmall()
{
	int tabungan, memas, surat_berharga, properti, kendaraan, koleksi_antik, stok_dagang, lainnya;
	int nisab = 58310000;

		cout << "=======================================================================" <<endl;
		cout << "=======================PROGRAM HITUNG ZAKAT MAAL=======================" << endl;
		cout << "=======================================================================" <<endl;
		cout << endl;
		cout << endl;
		cout << "Harta dalam bentuk Tabungan/ Giro/ Deposito : " ; cin >> tabungan;
		cout << "=======================================================================" <<endl;
		cout << "Harta dalam bentuk Logam Mulia (Emas/ Perak): " ; cin >> memas;
		cout << "=======================================================================" <<endl;
		cout << "Harta dalam bentuk Surat Beharga            : " ; cin >> surat_berharga;
		cout << "=======================================================================" <<endl;
		cout << "Harta dalam bentuk Properti                 : " ; cin >> properti;
		cout << "=======================================================================" <<endl;
		cout << "Harta dalam bentuk Kendaraan                : " ; cin >> kendaraan;
		cout << "=======================================================================" <<endl;
		cout << "Harta dalam bentuk Koleksi & Barang Antik   : " ; cin >> koleksi_antik;
		cout << "=======================================================================" <<endl;
		cout << "Harta dalam bentuk Stok Barang Dagangan     : " ; cin >> stok_dagang;
		cout << "=======================================================================" <<endl;
		cout << "Harta dalam bentuk Lainnya                  : " ; cin >> lainnya;
		cout << "\n=======================================================================\n" <<endl;

		int total_harta = (tabungan+memas+surat_berharga+properti+kendaraan+koleksi_antik+stok_dagang+lainnya);

		cout << "JUMLAH HARTA" <<endl;
		cout << "=>" << total_harta << endl <<endl;
		cout << "=======================================================================" <<endl <<endl;
		cout << "=>Nisab = " << nisab <<endl;
		cout << "Nisab Zakat Harta (Maal) adalah setara dengan 85 gr emas 24 karat." <<endl;
		cout << endl << endl;
		cout << "Harga Emas saat ini (dalam gram)" <<endl;
		cout << "=>686000" <<endl <<endl;

			if (total_harta > nisab)
			{
				cout <<endl;
				cout << "Apakah wajib membayar Zakat Maal ?" <<endl;
				cout << "=>Iya" <<endl <<endl;
				int zakat = 0.025 * total_harta;
				cout << "=======================================================================" <<endl <<endl;
				cout << "Jumlah yang Harus Dibayarkan per Tahun     : " << zakat <<endl;
				cout <<endl;
				cout << "Jumlah yang Harus Dibayarkan per Bulan     : " << zakat/12 <<endl;
				cout << "=======================================================================" <<endl <<endl;
			}
			else
			{
				cout <<endl;
				cout << "Apakah wajib membayar Zakat Maal ?" <<endl;
				cout << "=>Tidak" <<endl;
				cout << "=======================================================================" <<endl;
			}
}

void fpenghasilan()
{
		int gaji;
		int bonus;
		int pengeluaran;
		int jumlah;
		int zakat_penghasilan;
		int nishab = 5220000;

		cout << "=======================================================================" <<endl;
		cout << "====================PROGRAM HITUNG ZAKAT PENGHASILAN===================" << endl;
		cout << "=======================================================================" <<endl;
		cout<<endl;
		cout<<endl;
		cout << "Jumlah Penghasilan Perbulan                : "; cin >>gaji;
		cout << "=======================================================================" <<endl;
		cout << "Bonus Pendapatan dan Lain-lain (per Bulan) : "; cin >>bonus;
		cout << "=======================================================================" <<endl;
		cout << "Pengeluaran Kebutuhan Pokok per Bulan      : "; cin >>pengeluaran;
		cout << "\n=======================================================================\n" <<endl;


		jumlah = gaji+bonus-pengeluaran; 
		zakat_penghasilan =jumlah * 2.5/100;
				
		cout << "JUMLAH HARTA" <<endl;
		cout << "=>" << jumlah << endl <<endl;
		cout << "=======================================================================" <<endl <<endl;
		cout << "=>Nisab = " << nishab <<endl;
		cout << "Nisab Zakat Penghasilan adalah setara dengan 522 kg beras harga normal" <<endl;
		cout << endl << endl;
		cout << "Harga Beras saat ini (dalam Kilogram)" <<endl;
		cout << "=>10000" <<endl <<endl;		
	

	
		if(jumlah>=nishab){
			cout <<endl;
			cout << "Apakah wajib membayar Zakat Penghasilan ?" <<endl;
			cout << "=>Iya" <<endl <<endl;
			cout << "=======================================================================" <<endl <<endl;
			cout << "Jumlah yang Harus Dibayarkan per Tahun     : " << zakat_penghasilan <<endl;
			cout <<endl;
			cout << "Jumlah yang Harus Dibayarkan per Bulan     : " << zakat_penghasilan/12 <<endl;
			cout << "=======================================================================" <<endl <<endl;
		}else {
			cout <<endl;
			cout << "Apakah wajib membayar Zakat Maal ?" <<endl;
			cout << "=>Tidak" <<endl;
			cout << "=======================================================================" <<endl;
		}
}

int main()
{
	
	int pilihan;
	char opsiulang;
	bool input_valid = true;
	bool ulang_valid = true;

	start:
	cout << "===========PROGRAM HITUNG ZAKAT============" << endl;
	cout << "1. Zakat Maal" << endl;
	cout << "2. Zakat Penghasilan" << endl;	

do
{
	cout << "Pilih Zakat Yang Ingin Dihitung (1 / 2)\n";  ///Perulangan Memilih Jenis Zakat
	cout << "=> "; cin >> pilihan;
	if (pilihan == 1)
	{
		fmall();
	}

	else if (pilihan == 2)
	{
		fpenghasilan();
	}
	
	else
	{
	cout << "input yang benar!\n";
		input_valid = false;
	}

} while (input_valid == false);

while(ulang_valid){
	cout << "Ingin Menghitung Zakat Lagi ? (Y/N) : ";
	cin >> opsiulang;
	if (opsiulang == 'N' || opsiulang == 'n' )
	{
		break;
	}
	if (opsiulang == 'Y' || opsiulang == 'y')
	{
		goto start;
	}
	else if (opsiulang != 'N' && opsiulang != 'n' && opsiulang != 'Y' && opsiulang != 'y')
	{
		cout << "Input salah!" <<endl;
		ulang_valid = true;
	}
}

	return 0;

}
