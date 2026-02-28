// Write a class definition Distance with two data members feet and inches This class also contains member functions

// void setFeet(int)
// void setInches( float) 
// void showDistance()
// Demonstrate the class by writing a complete program implementing it.

#include <iostream>
using namespace std;

class Distance {
    private:
        int feet;
        float inches;
    
    public:
        void setFeet(int f) {
            feet = f;
        }
        
        void setInches(float i) {
            inches = i;
        }
        
        void showDistance() {
            cout << "Feet: " << feet << " Inches: " << inches << endl;
        }
};

int main() {
    Distance dist;
    dist.setFeet(5);
    dist.setInches(8.5);
    dist.showDistance();
    
    return 0;
}
