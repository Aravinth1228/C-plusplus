#include<iostream>
using namespace std;
class BANK
{
    public :
     virtual void debit_credit()=0;
     virtual void loan()=0;
};
class HDFC:public BANK
{
  public :
   void debit_credit()
   {
     cout<<" HDFC banking Debit & Credit "<<endl;
   }
   void loan()
   {
     cout<<" HDFC banking 9% Loan "<<endl;
   }
};
class IB : public BANK
{
  public :
   void debit_credit()
   {
     cout<<" IB banking Debit & Credit "<<endl;
   }
   void loan()
   {
     cout<<" IB banking 7% Loan "<<endl;
   }
};
int main()
{
    BANK *b=new IB;
    b->debit_credit();
    b->loan();
    BANK *t=new HDFC;
    t->debit_credit();
    t->loan();
 return 0;

}