#include <iostream>
#include <string>

using namespace std;

string randDNA(int seed, string bases, int length)
{
	cout << " Please enter a number to seed the random number generator: " << endl;
	cin >> seed;
	
	cout << " Please enter 'C' for cytosine, 'G' for guanine, 'A' for adenine or 'T' for thymine, : " << endl;
	cin >>  bases;
	
	cout << " Please enter a number to indicate the length of sequence: " << endl;
	cin >> length;
	
	return bases;
}
