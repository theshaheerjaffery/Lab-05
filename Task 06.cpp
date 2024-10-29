#include <iostream>
using namespace std;
int main() {

    int num;
    cout<<"Enter upto how many numbers you want cube: ";
    cin>>num;

    for(int i=1; i<=num; i++)
    {
        cout<<"The cube of "<<i<<" is: "<<i*i*i<<endl;
    }
    
    return 0;
}