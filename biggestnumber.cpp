//Author:
#include<iostream>

int main()
{
int num1;
int num2;
int largest; 
 

  std::cout<<"Please enter a whole number:\n";
  std::cin>>num1;
 //get first input using std::cin>>

  std::cout<<"Please enter another whole number:\n";
  std::cin>>num2;
  //get second input using std::cin>> again with a second variable

  //determine if first or second is bigger and store that in a third variable
  if (num1>num2)

  {
  largest = num1;
  } 
  else
  {
  largest = num2;
  }

  std::cout<<"Of those two numbers, the biggest is:"<<largest;
  //print out the variable representing the biggest number

  std::cout<<std::endl<<"Thank you for playing:\n";
  
  return 0;
}
