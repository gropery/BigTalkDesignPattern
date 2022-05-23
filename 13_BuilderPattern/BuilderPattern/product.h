#ifndef PRODUCT_H
#define PRODUCT_H
#include <string>
#include <iostream>
#include <vector>

using namespace std;

class Product
{
private:
    vector<string> _parts;

public:
    Product();
    void Add(string part);
    void Show();
};

#endif // PRODUCT_H
