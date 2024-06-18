#ifndef PRODUCTINVENTORY_H
#define PRODUCTINVENTORY_H

#include <string>
using namespace std; 

class Product {
protected:
    string name;
    string brand;
    double price;
    int quantity;
    string description;
public:
    // Constructor
    Product(string name, string brand, double price, int quantity, string description);

    // Getters and Setters
    string getName();
    void setName(string name);
    string getBrand();
    void setBrand(string brand);
    double getPrice();
    void setPrice(double price);
    int getQuantity();
    void setQuantity(int quantity);
    string getDescription();
    void setDescription(string description);

    // Virtual function to be overridden by derived classes
    virtual void printDetails() = 0;
};

class Clothing : public Product {
private:
    string size;
    string color;
    string category;
    string material;
public:
    // Constructor
    Clothing(string name, string brand, double price, int quantity, string description,
             string size, string color, string category, string material);

    // Getters and Setters
    string getSize();
    void setSize(string size);
    string getColor();
    void setColor(string color);
    string getCategory();
    void setCategory(string category);
    string getMaterial();
    void setMaterial(string material);

    // Overridden function
    void printDetails() override;
};

class Electronics : public Product {
private:
    string model;
    float warranty;
    string technicalSpecifications;
public:
    // Constructor
    Electronics(string name, string brand, double price, int quantity, string description,
                string model, float warranty, string technicalSpecifications);

    // Getters and Setters
    string getModel();
    void setModel(string model);
    float getWarranty();
    void setWarranty(float warranty);
    string getTechnicalSpecifications();
    void setTechnicalSpecifications(string technicalSpecifications);

    // Overridden function
    void printDetails() override;
};

#endif // PRODUCTINVENTORY_H
