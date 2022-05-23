#ifndef IFACTORYSUB_H
#define IFACTORYSUB_H

#include "ifactory.h"
#include "leifeng.h"
#include "leifengsub.h"

class UndergraduateFactory : public IFactory
{
public:
    UndergraduateFactory();
    LeiFeng * CreateLeiFeng() override;
};

class VolunteerFactory : public IFactory
{
public:
    VolunteerFactory();
    LeiFeng * CreateLeiFeng() override;
};

#endif // IFACTORYSUB_H
