#include <iostream>
using namespace std;

int main(){
    
    char grade = 'A';

    switch(grade){
        case 'A':
        cout<<"You passed"<<endl;
        break;

        case 'B':
        cout<<"You did well"<<endl;
        break;

        case 'C':
        cout<<"You are average"<<endl;
        break;

        case 'D':
        cout<<"Poor performance"<<endl;
        break;

        case 'E':
        cout<<"You FAILED! Work hard!"<<endl;
        break;

        default:
        cout<<"Invalid Grade!"<<endl;
    }

    return 0;
}