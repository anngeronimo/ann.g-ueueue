#include <iostream>
#include <string>
using namespace std;

class Toy {
private:
    string name;
    string brand;
    string type;
    int ageRecommendation; // Recommended age for the toy
    double price;
    double discount; // Discount as a fraction (e.g., 0.1 for 10%)

public:
    // Constructor to initialize the toy object
    void setData(string n, string b, string t, int ageRec, double p, double d) {
        name = n;
        brand = b;
        type = t;
        ageRecommendation = ageRec;
        price = p;
        discount = d;
    }

    // Method to display toy data
    void displayData() {
        cout << "Toy Properties" << endl;
        cout << "Name: " << name << endl;
        cout << "Brand: " << brand << endl;
        cout << "Type: " << type << endl;
        cout << "Recommended Age: " << ageRecommendation << " years" << endl;
        cout << "Price: " << price << endl;
    }

    // Method to calculate and display the discounted price
    void displayDiscountedPrice() {
        double discounted_price = calculateDiscountedPrice();
        cout << "Discounted Price: " << discounted_price << endl;
    }

    // Method to calculate the discounted price
    double calculateDiscountedPrice() {
        return price - (discount * price);
    }
};

int main() {
    // Creating toy objects using the constructor
    Toy toy1("Action Figure", "Hasbro", "Action", 5, 29.99, 0.15);
    Toy toy2("Building Blocks", "LEGO", "Construction", 3, 49.99, 0.10);
    Toy toy3("Doll", "Mattel", "Doll", 4, 19.99, 0.20);

    // Displaying data for each toy
    toy1.displayData();
    toy1.displayDiscountedPrice();
    cout << endl;

    toy2.displayData();
    toy2.displayDiscountedPrice();
    cout << endl;

    toy3.displayData();
    toy3.displayDiscountedPrice();
    cout << endl;

    // Calculating total discounted price for toy1 and toy2
    double totalDiscountedPrice = toy1.calculateDiscountedPrice() + toy2.calculateDiscountedPrice();
    cout << "Total Discounted Price for Toy 1 and Toy 2: " << totalDiscountedPrice << endl;

    return 0;
}