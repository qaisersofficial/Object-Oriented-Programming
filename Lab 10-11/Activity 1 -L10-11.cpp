#include <iostream>
#include <string>
using namespace std;

class LocalPhone {
protected:
    string phone;

public:
    void inputPhone() {
        cout << "Enter local phone number: ";
        cin >> phone;
    }

    void displayPhone() {
        cout << "Phone Number: " << phone << endl;
    }
};

// child class which inherits LocalPhone (single inheritance)
class NatPhone : public LocalPhone {
protected:
    string cityCode;

public:
    void inputCityCode() {
        cout << "Enter city code: ";
        cin >> cityCode;
    }

    void showCityCode() {
        cout << "City Code: " << cityCode << endl;
    }
};

// grandchild class — inherits NatPhone (multilevel inheritance)
class IntPhone : public NatPhone {
private:
    string countryCode;

public:
    void inputCountryCode() {
        cout << "Enter country code: ";
        cin >> countryCode;
    }

    void showCountryCode() {
        cout << "Country Code: " << countryCode << endl;
    }

    // display everything together
    void showAll() {
    	cout << endl;
        cout << "Full Phone Data" << endl;
        showCountryCode();
        showCityCode();
        displayPhone();
        cout<<"Whole Number: "<< countryCode  << " " << cityCode << " " << phone ;
    }
};

int main() {
    IntPhone ip;
    ip.inputCountryCode();
    ip.inputCityCode();
    ip.inputPhone();
    ip.showAll();

    return 0;
}