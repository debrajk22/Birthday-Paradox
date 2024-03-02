#include <iostream>
using namespace std;

double getProbability(int k)
{
    double p = 1;
    for (int i = 0; i < k; i++)
    {
        p *= (365 - i) / 365.0;
    }
    return 1 - p;
}

int main()
{
    double p;
    cout<<"Enter the probability of having two birthdays on the same day: ";
    cin>>p;
    if (p < 0 || p > 1)
    {
        cout<<"Invalid probability value"<<endl;
        return 0;
    }
    int k = 2;
    while (getProbability(k) < p)
    {
        k++;
    }
    cout<<"The minimum number of people required to have a probability of "<<p<<" of having two birthdays on the same day is: "<<k<<endl;
    
    freopen("birthday_paradox_output.txt", "a", stdout);   // append the output to birthday_paradox_output.txt
    cout<<"The minimum number of people required to have a probability of "<<p<<" of having two birthdays on the same day is: "<<k<<endl;
    return 0;
}