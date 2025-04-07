#include <iostream>
#include <string>
using namespace std;

class Clothes {
public:
    string brand;
    string type;
    string color;
    double length;
    double width;
    double height;
    double price;
    double discount;

public:
    double discountedPrice() {
        double discounted_price = price - (discount * price);
        return discounted_price;
    }

    void setData(string b, string t, string c, double l, double w, double h, double p, double d) {
        brand = b;
        type = t;
        color = c;
        length = l;
        width = w;
        height = h;
        price = p;
        discount = d;
    }

    void displayInfo() {
        cout << "Clothes Information" << endl;
        cout << "Brand: " << brand << endl;
        cout << "Type: " << type << endl;
        cout << "Color: " << color << endl;
        cout << "Original Price: " << price << endl;
        cout << "Discounted Price: " << discountedPrice() << endl;
    }

    void displaySize() {
        double volume = length * width * height;
        string size;
        if (volume < 20) {
            size = "Small Size";
        } else if (volume >= 20 && volume < 40) {
            size = "Medium Size";
        } else {
            size = "Large Size";
        }
        cout << "Clothes Size: " << size << endl;
        cout << "Volume: " << volume << endl;
    }
};

int main() {
    Clothes jacket1, jacket2, dress1, dress2, dress3;

    // Setting new data for jackets and dresses
    jacket1.setData("North Face", "Jacket", "Black", 10, 5, 2, 5000, 0.15);
    jacket2.setData("Columbia", "Jacket", "Red", 11, 6, 2, 6000, 0.20);
    dress1.setData("Zara", "Dress", "Blue", 8, 4, 1, 3000, 0.10);
    dress2.setData("H&M", "Dress", "Green", 9, 5, 1, 3500, 0.25);
    dress3.setData("Forever 21", "Dress", "Pink", 7, 3, 1, 4000, 0.30);

    cout << dress2.price + dress3.price << endl;
    //cout << pant2.discountedPrice() + pant3.discountedPrice() << endl;

   dress3.displayInfo();

    return 0;
}