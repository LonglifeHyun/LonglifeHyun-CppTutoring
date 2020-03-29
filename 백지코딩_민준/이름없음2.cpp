#include <iostream>
#include <fstream>

using namespace std;

int main (void)
{
	int a = 0;
	int sum = 0;
	
	ifstream is;
	is.open("input.txt");
	while( is >> a){
		sum += a;
	}
	is.close();
	
	ofstream os;
	os.open("output.txt");
	os << "sum :" << sum;
	os.close();
}
