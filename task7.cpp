#include <iostream>
#include <cmath>
using namespace std;

main()
{
    float volume, pipeRate1, pipeRate2, timeInHours, extentFilled, pipeContribution1, pipeContribution2, overflow;
    float extentFilledPercentage, pipeContributionPercentage1, pipeContributionPercentage2;

    cout << "Enter volume of the pool: ";
    cin >> volume;
    cout << "Enter rate per hour of first pipe: ";
    cin >> pipeRate1;
    cout << "Enter rate per hour of second pipe: ";
    cin >> pipeRate2;
    cout << "Enter time in hours for which the water was running: ";
    cin >> timeInHours;

    pipeContribution1 = pipeRate1 * timeInHours;
    pipeContribution2 = pipeRate2 * timeInHours;
    extentFilled = pipeContribution1 + pipeContribution2;

    if (extentFilled > volume)
    {
        overflow = extentFilled - volume;
        cout << "For "<< timeInHours << " hours, the pool overflows with " << overflow << " litres." << endl;
    }
    if (extentFilled < volume)
    {
        extentFilledPercentage = (extentFilled/volume)*100;
        pipeContributionPercentage1 = (pipeContribution1/extentFilled) * 100;
        pipeContributionPercentage2 = (pipeContribution2/extentFilled)*100;
        extentFilledPercentage = floor(extentFilledPercentage);
        pipeContributionPercentage1 = floor(pipeContributionPercentage1);
        pipeContributionPercentage2 = floor(pipeContributionPercentage2);
        cout << "The pool is "<< extentFilledPercentage<< " full. Pipe1: "<< pipeContributionPercentage1 <<" Pipe2: " << pipeContributionPercentage2 << endl;
    }
}