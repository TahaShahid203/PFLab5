#include <iostream>
#include <cmath>
using namespace std;


float calculateDistance(float distance, float degrees);

main()
{
  float distance;
  float degrees;
  cout << "Enter distance from tree: ";
  cin >> distance;
  cout << "Enter angle of elevation in degrees: ";
  cin >> degrees;
  float height = calculateDistance(distance, degrees);
  cout << "Height of the tree: " << height << endl;




}

float calculateDistance(float distance, float degrees)
{
  float radian = 57.2958;
  float radians = degrees/radian;
  float ratio = tan(radians);
  float height = distance*ratio;
  return height;



}