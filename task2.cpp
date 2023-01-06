#include <iostream>
using namespace std;

string isCapital(char);

main()
{
    char letter;
    cout << "Enter character A in any case: ";
    cin >> letter;
    string msg = isCapital(letter);
    cout << msg << endl;
}

string isCapital(char letter)
{
    if(letter == 'A')
    {
        string msg = "You have entered A in capital case";
        return msg;
    }
    if(letter == 'a')
    {
        string msg = "You have entered A in small case";
        return msg;
    }
}