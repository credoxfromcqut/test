#include <iostream>
using namespace std;
int plusi(int a, int b)
{
	for(int i = 0; i < 10; i++)
	{
		cout << "this is the " << i  << "th hello world:" << endl;
		cout << "hello world" << endl;
	}	
	cout << a << b << endl;
}
int main()
{
	cout << "hello world" << endl;
	plusi(123, 678);
	return 0;
}
