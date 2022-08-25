#include <iostream>
using namespace std;

class cashRegister
{
public:
    int getCurrentBalance() const;
    // Function to show the current amount in the cash register.
    // Postcondition: The value of cashOnHand is returned.
    void acceptAmount(int amountIn);
    // Function to receive the amount deposited by
    // the customer and update the amount in the register.
    // Postcondition: cashOnHand = cashOnHand + amountIn;
    cashRegister();
    // Default constructor
    // Sets the cash in the register to 500 cents.
    // Postcondition: cashOnHand = 500.
    cashRegister(int cashIn);
    // Constructor with a parameter.
    // Sets the cash in the register to a specific amount.
    // Postcondition: cashOnHand = cashIn;
private:
    int cashOnHand; // variable to store the cash in the register
};

int cashRegister::getCurrentBalance() const
{
    return cashOnHand;
}
void cashRegister::acceptAmount(int amountIn)
{
    cashOnHand = amountIn + cashOnHand;
}
cashRegister::cashRegister()
{
    cashOnHand = 500;
}
cashRegister::cashRegister(int cashIn)
{
    if (cashIn >= 0)
        cashOnHand = cashIn;
    else
        cashOnHand = 500;
}

class dispenserType
{
public:
    int getNoOfItems() const;
    // Function to show the number of items in the machine.
    // Postcondition: The value of numberOfItems is returned.
    int getCost() const;
    // Function to show the cost of the item.
    // Postcondition: The value of cost is returned.
    void makeSale();
    // Function to reduce the number of items by 1.
    // Postcondition: numberOfItems--;
    dispenserType();
    // Default constructor
    // Sets the cost and number of items in the dispenser to 50.
    // Postcondition: numberOfItems = 50; cost = 50;
    dispenserType(int setNoOfItems, int setCost);
    // Constructor with parameters
    // Sets the cost and number of items in the dispenser
    // to the values specified by the user.
    // Postcondition: numberOfItems = setNoOfItems;
    //  cost = setCost;
private:
    int numberOfItems; // variable to store the number of
    // items in the dispenser
    int cost; // variable to store the cost of an item
};

int dispenserType::getNoOfItems() const
{
    return numberOfItems;
}
int dispenserType::getCost() const
{
    return cost;
}
void dispenserType::makeSale()
{
    numberOfItems--;
}
dispenserType::dispenserType()
{
    numberOfItems = 50;
    cost = 50;
}
dispenserType::dispenserType(int setNoOfItems, int setCost)
{
    if (setNoOfItems >= 0)
        numberOfItems = setNoOfItems;
    else
        numberOfItems = 50;
    if (setCost >= 0)
        cost = setCost;
    else
        cost = 50;
}

void showSelection()
{
    cout << "*** Welcome to Shelly's Fruit Juice Shop ***" << endl;
    cout << "To select an item, enter " << endl;
    cout << "1 for apple juice" << endl;
    cout << "2 for orange juice" << endl;
    cout << "3 for mango lassi" << endl;
    cout << "4 for fruit punch" << endl;
    cout << "9 to exit" << endl;
} // end showSelection

void sellProduct(dispenserType &product, cashRegister &pCounter)
{
    int amount;                     // variable to hold the amount entered
    int amount2;                    // variable to hold the extra amount needed
    if (product.getNoOfItems() > 0) // if the dispenser is not empty
    {
        cout << "Please deposit " << product.getCost()
             << " cents" << endl;
        cin >> amount;
        if (amount < product.getCost())
        {
            cout << "Please deposit another "
                 << product.getCost() - amount << " cents" << endl;
            cin >> amount2;
            amount = amount + amount2;
        }
        if (amount >= product.getCost())
        {
            pCounter.acceptAmount(amount);
            product.makeSale();
            cout << "Collect your item at the bottom and enjoy."
                 << endl;
        }
        else
            cout << "The amount is not enough. "
                 << "Collect what you deposited." << endl;
        cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"
             << endl
             << endl;
    }
    else
        cout << "Sorry, this item is sold out." << endl;
} // end sellProduct

int main()
{
    cashRegister counter;
    dispenserType appleJuice(100, 50);
    dispenserType orangeJuice(100, 65);
    dispenserType mangoLassi(75, 45);
    dispenserType fruitPunch(100, 85);
    int choice; // variable to hold the selection
    showSelection();
    cin >> choice;
    while (choice != 9)
    {
        switch (choice)
        {
        case 1:
            sellProduct(appleJuice, counter);
            break;
        case 2:
            sellProduct(orangeJuice, counter);
            break;
        case 3:
            sellProduct(mangoLassi, counter);
            break;
        case 4:
            sellProduct(fruitPunch, counter);
            break;
        default:
            cout << "Invalid selection." << endl;
        }
        showSelection();
        cin >> choice;
    } // end while
    return 0;
} // end main