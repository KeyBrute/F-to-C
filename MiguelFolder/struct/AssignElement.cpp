#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct PizzaInfo
{
    string pizzaName;
    int caloriesInSlice;
};

int main()
{
    vector<PizzaInfo> pizzasInStore(2);

    cin >> pizzasInStore.at(0).pizzaName;
    cin >> pizzasInStore.at(0).caloriesInSlice;

    cin >> pizzasInStore.at(1).pizzaName;
    cin >> pizzasInStore.at(1).caloriesInSlice;

    pizzasInStore[0].caloriesInSlice = pizzasInStore[1].caloriesInSlice;

    cout << "A " << pizzasInStore.at(0).pizzaName << " slice contains " << pizzasInStore[0].caloriesInSlice << " calories." << endl;
    cout << "A " << pizzasInStore.at(1).pizzaName << " slice contains " << pizzasInStore[1].caloriesInSlice << " calories." << endl;
    return 0;
}