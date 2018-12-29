#include <iostream>
#include <string.h>

using namespace std;


class A{

private:
	int i;
	int j;
	
public:
	A(int _i=0, int _j=0) 
	{
		cout << "A(" << _i << " , " << _j << ")" << endl;
 		i=_i;
		j=_j;
	 }	

	void Print() { cout << i << " " << j << endl; }	
			
};

int main()
{
	int i=7,j=55;

	cout << endl << "A a;" << endl;
	A a1;
	a1.Print();

	cout << endl << "A a = (i , j);" << endl;
	A a2 = (i , j);
	a2.Print();

	cout << endl << "A a = A(i , j);" << endl;
	A a3 = A(i , j);
	a3.Print();

	cout << endl  << "A a4(i , j);" << endl;
	A a4(i , j);
	a4.Print();
}