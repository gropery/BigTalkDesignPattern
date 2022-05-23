#include "concretebuilder.h"

//--------------------------------------
ConcreteBuilder1::ConcreteBuilder1()
{
    _product = new Product();
}
void ConcreteBuilder1::BuildPartA()
{
    _product->Add("partA");
}
void ConcreteBuilder1::BuildPartB()
{
    _product->Add("partB");
}
Product* ConcreteBuilder1::GetResult()
{
    return _product;
}

//--------------------------------------
ConcreteBuilder2::ConcreteBuilder2()
{
    _product = new Product();
}
void ConcreteBuilder2::BuildPartA()
{
    _product->Add("partX");
}
void ConcreteBuilder2::BuildPartB()
{
    _product->Add("partY");
}
Product* ConcreteBuilder2::GetResult()
{
    return _product;
}
