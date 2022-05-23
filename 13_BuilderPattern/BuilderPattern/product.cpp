#include "product.h"

Product::Product()
{

}


void Product::Add(string part)
{
    _parts.push_back(part);
}

void Product::Show()
{
    for(auto &part : _parts)
    {
        cout << part << " ";
    }
    cout << endl;
}
