#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int jenis_instansi,jumlah_pengajar,jumlah_siswa;
	long biaya;
	
	//Judul Program
	cout<<"Menghitung Biaya Bantuan Kuota PJJ"<<endl;
	cout<<"----------------------------------"<<endl;
	
	cout<<"\nJenis Instansi Pendidikan"<<endl;
	cout<<"1. PAUD"<<endl;
	cout<<"2. Sekolah Dasar-Sekolah Menengah"<<endl;
	cout<<"3. Sekolah Tinggi"<<endl;
	
	//Input data
	cout<<"\nPilih Jenis Instansi :";
	cin>>jenis_instansi; 
		if(jenis_instansi==1) 
		{
			cout<<"\nJumlah Pengajar :";
			cin>>jumlah_pengajar;
			cout<<"Jumlah Siswa"<<setw(5)<<":";
			cin>>jumlah_siswa;
			
			//Rumus
			biaya=(jumlah_pengajar*42*6000)+(jumlah_siswa*20*6000);
			
			//Output
			cout<<"\nBiaya yang harus dikeluarkan :"<<"Rp"<<biaya;
		}
		
		else if(jenis_instansi==2)
		{
			cout<<"\nJumlah Pengajar :";
			cin>>jumlah_pengajar;
			cout<<"Jumlah Siswa"<<setw(5)<<":";
			cin>>jumlah_siswa;
			
			//Rumus
			biaya=(jumlah_pengajar*42*6000)+(jumlah_siswa*35*6000);
			
			//Output
			cout<<"\nBiaya yang harus dikeluarkan :"<<"Rp"<<biaya;
		}
		
		
		else if(jenis_instansi==3)
		{
			cout<<"\nJumlah Pengajar  :";
			cin>>jumlah_pengajar;
			cout<<"Jumlah Mahasiswa :";
			cin>>jumlah_siswa;
			
			//Rumus
			biaya=(jumlah_pengajar*50*6000)+(jumlah_siswa*50*6000);
			
			//Output
			cout<<"\nBiaya yang harus dikeluarkan :"<<"Rp"<<biaya;
		}
		
		//Output
		else
			cout<<"Tidak terkategori"<<endl;
			
		
}
