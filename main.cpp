#include <iostream>
using namespace std;
int main() {
    double r1, r2, a1, a2, c1, c2;

    cout << "ora dammi la lunghezza dell primo raggio " << endl;
    cin >> r1;
    cout << "ora dammi la lunghezza dell secondo raggio" << endl;
    cin >> r2;
    a1 = area(r1);
    a2 = area(r2);
    c1 = circonferenza(r1);
    c2 = circonferenza(r2);
    cout << "larea del primo cerchio è " << a1 << " e la circonferenza è " << c1 << endl;
    cout << "larea del primo cerchio è " << a2 << " e la circonferenza è " << c2 << endl;
    return 0;
}

double area(double a1) {
    double a;

    area = 3.14 * (n1 * n1);
    
    return a;
}

double circonferenza(double b) {
    double c;

    c = 2 * 3.14 * b;
    
    return c;
}