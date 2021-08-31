//Standard input/output library
#include <iostream>

int main(){
    double tempf;
    double tempc;
    std::cout << "Input your city temperature(f): ";
    std::cin >> tempf;

    //store celcius value in tempc
    tempc = (tempf - 32)/1.8;
    std::cout << "Your city temperature is " << tempc << " degrees Celcius.";
}