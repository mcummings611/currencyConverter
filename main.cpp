#include <iostream>
#include "fncs.cpp"

int main() {
    
    cout << "CURRENCY CONVERTER\n";
    cout << endl;

    getCurrencyType();
    cout << "Your chosen currency is " << currencyType << ".\n";
    cout<< endl;

    getConversionType();
    cout << "Your " << currencyType << " will be converted into " << conversionType << ".\n";
    cout << endl;

    getConversionAmount();
    cout << conversionAmount << " " << currencyType << " will be converted into " << conversionType << ".\n";
    cout << endl;

    combineTypes();

    conversionLogic();
    cout << conversionAmount << " " << currencyType << " converts to "; 
    printf("%.2f", convertedAmount);
    cout << " " << conversionType << ".\n";
}
