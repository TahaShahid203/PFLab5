#include <iostream>
using namespace std;


string isEvenish(int);

main()
{
  int number;
  string state;

  cout << "Enter 5-digit number: ";
  cin >> number;

  state = isEvenish(number);

  if (state == "Evenish")
  {

    cout << "Number is Evenish" << endl;
  }
  if (state == "Oddish")
  {
    cout << "Number is Oddish" << endl;

  }
}

string isEvenish(int number)
{
  int lastDigit = number%10;
  number = number/10;
  int fourthDigit = number%10;
  number = number/10;
  int thirdDigit = number%10;
  number = number/10;
  int secondDigit = number%10;
  int firstDigit = number/10;
  int sum = firstDigit + secondDigit + thirdDigit + fourthDigit + lastDigit;
  int remainder = sum%2;
  if (remainder == 0)
  {
    return "Evenish";
  }
  if (remainder != 0)
  {
    return "Oddish";
  }
}