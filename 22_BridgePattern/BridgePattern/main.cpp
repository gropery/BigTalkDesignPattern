#include <iostream>
#include "HandsetBrand.h"
#include "handsetsoft.h"
using namespace std;

int main()
{
    HandsetBrand *BrandN = new HandsetBrandN();
    BrandN->SetHandsetSoft(new HandsetGame());
    BrandN->Run();

    BrandN->SetHandsetSoft(new HandsetAddressList());
    BrandN->Run();

    HandsetBrand *BrandM = new HandsetBrandM();
    BrandM->SetHandsetSoft(new HandsetGame());
    BrandM->Run();

    BrandM->SetHandsetSoft(new HandsetAddressList());
    BrandM->Run();

    return 0;
}
