#include <iostream>
#include "composite.h"
#include "leaf.h"
using namespace std;

int main()
{
    //生成树根,添加2个叶子LeafA,LeafB
    Component *root = new Composite("Root");
    root->Add(new Leaf("LeafA"));
    root->Add(new Leaf("LeafB"));

    //树根添加1个树枝comp1,树枝上添加2个叶子Leaf1A,Leaf1B
    Component *comp1 = new Composite("Comp1");
    comp1->Add(new Leaf("Leaf1A"));
    comp1->Add(new Leaf("Leaf1B"));
    root->Add(comp1);

    //树枝comp1添加2个叶子Leaf2A,Leaf2B
    Component *comp2 = new Composite("Comp2");
    comp2->Add(new Leaf("Leaf2A"));
    comp2->Add(new Leaf("Leaf2B"));
    comp1->Add(comp2);

    //树根再次添加树叶LeafC
    root->Add(new Leaf("LeafC"));
    Leaf *leafD = new Leaf("LeafD");
    root->Add(leafD);
    root->Remove(leafD);

    root->Display(1);
    return 0;
}


