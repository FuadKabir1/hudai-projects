#include <bits/stdc++.h>
using namespace std;

double sq(double n){
    return n * n;
}

void solve(){
    int choice;
    cout << "1. Area of a Circle" << endl;
    cout << "2. Area of a Rectangle" << endl;
    cout << "3. Area of a Rhombus" << endl;
    cout << "4. Area of a Square" << endl;
    cout << "5. Area of a shape where all sides are same" << endl;
    cout << "choose a number according to your shape (1-5) :: ";
    cin >> choice;

    double radious , side1, side2, angles, sides, diameter1, diameter2, side_lenght, side_number, area;

    switch(choice){
        case 1:
            cout << "Enter the radious of the circle :: " ;
            cin >> radious;
            area = 3.14 * sq(radious);
            break;
        case 2:
            cout << "Enter 2 number (where first one is length & second one is width) :: ";
            cin >> side1 >> side2;
            area = side1 * side2;
            break;
        case 3:
            cout << "Enter the diameters of the rhombus (enter 2 numbers with a clear space) :: ";
            cin >> diameter1 >> diameter2;
            area = 0.5 * diameter1 * diameter2;
            break;
        case 4: 
            cout << "Enter the length of the square :: ";
            cin >> sides ;
            area = sq(sides);
            break;
        case 5:
            cout << "Enter the number of sides of the shape & the const length (put space between those) :: ";
            cin >> side_number >> side_lenght;
            angles  = (180.0 / (double)side_number) * (3.14159/180);
            area = (sq(side_lenght) * side_number/4) * (cos(angles) / sin(angles));
            break;
        default:
            area = 0.0;
            break;
    }
    cout << fixed << setprecision(3) << area << endl;
}


int main(){
    int t  = 1;
    // cout << "Enter the amount of your questions :: ";
    // cin >> t;
    while(t--){
        solve();
    }
}

