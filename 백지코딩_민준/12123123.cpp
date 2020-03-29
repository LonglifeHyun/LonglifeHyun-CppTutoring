#include <iostream>

using namespace std;

int main(void)
{
	int a = 99;
	char b[10] = "99";
	
	if(!(cin >> a)){
		cout << "First Input Failure" << endl;
		
	}
	
	if(!(cin >> b)){
		cout << "Secon Input Failure" << endl;
	}
	
	cout << "a :" << a << endl;
	cout << "b :" << b << endl;
}
