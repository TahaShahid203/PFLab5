#include <iostream>
using namespace std;


main ()
{
    int number, firstDigit, lastDigit;
    string firstLetter, lastLetter;

    cout << "Enter a two digit number except [11,19]: ";
    cin >> number;


    lastDigit = number % 10;
    firstDigit = number/10;
    if (lastDigit == 0)
    {
        lastLetter = "";
    }
    if (lastDigit == 1)
    {
        lastLetter = "one";
    }
    if (lastDigit == 2)
    {
        lastLetter = "two";
    }
    if (lastDigit == 3)
    {
        lastLetter = "three";
    }
    if (lastDigit == 4)
    {
        lastLetter = "four";
    }
    if (lastDigit == 5)
    {
        lastLetter = "five";
    }
    if (lastDigit == 6)
    {
        lastLetter = "six";
    }
    if (lastDigit == 7)
    {
        lastLetter = "seven";
    }
    if (lastDigit == 8)
    {
        lastLetter = "eight";
    }
    if (lastDigit == 9)
    {
        lastLetter = "nine";
    }


    if (firstDigit == 0)
    {
        firstLetter = "";
    }
    if (firstDigit == 2)
    {
        firstLetter = "twenty";
    }
    if (firstDigit == 3)
    {
        firstLetter = "thirty";
    }
    if (firstDigit == 4)
    {
        firstLetter = "forty";
    }
    if (firstDigit == 5)
    {
        firstLetter = "fifty";
    }
    if (firstDigit == 6)
    {
        firstLetter = "sixty";
    }
    if (firstDigit == 7)
    {
        firstLetter = "seventy";
    }
    if (firstDigit == 8)
    {
        firstLetter = "eighty";
    }
    if (firstDigit == 9)
    {
        firstLetter = "ninety";
    }

    cout << firstLetter << " " << lastLetter << endl;
}