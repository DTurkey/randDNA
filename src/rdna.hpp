#include <string>
#include <random>
using namespace std;

string randDNA(int seed, string bases, int length)
{
	string base = "";
	mt19937 seq1(seed);
	uniform_int_distribution<int> dist(0, bases.size() -1);
	
	for (int i = 0; i < length; i++)
		{
			if (bases != "")
				{
					int random = dist(seq1);
					base += bases[random];
				}
		}
return base;			
}


