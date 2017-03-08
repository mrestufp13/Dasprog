#include <iostream>
using namespace std;

int main()
{
	int hari,bulan,tahun,sisa_hari,sisa_bulan;
	cout<<"PROGRAM KONVERSI HARI KE BULAN KE TAHUN"<<endl;
	cout<<"-------------------------------"<<endl;
	cout<<"inputkan banyaknya hari : ";
	cin>>hari;
	cout<<"-------------------------------"<<endl; 
	cout<<hari<<" hari"<<" = "<<hari/365<<" tahun"<<" = "<<hari/30<<" bulan "<<"lewat "<<hari%30<<" hari"<<endl;
	return 0;
}