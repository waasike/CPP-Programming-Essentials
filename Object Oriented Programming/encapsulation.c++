#include <iostream>
using namespace std;

class Grade {
private:
    double cat;
    double final;

public:
    void setcat(double ca) {
        cat = ca;
    }

    void setfinal(double fin) {
        final = fin;
    }

    double getGrade() {
        return final + cat;
    }
};

int main() {
    Grade gra;
    gra.setcat(5.0);
    rect.sefinal(3.0);

    double area = rect.getArea();
    cout << "Area of the rectangle: " << area << endl;

    return 0;
}
