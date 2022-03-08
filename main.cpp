#include <iostream>

using namespace std;

class Product{
public:
    double price;
    double quantity;
    string description;

};

int main() {
    Product xbox;
    xbox.description = "Gaming console from microsoft";
    xbox.price = 500;
    xbox.quantity = 0;

    Product iphone;
    iphone.price = 750;
    iphone.description = "smartphone";
    iphone.quantity = 400;

    Product nintendoSwitch;
    nintendoSwitch.price = 400;
    nintendoSwitch.quantity = 5;
    nintendoSwitch.description = "Gaming console from nintendo";

    Product products[3];

    products[0] = xbox;
    products[1] = iphone;
    products[2] = nintendoSwitch;

    cout << products[1].description << endl;


    return 0;
}
