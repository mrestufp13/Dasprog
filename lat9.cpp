#include <iostream>
using namespace std;

int main()
{
	int menit,jam,sisa_menit;
	cout<<"PROGRAM KONVERSI MENIT KE JAM"<<endl;
	cout<<"-------------------------------"<<endl;
	cout<<"inputkan banyaknya menit : ";
	cin>>menit;
	cout<<"-------------------------------"<<endl;
	cout<<menit<<" menit"<<" = "<<menit/60<<" jam lewat "<<menit%60<<" menit"<<endl;
	return 0;
}