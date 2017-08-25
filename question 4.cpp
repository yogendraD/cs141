#include <iostream>

using namespace std;

int main()
{   int l,b;
    cout<< "Please enter length"<< endl;
    cin>>l;
    cout<< "Please enter breadth"<< endl;
    cin>>b;

    int perimeter=2*(l+b);
    cout<< "The perimeter of the rectangle is="<<perimeter<<endl;
    return 0;
}
