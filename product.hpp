// NOT CLEAR
#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
#include <vector>

class Product {
private:
	static int count_;
	std::string pName;
	int id;
	float price;
	static std::vector<Product> products_;

public:
	static Product Apple;
	static Product Banana;
	static Product Orange;
	static Product Pineapple;

	Product(std::string, float);
	static void registerProduct(Product&);
	void getInfo();

	static float getPrice(int p) { return products_[p].price; }
	int getID() { return id; }
};

void Product::registerProduct(Product&) {}
#endif