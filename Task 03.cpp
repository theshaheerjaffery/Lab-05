#include <iostream>
using namespace std;
int main() {

    int num;
    int mul;
    cout<<"Enter a number: ";
    cin>>num;
    
    for(int i=1; i<=10; i++){
        mul=num*i;
        cout<<num<<" x "<<i<<" = "<<mul<<endl;
    }
    
    return 0;
}