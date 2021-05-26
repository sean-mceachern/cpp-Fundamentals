#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;

int insertIntoSortedArray(int unsortedArray[], int numEntries, int newValue);

int main(int argc, char *argv[])
{
	if(argc != 2)
	{
		cout << " invalid arguments" << endl;
		return -1;
	}
	
	// string fileName = argv[1];
	cout<< argv[1] << endl;
	
	// ifstream data(fileName);
	
	// data.open(fileName.c_str());
	// ifstream data("numbers.txt");
	
	// int unsortedArray[100];
	
	// if(data.is_open())
	// {
	// 	string line;
	// 	int numEntries = 0;
	// 	int i = 0;
	// 	while(getline(data, line))
	// 	{
	// 		int newValue = stoi(line);
	// 		numEntries = insertIntoSortedArray(unsortedArray, numEntries, newValue);
	// 		for (int i = 0; i < numEntries; i++)
	// 		{
	// 			cout << unsortedArray[i] << ",";
	// 		}
	// 		cout << endl;
			
	// 	}
	// }
	// else
	// {
	// 	cout << "no file found..." << endl;
	// }
	return 0;
}

int insertIntoSortedArray(int myArray[], int numEntries, int newValue){
	double temp;
	int i, j;
	for (i = 0; i < numEntries; i++)
	{
		temp= myArray[i];
		if (newValue < myArray[i])
		{
			break;
		}
	}
	for (j = numEntries; j >= i; j--)
	{
		temp = myArray[j+1];	
		myArray[j+1] = myArray[j];	
	}
	myArray[i] = newValue;
return numEntries+1;
}




