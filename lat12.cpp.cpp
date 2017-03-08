#include <iostream> //penyedia input output
using namespace std;
int main () //perintah utama
{ //mengawali program
	float C,F; //variabel buat C,F
	cout<<"----------------------------"<<endl; //menampilkan ----------------------------
	cout<<"program farenheit ke celsius"<<endl; //menampilkan program farenheit ke celsius
	cout<<"----------------------------"<<endl; //menampilkan ----------------------------
	cout<<"Masukan farenheit:"; 
	cin>>F;
	C=(F-32)/1.8;
	cout<<"celsius="<<C<<endl;
	return 0;
}