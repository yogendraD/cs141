#include <iostream>

using namespace std;

int main()
{   int x,y;
    int sum;
    int substract;
    int multiply;
    double divide;

    cout << "Please enter the 1st number" << endl;
    cin>>x;
    cout<< "Please enter the 2nd number" << endl;
    cin>>y;

    sum=x+y;
    substract=x-y;
    multiply=x*y;
    divide=double(x/y);

    cout<< "The sum is = " <<sum<< endl;
    cout<< "The substraction is= "<<substract<<endl;
    cout <<"The product is ="<<multiply<<endl;
    cout<<"The division is="<<divide<<endl;
    return 0;
}
