#include <iostream>

using namespace std;

int main() {
	string passCode = "1234567890";
	string userInput;
	cout<<"Welcome to Babcock's access control system.\nEnter passcode to view secret infos:\n";
	cin>>userInput;
	if(userInput == passCode){
		cout<<"You're currently viewing secret info on Babcock University's access control system.\n";
		
	}
	else{
		cout<<"Access Denied";
	}
	
	return 0;
}
