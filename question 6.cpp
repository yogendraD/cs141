#include <iostream>

using namespace std;

int main()
{   int r;
    cout<<"Please enter the radius of circle"<<endl;
    cin>>r;

    int diameter=2*r;
    float perimeter=2*(3.14*r);
    float area=3.14*r*r;

    cout<<"The diameter of circle is="<<diameter<<endl;
    cout<<"The perimeter of circle is="<<perimeter<<endl;
    cout<<"The area of circle is="<<area<<endl;

    return 0;
}
