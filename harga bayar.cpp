#include <iostream>
using namespace std;
int main ()
{
	int harga_awal,harga_bayar,diskon;
	cout<<"inputkan Harga Sepatu ";
	cin>>harga_awal;
	
	if(harga_awal>1000000)
	{
		diskon=10/100*harga_awal;
	}
	else
	{
		diskon=0;
	}
	harga_bayar=harga_awal-diskon;
	cout<<"Harga Bayar = "harga_bayar;
	return 0;
}