#include <iostream>
using namespace std;
/*

1. writing smart and simple codes
1. Comment on ur codes
3. write reusable functions
4. Break down ur code into small chunks
5. Review codes before u start writing them
6. understand the semantics and syntax of any programming language you'll be learning
7. Learn to debug ur code
8. Learn to take a break


lets build a guessing game.
lets evolve the guessing game */

// Calculator example
// void calculator(){
//	int a, b;
//	char op;
//	cout<<"Enter first number: ";
//	cin>>a;
//	cout<<"Enter second number: ";
//	cin>>b;
//	cout<<"Enter operator: ";
//	cin>>op;
//	if(op == '+'){
//		cout<<a + b<<endl;
//	}
//	else if(op == '-'){
//		cout<<a - b<<endl;
//	}
//	else if(op == '*'){
//		cout<<a * b<<endl;
//	}
//	else{
//		cout<<"Operator not identified.\n";
//	}
//
// }
// int main() {
//	calculator();
//	return 0;
// }

// cat meow example1.

// int main(){
//	cout<<"meow meow meow \n";
// }
//

// cat meow example2.
// void meow(){
//	cout<<"meow meow meow \n";
//	cout<<"meow meow meow \n";
//	cout<<"meow meow meow \n";
// }
// int main(){
//	meow();
//	return 0;
// }

// cat meow example3.
// void meow(){
//	cout<<"meow meow meow \n";
// }
// int main(){
//	for(int i = 0; i<= 5; i++){
//		meow();
//	}
//	return 0;
// }

// Guessing game 1
// int main(){
//	int userGuess;
//	int answer =3;
//
//	cout<<"Enter a random number: ";
//	cin>>userGuess;
//	if(userGuess != answer){
//		cout<<"Try again! \nYou have one last chance."<<endl;
//			cout<<"Enter a random number: ";
//			cin>>userGuess;
//	}
//	else{
//		cout<<"You guessed right\n";
//	}
//
// }
//

// guessing game 2
//  void guessingGame(int userGuess,int answer){
//  	if(userGuess != answer){
//  		cout<<"Try again!"<<endl;
//  	}
//  	else{
//  		cout<<"You guessed right\n";
//  	}
//  }
//  int main() {
//      int userGuess;
//      do {
//          cout << "Enter guess a random number between 1 and 5: ";
//          cin >> userGuess;
//          guessingGame(userGuess, 3);
//      } while (userGuess != 3);
//      return 0;
//  }

// guessing game 3, evolve the code to let user know if the number is within or higher than the limit

int main()
{
    string soreThroat, cough, weak, chestPain, tasteLoss;
    cout << "Your response should be all lowerCase yes/no\n";
    cout << "Do you have sore throat: ";
    cin >> soreThroat;
    cout << "Do you have taste loss: ";
    cin >> tasteLoss;
    cout << "Do you have chest pain: ";
    cin >> chestPain;
    cout << "Do you feel weak: ";
    cin >> weak;
    cout << "Do you have cough: ";
    cin >> cough;
    if (cough == "yes" && soreThroat == "yes" && weak == "yes" && chestPain == "yes" && tasteLoss == "yes")
    {
        cout << "You have covid\n";
    }
}
