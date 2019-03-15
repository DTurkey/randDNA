#include <iostream>
#include <string>
#include <vector>

using namespace std;

string randDNA(int seed, string bases, int n)
{
	for (int i = 0; i < seed; i++)
		for ( char ch: bases)
		{
			ch = rand()/n;
			cout<<ch;
		}
			
			

return " ";			
}


