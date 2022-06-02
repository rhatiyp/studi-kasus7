#include<iostream>
using namespace std;

class kasus {
public:
	int JmlHewan, pilih;
	string hewan[50], Hewandipilih;
	char karakter;
	
	void input(){
		cout<<"Masukan JUmlah Hewan :";
		cin>>JmlHewan;
		for(int i=0; i<JmlHewan; i++){
			cout<<"Iputkan Hewan Ke-"<<i+1<<" ";
			cin>>hewan[i];
		}
		cout<<endl;
		cout<<"Sebelum Diurutkan"<<endl;
		cout<<"Output"<<endl;
		for(int i=0; i<JmlHewan; i++){
			cout<<"Hewan Ke-"<<i+1<<" : "<<hewan[i]<<endl;
		}
		cout<<"========================================"<<endl;
	}
	void babblesort(){
		int i,j;
		string temp;
		for(int i=0; i<JmlHewan; i++){
			for(int j=0; j<JmlHewan-i-1; i++){
				if(hewan[j]>hewan[j+1]){
					temp = hewan[j];
					hewan[j]=hewan[j+1];
					hewan[j+1]=temp;
				}
			}
		}
		cout<<endl;
		cout<<"Setelah Diurutkan"<<endl;
		cout<<"Output"<<endl;
		for(int i=0; i<JmlHewan; i++){
			cout<<"Hewan Ke-"<<i+1<<" : "<<hewan[i]<<endl;
		}
		cout<<"========================================"<<endl;	
	}
void search(){
  cout<<" pilih hewan di bawah ini : "<<endl;
  cout<<"============== OUTPUT ============"<<endl;
	for(int i=0; i<JmlHewan; i++ ){
		cout<<"input hewan ke-"<<i+1<<" : "<<hewan[i]<<"   |"<<endl;
	}
		cout<<"==================================="<<endl<<endl;
		cout<<" pilih :";
		cin>>pilih;
		cout<<" hewan yang di pilih : "<<hewan[pilih-1]<<endl;
		Hewandipilih = hewan[pilih-1];
		cout<<"cari karakter :";
		cin>>karakter;
		for(int i = 0; i < Hewandipilih.size(); i++){
			if(Hewandipilih[i]==karakter){
		cout<<"karakter di temukan pada index ke-"<<i<<endl;
	}
		else{
			cout<<"karakter tidak di temukan"<<i<<endl;
		}
}    }
};

int main(){
  kasus x;
  x.input();
  x.babblesort();
  x.search();
	return 0;
}
