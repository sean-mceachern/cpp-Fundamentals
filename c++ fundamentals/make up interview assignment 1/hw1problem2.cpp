#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;


struct User
{
	string username;
	float gpa;
	int age;

	User(){}
	User(string u, float g, int a){
		username = u;
		gpa = g;
		age = a;
	}
};

void addUser(vector<User> *users, string _username, float _gpa, int _age);
void printList(const vector <User> users);

int main(int argc, char *argv[])
{
	ifstream myfile(argv[1]);
    if(myfile.is_open())
    {
      string line;
      int counter= 0;
		while (getline(myfile,line))
		{
	        cout<<line<<endl;
	        stringstream ss;
	        ss<<line;
	        string item;

	        getline(ss, item, ',');
	        string username = item;

	        getline(ss, item, ',');
	        float gpa = stof(item);

	        getline(ss, item, ',');
	        int age = stoi(item);

			vector <User> users;
			addUser(&users, username, gpa, age);
			printList(users);
    	}
    }
    	

	/////////////////////////////////////////////
	// if(argc != 4)
	// {
	// 	cout << "command line error" << endl;
	// }
	// string username = string(argv[1]);
	// float gpa = stof(argv[2]);
	// int age = stoi(argv[3]);
	
	// vector <User> users;
	// addUser(&users, username, gpa, age);
	// printList(users);
	////////////////////////////////////////////
}

void addUser(vector<User> *users, string _username, float _gpa, int _age)
{	
	User U;
	U.username= _username;
	U.gpa= _gpa;
	U.age = _age;

	users->push_back(U); //change to a dot if there is any problems
}


void printList(const vector <User> users)
{
	for (int i = 0; i < users.size(); i++)
	{
		cout << "name: " << users[i].username << endl; 
		cout << "GPA: " << " [" << users[i].gpa << "] " << endl; 
		cout << "age: " << users[i].age << endl;
	}
}
