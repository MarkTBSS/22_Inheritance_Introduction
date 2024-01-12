#include <iostream>
using namespace std;

class ฺCarBrand {
    public:
    void JapaneseBrand(){
      cout << "Toyota : ";
    }
    void EuropeBrand(){
      cout << "Benz : ";
    }
};

class CountryZone : public ฺCarBrand {
    public:
    void CentralZone(){
      JapaneseBrand(); cout << "Bangkok\n"; 
      JapaneseBrand(); cout << "Nonthaburi\n";
      JapaneseBrand(); cout << "Pathumthani\n";
    }
    void NorthZone(){
      EuropeBrand(); cout << "ChiangMai\n";
      EuropeBrand(); cout << "Lumpang\n";
      EuropeBrand(); cout << "Nan\n";
    }
};

class Price : public CountryZone {
    public:
    void EvenPrice(){
      CentralZone();  
      cout << "200,000\n";
    }
    void OddPrice(){
      NorthZone(); 
      cout << "300,000\n";
    }
};

int main() {
    Price carInstance;
    carInstance.JapaneseBrand();
    cout << endl;

    return 0;
}