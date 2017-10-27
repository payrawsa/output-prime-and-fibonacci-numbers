#include <iostream>
using namespace std;
bool isPrime(int n);
int get_your_first_integer;
string two= "Enter a number: ";
string three= "You have entered :";
string four= "What do you want to print?";
string five= "    1. Prime numbers";
string six= "    2. Fibonacci numbers";
string seven= "Enter your option(1-2):";
string eight= "Enter a number: ";
int option;
string nine= "Printing the primes:";
string ten= "Printing the Fibonacci numbers:";

int main(){
cout << two<<endl ;
cin>> get_your_first_integer;
cout << three << get_your_first_integer<< endl;
cout << four <<endl<<five<<endl<<six<<endl<<seven<<endl<<eight<<endl;
cin>> option;

switch (option){

case 1: 
cout<< nine<<endl;

for (int i= 2; i<= get_your_first_integer; i++){
if(isPrime(i)){
cout<<i<<endl;}
}
break;
case 2:
cout<< ten<<endl;
int fibo1=1, fibo2=1, fibonacci=1;

for (int i=3; i<= get_your_first_integer; i++){
fibonacci= fibo1+fibo2;
cout<<fibonacci<<endl;
fibo1=fibo2;
fibo2=fibonacci;
}

break;
}
return 0;
}

bool isPrime (int n){

for (int i=2; i<n; i++){
if (n%i==0){
return false;}

}
return true;
}
