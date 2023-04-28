#include <iostream>
using namespace std;

int main() {
		char gender;
		cout<<"Welcome to puberty advice app \n";
		cout<<"Enter choice g if you\'re a girl and b if you\'re a boy.\n";
		cout<<"Are you a boy or a girl: ";
		cin>>gender;
		if(gender == 'b' || gender == 'B'){
			cout<<"HeYo boy!\n";
			cout<<"Here a some advice for puberty for boys: \n";
			cout<<"-You may notice hair growing in new places, such as under your arms and on your face.\n";
			cout<<"-Your voice may start to crack and get deeper!\n";
			cout<<"-You may experience erections and wet dreams.\n";
		}
		else if(gender == 'g' || gender == 'G'){
			cout<<"HeYo girl!\n";
			cout<<"-Here a some advice for puberty for girls: \n";
			cout<<"-You may notice breast development and the onset of menstruation.\n";
			cout<<"-You may experince mood swing.\n";
			cout<<"-You start growing hair in new places.\n";
		}
		else{
			cout<<"Option not recognised"<<endl;
		}
		
		cout<<"\n\n---------------Remember to be hygienic.---------------"<<endl;
		return 0;
}


//Malaria detector
float temp;
	string HeadA,LA, BP;
	string result;
	cout<<"Enter your temperature:\t";
	cin >> temp;
	cout<<"Your temperature is: " << temp<<endl;
	cout<<"Do you have loss of appetite:\t";
	cin>>LA;
	cout<<"Do you have body pain:\t";
	cin >> BP;
	if(temp >= 34.5 && LA == "yes" && BP == "yes"){
		result = "You have malaria";
	}
	else{
		result = "You do not have malaria";
	}
	cout << result<<endl;
//	
//	






//fibannocci
//	int n = 10;
//	int first = -10; 
//	int second = 1;
//	int next;
//	
//	for(int i =0;i<n;i++){
//		if(i<=1){
//			next = i;
//		}
//		else{
//			next = first + second;
//			first = second;
//			second = next;
//		}
//		cout << next<<" ";
//	}
