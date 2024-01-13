#include <iostream>
using namespace std;

int main(){
    
    int num1 = 5; 

    int *pnum1 = &num1;

    cout<<pnum1<<endl;

    cout<<&num1<<endl;

    cout<<*&num1<<endl;
}