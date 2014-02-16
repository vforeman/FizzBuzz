 // FizzBuzz in c++
 // author:  Victor Foreman
 // email: vforeman@scs.howard.edu

#include <iostream>
using namespace std;

int main(){
 for(int n=1;n<=100;++n){
  if((!(n%3))&&(!(n%5)))
   cout<<"FizzBuzz"<<endl;
  else if(!(n%3))
   cout<<"Fizz"<<endl;
  else if(!(n%5))
   cout<<"Buzz"<<endl;
  else
   cout<<n<<endl;
 }
}
