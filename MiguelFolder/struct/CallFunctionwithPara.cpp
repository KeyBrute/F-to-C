#include <iostream>
#include <string>
using namespace std;

struct ProductInfo
{
    string itemName;
    int itemQty;
};

ProductInfo AddToStock(ProductInfo productToStock, int increaseValue)
{
    productToStock.itemQty = productToStock.itemQty + increaseValue;

    return productToStock;
}

int main()
{
    ProductInfo computerInfo;
    int addStock;

    cin >> computerInfo.itemName >> computerInfo.itemQty;
    cin >> addStock;

    /* Your code goes here */
    computerInfo = AddToStock(computerInfo, addStock);

    cout << "Name: " << computerInfo.itemName << ", stock: " << computerInfo.itemQty << endl;

    return 0;
}