#include <iostream>
using namespace std;
int main() {

    int subs;
    int marks;
    int i;
    cout<<"Enter total number of subjects: ";
    cin>>subs;
    
    for(i=1; i<=subs; i++){
    cout<<"Enter marks of subject "<<i<<": ";
    cin>>marks;
    
    if(marks>=90 && marks<=100)
    {
        cout<<"Grade of Subject "<<i<<": A"<<endl;
    }
    else if(marks>=75 && marks<90)
    {
        cout<<"Grade of Subject "<<i<<": B"<<endl;
    }
    else if(marks>=50 && marks<75)
    {
        cout<<"Grade of Subject "<<i<<": C"<<endl;
    }
    else if(marks>=0 && marks<50)
    {
        cout<<"Grade of Subjet "<<i<<": F"<<endl;
    }
    else
    {
        cout<<"Invalid Number";
    }
    }
    return 0;
}