#include <iostream>
using namespace std;

int main()
{
	int detik,menit,jam,sisa_detik,sisa_menit;
	cout<<"PROGRAM KONVERSI DETIK KE MENIT KE JAM"<<endl;
	cout<<"-------------------------------"<<endl;
	cout<<"inputkan banyaknya detik : ";
	cin>>detik;
	cout<<"-------------------------------"<<endl;
	cout<<detik<<" detik"<<" = "<<detik/60<<" menit"<<" = "<<detik/3600<<" jam"<<endl;
	return 0;
}