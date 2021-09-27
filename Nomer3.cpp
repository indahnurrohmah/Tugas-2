#include<iostream>
using namespace std;
int main()
{
	bool jawaban,jawaban2,jawaban3;
	
	//Judul Program
	cout<<"Program Menentukan Jenis Zona Covid-19"<<endl;
	cout<<"--------------------------------------"<<endl;
	
	//Identifikasi Wilayah
	cout<<"\nJawablah pertanyaan berikut dengan angka 1 dan 0:"<<endl;
	cout<<"\nAngka 0 jika tidak ada."<<endl;
	cout<<"Angka 1 jika ada."<<endl;
	
	cout<<"\n1. Apakah terdapat ODP?"<<endl;
	cout<<"Jawab:"; cin>>jawaban;
	
	if(jawaban==1)
		{cout<<"2. Apakah terdapat kasus positif Covid-19"
			 <<" dan terjadi peningkatan kasus positif?"<<endl;
		 cout<<"Jawab:"; cin>>jawaban2;
		 
		 if(jawaban2==1){
			cout<<"3. Apakah terjadi kasus kematian karena Covid-19?"<<endl;
			cout<<"Jawab:"; cin>>jawaban3;
			
			if(jawaban3==1)
				cout<<"\nZona tersebut masuk dalam Zona Hitam.";	
			else if(jawaban3==0)
				cout<<"\nZona tersebut masuk dalam Zona Merah.";
			}	
				
		  else if(jawaban2==0)
			cout<<"\nZona tersebut masuk dalam Zona Oranye.";
		}
	
	
	else if(jawaban==0)
		cout<<"\nWilayah tersebut masuk dalam Zona Hijau.";
		
	else
		cout<<"Tidak Terkategori";
		
}
