// Assessment
#include <iostream>
using namespace std;
int main()
{
    int choice, ch, q;
    string name;
    cout << "------- Tops Fast Food -------" << endl;

    cout << "Please Enter Your Name : ";
    cin >> name;
    cout << "Hello " << name << endl;
    cout << "---------------------------------------------------------" << endl;
    cout << "What Would You like to Order ? " << endl;
    cout << endl;
    cout << "------- MENU -------" << endl;
    cout << endl;
    cout << "1) PIZZAS...." << endl;
    cout << "2) BURGERS...." << endl;
    cout << "3) SANDWICH...." << endl;
    cout << "4) ROLLS...." << endl;
    cout << "5) BIRYANI...." << endl;
    cout << endl;
    cout << "---------------------------------------------------------" << endl;
    cout << "Please Enter Your Choice : ";
    cin >> choice;
    cout << "---------------------------------------------------------" << endl;
    switch (choice)
    {
    case 1:
        cout << "1) Pizza X Rs. 240" << endl;
        cout << "2) Pizza Y Rs. 160" << endl;
        cout << "3) Pizza Z Rs.100" << endl;
        cout << "Please Enter Which Item you would like to have? : ";
        cin >> ch;
        cout << "Please  Enter Quantity : ";
        cin >> q;

        cout << "-------------- Your Order --------------" << endl;

        if (ch == 1)
        {

            cout << "Pizza X " << endl;
            cout << "Your Total Bill : " << q * 240;
            cout << "Your Order Will Be Delivered in 40 min : " << endl;
            cout << "Thank You For Ordering.....";
        }
        else if (ch == 2)
        {

            cout << "Pizza Y " << endl;
            cout << "Your Total Bill : " << q * 160;
            cout << "Your Order Will Be Delivered in 40 min : " << endl;
            cout << "Thank You For Ordering.....";
        }
        else if (ch == 3)
        {

            cout << "Pizza Z " << endl;
            cout << "Your Total Bill : " << q * 100;
            cout << "Your Order Will Be Delivered in 40 min : " << endl;
            cout << "Thank You For Ordering.....";
        }
        else
        {
            cout << "You Enter Wrong Choice.....";
        }

        break;
    case 2:
        cout << "1) Burgers X Rs. 240" << endl;
        cout << "2) Burgers Y Rs. 160" << endl;
        cout << "3) Burgers Z Rs.100" << endl;
        cout << "Please Enter Which Item you would like to have? : ";
        cin >> ch;
        cout << endl;
        cout << "Please  Enter Quantity : ";
        cin >> q;

        cout << "-------------- Your Order --------------" << endl;

        if (ch == 1)
        {
            cout << "BURGER X " << endl;
            cout << "Your Total Bill : " << q * 240 << endl;
            cout << "Your Order Will Be Delivered in 40 min : " << endl;
            cout << "Thank You For Ordering.....";
        }
        else if (ch == 2)
        {
            cout << "BURGER Y " << endl;
            cout << "Your Total Bill : " << q * 160 << endl;
            cout << "Your Order Will Be Delivered in 40 min : " << endl;
            cout << "Thank You For Ordering.....";
        }
        else if (ch == 3)
        {
            cout << "BURGER Z " << endl;
            cout << "Your Total Bill : " << q * 100 << endl;
            cout << "Your Order Will Be Delivered in 40 min : " << endl;
            cout << "Thank You For Ordering.....";
        }
        else
        {
            cout << "You Enter Wrong Choice.....";
        }

        break;
    case 3:
        cout << "1) Club Sandwich Rs. 240" << endl;
        cout << "2) Veg. Crispy Sandwich Rs. 160" << endl;
        cout << "3) Extream Veg Sandwich Rs.100" << endl;
        cout << "Please Enter Which Item you would like to have? : ";
        cin >> ch;
        cout << "Please  Enter Quantity : ";
        cin >> q;

        cout << "-------------- Your Order --------------" << endl;

        if (ch == 1)
        {
            cout << "SANDWICH X " << endl;
            cout << "Your Total Bill : " << q * 240 << endl;
            cout << "Your Order Will Be Delivered in 40 min : " << endl;
            cout << "Thank You For Ordering.....";
        }
        else if (ch == 2)
        {
            cout << "SANDWICH Y " << endl;
            cout << "Your Total Bill : " << q * 160 << endl;
            cout << "Your Order Will Be Delivered in 40 min : " << endl;
            cout << "Thank You For Ordering.....";
        }
        else if (ch == 3)
        {
            cout << "SANDWICH Z " << endl;
            cout << "Your Total Bill : " << q * 100 << endl;
            cout << "Your Order Will Be Delivered in 40 min : " << endl;
            cout << "Thank You For Ordering.....";
        }
        else
        {
            cout << "You Enter Wrong Choice.....";
        }
        break;
    case 4:
        cout << "1) Rolls X Rs. 240" << endl;
        cout << "2) Rolls Y Rs. 160" << endl;
        cout << "3) Rolls Z Rs.100" << endl;
        cout << "Please Enter Which Item you would like to have? : ";
        cin >> ch;
        cout << endl;
        cout << "Please  Enter Quantity : ";
        cin >> q;

        cout << "-------------- Your Order --------------" << endl;

        if (ch == 1)
        {
            cout << "ROLLS X " << endl;
            cout << "Your Total Bill : " << q * 240 << endl;
            cout << "Your Order Will Be Delivered in 40 min : " << endl;
            cout << "Thank You For Ordering.....";
        }
        else if (ch == 2)
        {
            cout << "ROLLS Y " << endl;
            cout << "Your Total Bill : " << q * 160 << endl;
            cout << "Your Order Will Be Delivered in 40 min : " << endl;
            cout << "Thank You For Ordering.....";
        }
        else if (ch == 3)
        {
            cout << "ROLLS Z " << endl;
            cout << "Your Total Bill : " << q * 100 << endl;
            cout << "Your Order Will Be Delivered in 40 min : " << endl;
            cout << "Thank You For Ordering.....";
        }
        else
        {
            cout << "You Enter Wrong Choice.....";
        }
        break;
    case 5:
        cout << "1) Biryani X Rs. 240" << endl;
        cout << "2) Biryani Y Rs. 160" << endl;
        cout << "3) Biryani Z Rs.100" << endl;
        cout << "Please Enter Which Item you would like to have? : ";
        cin >> ch;
        cout << endl;
        cout << "Please  Enter Quantity : ";
        cin >> q;

        cout << "-------------- Your Order --------------" << endl;

        if (ch == 1)
        {
            cout << "BIRYANI X " << endl;
            cout << "Your Total Bill : " << q * 240 << endl;
            cout << "Your Order Will Be Delivered in 40 min : " << endl;
            cout << "Thank You For Ordering.....";
        }
        else if (ch == 2)
        {
            cout << "BIRYANI Y " << endl;
            cout << "Your Total Bill : " << q * 160 << endl;
            cout << "Your Order Will Be Delivered in 40 min : " << endl;
            cout << "Thank You For Ordering.....";
        }
        else if (ch == 3)
        {
            cout << "BIRYANI Z " << endl;
            cout << "Your Total Bill : " << q * 100 << endl;
            cout << "Your Order Will Be Delivered in 40 min : " << endl;
            cout << "Thank You For Ordering.....";
        }
        else
        {
            cout << "You Enter Wrong Choice.....";
        }
        break;

    default:
        cout << "You Enter Wrong Choice....";
        break;
    }

    return 0;
}