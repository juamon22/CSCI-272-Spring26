#include <iostream>
#include <string>
using namespace std;

class Car{
    private:
    string brand{"Volkswagen"};
    string model = "Polo";
    int year {2012};
    
    public:
    void startEngine() {
        cout<<"Start engine"<<endl;
    }
    void accelerate() {
        cout<<"accelerate engine"<<endl;
    }
};
