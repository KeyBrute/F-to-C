#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct PizzaInfo
{
    string pizzaName;
    int numCalories;
};

int main()
{
    vector<PizzaInfo> pizzasList(2);

    pizzasList.at(0).pizzaName = "Barbecue";
    pizzasList.at(1).pizzaName = "Ham and Cheese";

    /* Your code goes here */
    cin >> pizzasList.at(0).numCalories;

    cin >> pizzasList.at(1).numCalories;

    cout << "A " << pizzasList.at(0).pizzaName << " slice contains " << pizzasList.at(0).numCalories << " calories." << endl;
    cout << "A " << pizzasList.at(1).pizzaName << " slice contains " << pizzasList.at(1).numCalories << " calories." << endl;

    return 0;
}