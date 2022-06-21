

#include <iostream>
using namespace std;

int main()
{
    float weight, height, bmi;
    cout << "Enter your weight (in KG): " << endl;
    cin >> weight;
    cout << "Enter your height (in METER): " << endl;
    cin >> height;
    bmi = weight / (height * height);

    if (bmi < 18.5)
    {
        cout << "You are Underweight. Eat regularly" << endl;
    }
    else if (bmi > 25)
    {
        cout << "Overweight. Please check your diet" << endl;
    }
    else
    {
        cout << "Normaweight. Perfect! Keep it up" << endl;
    }

    cout << "Your BMI is " << bmi << "." << endl;
    system("pause>0");
}
