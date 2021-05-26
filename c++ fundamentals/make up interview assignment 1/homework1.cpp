#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int insertIntoSortedArray(int myArray[], int numEntries, int newValue);

int main(int argc, char *argv[])
{
	int counter=0;
	int myArray[100];
	ifstream myfile(argv[1]);

	if(myfile.is_open())
	{
		string line;
		// int counter = 0;
		int number = 0;
		int i = 0;
		while(getline(myfile, line))
		{
			//cout << line << endl;
			number = stoi(line);
			counter = insertIntoSortedArray(myArray, counter, number);
			for(int i =0; i < counter; i++)
			{
				cout << myArray[i] <<",";
			}
			cout<<endl;
			//i++;
			//counter ++;
			//cout<<"counter"<<counter<<endl;
		}
	// cout << "file is open" << endl;
	}
	else
	{
		cout << "file did not open" << endl;
	}
	return 0;
}
int insertIntoSortedArray(int myArray[], int numEntries, int newValue){
	double tmp;
	int i, j;
	for (i = 0; i < numEntries; i++){
		tmp= myArray[i];
		if (newValue < myArray[i]){
			break;
		}
	}
	for (j=numEntries; j >=i; j--){
		tmp = myArray[j+1];	
		myArray[j+1] = myArray[j];
		
	}

	myArray[i] = newValue;


return numEntries+1;

}



	



