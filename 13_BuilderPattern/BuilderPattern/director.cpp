#include "director.h"

Director::Director()
{

}

void Director::Construct(Builder *builder)
{
    builder->BuildPartA();
    builder->BuildPartB();
}
