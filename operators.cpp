#include <bits/stdc++>

using namespace std;

// Complete the solve function below.
double meal_cost;
int tip_percent ;
int tax_percent;

void solve(double meal_cost, int tip_percent, int tax_percent) {


};

int main()
    double meal_cost;
    cin >> meal_cost;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tip_percent;
    cin >> tip_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tax_percent;
    cin >> tax_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    solve(meal_cost, tip_percent, tax_percent);
    meal_cost = meal_cost + (meal_cost*(tip_percent))/100 + (meal_cost*(tax_percent))/100;
cout<<round(meal_cost);
    
    return 0;
}
