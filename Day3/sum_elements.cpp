#include <iostream>
#include <pthread.h>

using namespace std;



int main(int argc, char const *argv[])
{
	int i;
	int iArray[300];
	int iResult = 0;

	for(i = 0; i < 300; i++)
	{
		iArray[i] = i+1;
	}

	for(i = 0; i < 300; i++)
	{
		iResult += iArray[i];
	}

	cout << "The sum of all elements in iArray is: " << iResult << endl;

	return 0;
}