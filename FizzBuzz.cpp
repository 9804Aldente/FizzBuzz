#include<iostream>
using namespace std;

enum object{
	FizzBuzz,
	Fizz,
	Buzz,
	Normal
};

object check(int check){
	if(check%3 == 0 && check%5 == 0) return FizzBuzz;
	else if(check%3 == 0) return Fizz;
	else if(check%5 == 0) return Buzz;
	else return Normal;
}

int main(){
	int i;
	object OBJ;
	cout << "----FizzBuzz----Please put any value." ;
	cin >> i;

	for(int x=1;x<i;x++){
		OBJ = check(x);
		switch(OBJ){
			case FizzBuzz: 
				cout << "FizzBuzz" << endl;break;
			case Fizz: 
				cout << "Fizz" << endl;break;
			case Buzz: 
				cout << "Buzz" << endl;break;
			default: 
				cout << x << endl;break;
		}
	}
	return 0;
}
