#include <iostream>

using namespace std;

int main()
{
    float bmi,w,h;
    cout<<"please enter your weight in pounds: ";
    cin>>w;
    cout<<"please enter your height in inches: ";
    cin>>h;
    bmi=(w*703)/(h*h);
    cout<<"your BMI is:"<<bmi<<endl;

    if (bmi>25)
        cout<<"overweight";
    else if (bmi<25&&bmi>18.5)
        cout<<"optimal";
    else
        cout<<"underweight";
    return 0;
}
