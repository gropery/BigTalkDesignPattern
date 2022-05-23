#include <iostream>
#include "WebSiteFactory.h"
#include "WebSite.h"
#include "User.h"

using namespace std;

int main()
{
    WebSiteFactory* f = new WebSiteFactory();

    WebSite* fx = f->GetWebSiteCategory("Product");
    fx->Use(new User("fx"));
    WebSite* fy = f->GetWebSiteCategory("Product");
    fy->Use(new User("fy"));
    WebSite* fz = f->GetWebSiteCategory("Product");
    fz->Use(new User("fz"));

    WebSite* fl = f->GetWebSiteCategory("Blog");
    fl->Use(new User("fl"));
    WebSite* fm = f->GetWebSiteCategory("Blog");
    fm->Use(new User("fm"));
    WebSite* fn = f->GetWebSiteCategory("Blog");
    fn->Use(new User("fn"));

    cout << "Web Type Total Num: " << f->GetWebSiteCount() << endl;

    return 0;
}
