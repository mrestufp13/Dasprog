#include <iostream>
using namespace std;
int main ()
{
	int nilai;
	cout<<"inputkan nilai";
	cin>>nilai
	if (nilai >90)
	{
		cout<<"nilai    grade nya A "<<endl;
	}
	else if (nilai 81>=90)
	{
		cout<<"nilai    grade nya B "<<endl;
	}
	else if (nilai 71>=80)
	{
		cout<<"nilai    grade nya C "<<endl;
	}
	else if (nilai 61>=70)
	{
		cout<<"nilai    grade nya D "<<endl;
	}
	else if (nilai <60)
	{
		cout<<"nilai    grade nya E"<<endl;
	}
	else
	{
		cout<<"nilai yg dimasukan hanya boleh dari 0-100"<<endl;
	}
	return 0
}