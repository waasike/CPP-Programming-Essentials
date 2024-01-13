#include <iostream>
using namespace std;

int main()
{
    int grade;
    cout << "Enter your grade out of 10: ";
    cin >> grade;

    if (grade >= 5)
    {

        if (grade > 5)
            cout << "You are among the first half" << endl;

            if (grade > 8)
                cout << "You are a top student too" << endl;
            else
                cout << "Good try! Though you are not among the top students";
    }
    else{
        cout << "Pull up your socks! You are below average";
    }

    return 0;
}