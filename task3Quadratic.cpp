#include <iostream>
#include <cmath>

using namespace std;

float positiveQuadratic(int a, int b, int c);
float negativeQuadratic(int a, int b, int c);

main()
{
  int a;
  int b;
  int c;
  float positiveX;
  float negativeX;
  cout << "Enter first value: ";
  cin >> a;
  cout << "Enter second value: ";
  cin >> b;
  cout << "Enter third value: ";
  cin >> c;
  cout << "Your equation is this:" << endl;
  cout << a << "x2 + " << b << " x + " << c << endl;
  positiveX = positiveQuadratic(a, b, c);
  negativeX = negativeQuadratic(a, b, c);
  cout << "Your answers are: " << positiveX << " and " << negativeX << endl;


}

float positiveQuadratic(int a, int b, int c)
{
  float power = pow(b,2);
  float disSquare = power - 4*a*c;
  float discriminant = sqrt(disSquare);
  float numerator = discriminant - b;
  float denominator = 2*a;
  float answer = numerator/denominator;
  return answer;
}

float negativeQuadratic(int a, int b, int c)
{
  float power = pow(b,2);
  float disSquare = power - 4*a*c;
  float discriminant = sqrt(disSquare);
  float numerator = b + discriminant;
  numerator = 0 - numerator;
  float denominator = 2*a;
  float answer = numerator/denominator;
  return answer;
}


