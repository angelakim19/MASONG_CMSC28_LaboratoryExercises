#include <iostream>
#include "ProductInventory.h"
using namespace std; 

// Product implementation
Product::Product(string name, string brand, double price, int quantity, string description)
    : name(name), brand(brand), price(price), quantity(quantity), description(description) {}

string Product::getName() { return name; }
void Product::setName(string name) { this->name = name; }
string Product::getBrand() { return brand; }
void Product::setBrand(string brand) { this->brand = brand; }
double Product::getPrice() { return price; }
void Product::setPrice(double price) { this->price = price; }
int Product::getQuantity() { return quantity; }
void Product::setQuantity(int quantity) { this->quantity = quantity; }
string Product::getDescription() { return description; }
void Product::setDescription(string description) { this->description = description; }

void Product::printDetails() {
    cout << "Product: " << name << endl;
    cout << "Brand: " << brand << endl;
    cout << "Price: " << price << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "Description: " << description << endl;
}

// Clothing implementation
Clothing::Clothing(string name, string brand, double price, int quantity, string description,
                   string size, string color, string category, string material)
    : Product(name, brand, price, quantity, description), size(size), color(color), category(category), material(material) {}

string Clothing::getSize() { return size; }
void Clothing::setSize(string size) { this->size = size; }
string Clothing::getColor() { return color; }
void Clothing::setColor(string color) { this->color = color; }
string Clothing::getCategory() { return category; }
void Clothing::setCategory(string category) { this->category = category; }
string Clothing::getMaterial() { return material; }
void Clothing::setMaterial(string material) { this->material = material; }

void Clothing::printDetails() {
    Product::printDetails(); // Call base class printDetails()
    cout << "Size: " << size << endl;
    cout << "Color: " << color << endl;
    cout << "Category: " << category << endl;
    cout << "Material: " << material << endl;
}

// Electronics implementation
Electronics::Electronics(string name, string brand, double price, int quantity, string description,
                         string model, float warranty, string technicalSpecifications)
    : Product(name, brand, price, quantity, description), model(model), warranty(warranty), technicalSpecifications(technicalSpecifications) {}

string Electronics::getModel() { return model; }
void Electronics::setModel(string model) { this->model = model; }
float Electronics::getWarranty() { return warranty; }
void Electronics::setWarranty(float warranty) { this->warranty = warranty; }
string Electronics::getTechnicalSpecifications() { return technicalSpecifications; }
void Electronics::setTechnicalSpecifications(string technicalSpecifications) { this->technicalSpecifications = technicalSpecifications; }

void Electronics::printDetails() {
    Product::printDetails(); // Call base class printDetails()
    cout << "Model: " << model << endl;
    cout << "Warranty: " << warranty << " years" << endl;
    cout << "Technical Specifications: " << technicalSpecifications << endl;
}

int main() {
    // Variables to store user input
    string name, brand, description, size, color, category, material, model, technicalSpecifications;
    double price;
    int quantity;
    float warranty;

    // Program Description
    cout << "=========================================================================================================\n";
    cout << "                      PROGRAMMING EXERCISE 7 || CMSC 28 - COMPUTER PROGRAMMING II\n";
    cout << "                                 Programmed by: Angela Kim Ruchina Masong\n";
    cout << "=========================================================================================================\n";
    cout << "  THIS PROGRAM ALLOWS USERS TO INPUT DETAILS FOR CLOTHING AND ELECTRONICS PRODUCTS, CREATING INSTANCES \n"; 
    cout << "       OF CORRESPONDING CLASSES AND PRINTING OUT THE DETAILS ENTERED, SHOWCASING OBJECT-ORIENTED \n";
    cout << "                            PRINCIPLES IN PRODUCT INVENTORY MANAGEMENT.\n";
    
    // Getting user input for Clothing
    cout << "=========================================================================================================\n";
    cout << "Enter Clothing details:\n";
    cout << "Name: ";
    getline(std::cin, name);
    cout << "Brand: ";
    getline(std::cin, brand);
    cout << "Price: ";
    cin >> price;
    cout << "Quantity: ";
    cin >> quantity;
    cin.ignore(); // Ignore newline character left in the input buffer
    cout << "Description: ";
    getline(std::cin, description);
    cout << "Size: ";
    getline(std::cin, size);
    cout << "Color: ";
    getline(std::cin, color);
    cout << "Category: ";
    getline(std::cin, category);
    cout << "Material: ";
    getline(std::cin, material);

    // Create instance of Clothing with user input
    Clothing shirt(name, brand, price, quantity, description, size, color, category, material);

    // Getting user input for Electronics
    cout << "=========================================================================================================";
    cout << "\nEnter Electronics details:\n";
    cout << "Name: ";
    getline(std::cin, name);
    cout << "Brand: ";
    getline(std::cin, brand);
    cout << "Price: ";
    cin >> price;
    cout << "Quantity: ";
    cin >> quantity;
    cin.ignore(); // Ignore newline character left in the input buffer
    cout << "Description: ";
    getline(std::cin, description);
    cout << "Model: ";
    getline(std::cin, model);
    cout << "Warranty (in years): ";
    cin >> warranty;
    cin.ignore(); // Ignore newline character left in the input buffer
    cout << "Technical Specifications: ";
    getline(std::cin, technicalSpecifications);

    // Create instance of Electronics with user input
    Electronics phone(name, brand, price, quantity, description, model, warranty, technicalSpecifications);

    // Print details of each product
    cout << "=========================================================================================================";
    cout << "\n\nClothing Details:\n";
    shirt.printDetails();
    cout << "\n\nElectronics Details:\n";
    phone.printDetails();

    return 0;
}
