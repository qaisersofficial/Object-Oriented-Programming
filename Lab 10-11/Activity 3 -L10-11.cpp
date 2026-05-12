#include <iostream>
#include <string>
using namespace std;

// base class
class PersonData {
private:
    string lastName, firstName, address, city, state, zip, phone;

public:
    // mutators/setters
    void setLastName(string l){ 
		lastName  = l;
		}

    void setFirstName(string f){
		firstName = f; 
		}
		
    void setAddress(string a){ 
		address = a;
		}
		
    void setCity(string c){
		city = c;
		}
	
    void setState(string s){
		state = s;
		}
    void setZip(string z){
		zip = z;
		}
		
    void setPhone(string p){
		phone = p;
		}

    // accessors/getters
    string getLastName(){
		return lastName;  
		}
    string getFirstName() { 
		return firstName; 
		}
    string getAddress()   { 
		return address;   
		}
    string getCity() { 
		return city;      
		}
    string getState() { 
		return state;     
		}
    string getZip() { 
		return zip;       
		}
    string getPhone() { 
		return phone;     
		}

    void inputPerson() {
        cout << "First name : "; 
        getline(cin,firstName);
        cout << "Last name  : ";
		cin.ignore(); 
        getline(cin,lastName);
        cout << "Address    : ";
        cin.ignore(); 
		getline(cin,address);
        cout << "City       : "; 
        cin.ignore(); 
		getline(cin,city);
        cout << "State      : "; 
		cin.ignore(); 
		getline(cin,state);
        cout << "ZIP        : "; 
        cin.ignore(); 
		getline(cin,zip);
        cout << "Phone      : "; 
        cin.ignore(); 
		getline(cin,phone);
    }

    void displayPerson() {
        cout << "Name: " << firstName << " " << lastName << endl;
        cout << "Address: " << address << ", " << city << ", " << state << " " << zip << endl;
        cout << "Phone: " << phone << endl;
    }
};
// child class
class CustomerData : public PersonData {
private:
    int  customerNumber;
    bool mailingList;

public:
    // setter
    void setCustomerNumber(int n) { 
		customerNumber = n; 
		}

    // getter
    int  getCustomerNumber() { 
		return customerNumber; 
	}
    bool getMailingList()    { 
		return mailingList;    
	}

    void inputCustomer() {
        inputPerson();
        cout << "Customer number : "; 
		cin >> customerNumber;
		
        char choice;
        cout << "Mailing list? (Yes/No): "; 
			cin >> choice;
        mailingList = (choice == 'y' || choice == 'Y');
    }

    void displayCustomer() {
        displayPerson();
        cout << "Customer No : " << customerNumber << endl;
        cout << "Mailing List: " << (mailingList ? "Yes" : "No") << endl;
    }
};

// grandparent
class PreferredCustomer : public CustomerData {
private:
    double purchasesAmount;
    double discountLevel;

    // automatically set discount based on purchases
    void updateDiscount() {
        if(purchasesAmount >= 2000) {
			discountLevel = 10.0;
		}
        else if (purchasesAmount >= 1500) {
        	discountLevel =  7.0;	
		}
        else if (purchasesAmount >= 1000) {
        	discountLevel =  6.0;
		}
        else if (purchasesAmount >=  500) {
        	discountLevel =  5.0;
		}
        else{
        	discountLevel =  0.0;
		}
    }

public:
    // mutator with input validation (no negatives)
    void setPurchasesAmount(double p) {
        if (p < 0) {
            cout << "Error: purchases cannot be negative." << endl;
            purchasesAmount = 0;
        } else {
            purchasesAmount = p;
        }
        updateDiscount();
    }

    // accessors
    double getPurchasesAmount() { 
		return purchasesAmount; 
		}
    double getDiscountLevel()   { 
		return discountLevel;   
	}

    void inputPreferred() {
        inputCustomer();
        double p;
        cout << "Total purchases nearly (PKR): "; 
		cin >> p;
        setPurchasesAmount(p);   
    }

    void displayPreferred() {
        displayCustomer();
        cout << "Spendings: PKR" << purchasesAmount << endl;
        cout << "Discount: "  << discountLevel   << "%" << endl;
    }
};

int main() {
    PreferredCustomer pcObject;
    pcObject.inputPreferred();

	cout << endl;
    cout << "Preferred Customer Details " << endl;
    pcObject.displayPreferred();

    return 0;
}