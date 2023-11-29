#include<iostream>
using namespace std;
class Vaccine
{
    public:
    virtual void putvaccin()
    {
        cout<<" Covid Vaccin ";
    }
};
class covaxin: public Vaccine
{
    public:
    void putvaccin()
    {
        cout<<" Put Covaxin Vaccin "<<endl;
    }
};
class covisheild:public Vaccine
{
    public:
    void putvaccin()
    {
     cout<<" Put Covishield Vaccin "<<endl;
    }
};
int main ()
{
    covisheild cs;
    covaxin cv;
    Vaccine *o=NULL;
    o=&cs;
    o->putvaccin();
    o=&cv;
    o->putvaccin();
    return 0;
}

