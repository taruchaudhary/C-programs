#include <iostream>

using namespace std;

int main()
{
    int height=0;
    int weight=0;
    int BMI=0;
    cout<<"Enter the height: ";
    cin>>height;
    cout<<"Enter the weight: ";
    cin>>weight;
    BMI=(weight/703)/(height*height);
    return 0;
}
