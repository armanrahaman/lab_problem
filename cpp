///swapping two numbers..


#include<iostream>

using namespace std;


int main()
{


    int a, b, swap;
    cout << "Swapping two numbers" <<endl;
    cout << "Enter the number of 'a' "<<endl;
    cin>> a;

    cout << "Enter the number of 'b' "<<endl;
    cin>>b;


    swap = a;
    a = b;
    b = swap;

    cout<< "First number is : "<<a<<"\n"<<"Second number is : "<<b;

    return 0;
}
