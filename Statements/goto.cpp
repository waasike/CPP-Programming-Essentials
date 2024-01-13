#include <iostream>
using namespace std;

int main()
{
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age < 18)
    {
        goto notEligible;
    }
    else if (age >= 18)
    {
        cout << "You are eligible to vote!" << endl;
        goto end;
    }

notEligible:
    cout << "You are not eligible to vote!" << endl;

end:
    return 0;
}












