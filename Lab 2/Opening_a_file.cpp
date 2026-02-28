#include <iostream> 
#include <fstream>

using namespace std;

int main(){
    fstream FileName;

    FileName.open("FileName.txt", ios::out);

    if(!FileName){

        cout << "File not created!";
    }
    else{

        cout << "File created";
        FileName << "0024";
        FileName.close();
    }

    return 0;

}