#include <iostream>
using namespace std;
class Pizza
{
private:
    int size;
    int toppings;
    int price;
    int thickness;

public:
    Pizza(int size,
          int toppings,
          int price,
          int thickness);
    void display()
    {
        cout << "Pizza display" << endl;
        cout << "Size: " << size << endl;
        cout << "Topings: " << toppings << endl;
        cout << "Price: " << price << endl;
        cout << "Thickness: " << thickness << endl;
    }
};

int main(int argc, char const *argv[])
{

    Pizza p(10, 5, 700, 5);
    p.display();
    return 0;
}
