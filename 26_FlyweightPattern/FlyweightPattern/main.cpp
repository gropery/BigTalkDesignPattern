#include <iostream>
#include <Flyweight.h>
#include <FlyweightFactory.h>

using namespace std;

int main()
{
    int extrinsicstate = 22;

    FlyweightFactory *f = new FlyweightFactory();

    Flyweight *fx = f->GetFlyweight("X");
    fx->Operation(--extrinsicstate);

    Flyweight *fy = f->GetFlyweight("Y");
    fy->Operation(--extrinsicstate);

    Flyweight *fz = f->GetFlyweight("Z");
    fz->Operation(--extrinsicstate);

    Flyweight *uf = new UnsharedConcreteFlyweight();
    uf->Operation(--extrinsicstate);

    return 0;
}
