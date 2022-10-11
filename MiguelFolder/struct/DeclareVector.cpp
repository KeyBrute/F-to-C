#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct PizzaIngredients
{
    string pizzaName;
    string ingredients;
};

int main()
{

    /* Your code goes here */
    vector<PizzaIngredients> pizzasList(3);

    pizzasList.at(0).pizzaName = "Barbecue";
    pizzasList.at(1).pizzaName = "Carbonara";
    pizzasList.at(2).pizzaName = "Ham and Cheese";
    pizzasList.at(0).ingredients = "Beef, chicken, bacon, barbecue sauce";
    pizzasList.at(1).ingredients = "Mushrooms, onion, creamy sauce";
    pizzasList.at(2).ingredients = "Ham, cheese, bacon";

    cout << pizzasList.at(0).pizzaName << ": " << pizzasList.at(0).ingredients << endl;
    cout << pizzasList.at(1).pizzaName << ": " << pizzasList.at(1).ingredients << endl;
    cout << pizzasList.at(2).pizzaName << ": " << pizzasList.at(2).ingredients << endl;

    return 0;
}