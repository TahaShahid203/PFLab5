#include <iostream>
using namespace std;

bool isSymmetric(int);

main()
{
  bool state;
  int number;

  cout << "Enter a 3-digit number: ";
  cin >> number;
  state = isSymmetric(number);
  if (state == true)
  {
    cout << "Your number is symmetric. " << endl;
  }
  if (state == false)
  {
    cout << "Your number is not symmetric. " << endl;
  }

}


bool isSymmetric(int number)
{
  int lastDigit = number%10;
  int firstDigit = number/100;
  if (firstDigit == lastDigit)
  {
    return true;
  }
  if (firstDigit != lastDigit)
  {
    return false;
  }

}