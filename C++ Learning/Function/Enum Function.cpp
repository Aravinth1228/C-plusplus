 #include <iostream>
using namespace std;
//enum Function:
  enum gender {male,female};
  int main()
  {
    gender g = male;
    switch (g)
    {
        case male:
           cout<<"Gender Male";
            break;
        case female:
           cout<<"Gender female";
        break;
        default:
           cout<<"Invalid ";
        break;
    }
    return 0;
  } 
