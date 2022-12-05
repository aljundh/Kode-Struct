#include <iostream>
using namespace std;

struct mahasiswa{
	string nama;
	int nim,nilai;
};
int main(){
	
	mahasiswa data[5];
	
	for (int a = 0; a < 5; a++){
		
		cout<<"Mahasiswa "<<a+1<<endl;
		cout<<"Nama   : "; cin>>data[a].nama;
		cout<<"NIM    : "; cin>>data[a].nim;
		cout<<"Nilai  : "; cin>>data[a].nilai;
		cout<<endl;
	}
	int b;
	cout<<"Masukkan nomor urut mahasiswa : ";
	cin>>b;

	for (int c = 0; c < 5; c++){
		if (b == (c+1)){
		
		cout<<"Mahasiswa "<<c+1<<endl;
		cout<<"Nama   : "<<data[c].nama<<endl;
		cout<<"NIM    : "<<data[c].nim<<endl;
		cout<<"Nilai  : "<<data[c].nilai<<endl;
		}
		else if(b > 5){
			cout<<"Data tidak ditemukan";
			break;	
		}
		else if(b != (c+1)){
			continue;
		}
		else{
			cout<<"Data tidak ditemukan";
			
		}
	
	}
		
return 0;
}
