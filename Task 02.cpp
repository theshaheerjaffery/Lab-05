#include <iostream>
using namespace std;
int main() {

    int num;
    int sum;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"The Sum of first "<<num<<" numbers is following: "<<endl;
    for(int i=1; i<=num; i++){
        sum=sum+i;
        cout<<sum<<endl;
    }
    
    return 0;
}