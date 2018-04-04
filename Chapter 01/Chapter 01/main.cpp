#include <iostream>

using namespace std;

int main(){
	cout << "Size of data types..." << endl;
	cout << "The size of (char) is:: " << sizeof(char) << " bytes\n"
		<< "The size of (short) is:: " << sizeof(short) << " bytes\n"
		<< "The szie of (int) is:: " << sizeof(int) << " bytes\n"
		<< "The size of (long) is:: " << sizeof(long) << " bytes\n"
		<< "The size of (long long) is:: " << sizeof(long long) << " bytes\n"
		<< "The size of (float) is:: " << sizeof(float) << " bytes\n"
		<< "The size of (double) is:: " << sizeof(double) << " bytes\n"
		<< "The size of (long double) is:: " << sizeof(long double) << " bytes\n"
		<< "The size of (bool) is:: " << sizeof(bool) << " bytes." << endl;

	return 0;
}
