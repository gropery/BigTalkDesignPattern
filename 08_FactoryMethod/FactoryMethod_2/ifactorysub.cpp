#include "ifactorysub.h"

UndergraduateFactory::UndergraduateFactory()
{

}

LeiFeng * UndergraduateFactory::CreateLeiFeng()
{
    return new Undergraduate();
}

VolunteerFactory::VolunteerFactory()
{

}

LeiFeng * VolunteerFactory::CreateLeiFeng()
{
    return new volunteer();
}


