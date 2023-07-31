#include <iostream>
using namespace std;

int choice;
int schoice;
string currencyType;
string conversionType;
double conversionAmount;
double convertedAmount;
bool typeError;

string getCurrencyType() {
    cout << "What type of currency are you exchanging?\n";
    cout << "1. US Dollar(USD)\n";
    cout << "2. Euro (EUR)\n";
    cout << "3. British Pound (GBP)\n";
    cout << "4. Japanese Yen (JPY)\n";
    cout << "5. Austrialian Dollar (AUD)\n";
    cin >> choice;
    cout << endl;

    switch (choice){
        case 1:
        currencyType = "USD";
        break;
        case 2:
        currencyType = "EUR";
        break;
        case 3:
        currencyType = "GBP";
        break;
        case 4:
        currencyType = "JPY";
        break;
        case 5:
        currencyType = "AUD";
        break;
    }
    
    return currencyType;
}

string getConversionType() {

    cout << "What type of currency do you want to exchange to?\n";
    cout << "1. US Dollar(USD)\n";
    cout << "2. Euro (EUR)\n";
    cout << "3. British Pound (GBP)\n";
    cout << "4. Japanese Yen (JPY)\n";
    cout << "5. Austrialian Dollar (AUD)\n";
    cin >> schoice;
    cout << endl;

    if (schoice == choice || schoice > 5) {
        typeError = true;
    }

    while (typeError) {
        if (schoice == choice) {
            cout << "You can't convert " << currencyType << " into " << currencyType << "." << endl;
            cout << "What type of currency do you want to exchange to?\n";
            cout << "1. US Dollar(USD)\n";
            cout << "2. Euro (EUR)\n";
            cout << "3. British Pound (GBP)\n";
            cout << "4. Japanese Yen (JPY)\n";
            cout << "5. Austrialian Dollar (AUD)\n";
            cin >> schoice;
            cout << endl;   
        }
        else if (schoice > 5){
            cout << "Choice must be between 1 and 5." << endl;
            cout << "What type of currency do you want to exchange to?\n";
            cout << "1. US Dollar(USD)\n";
            cout << "2. Euro (EUR)\n";
            cout << "3. British Pound (GBP)\n";
            cout << "4. Japanese Yen (JPY)\n";
            cout << "5. Austrialian Dollar (AUD)\n";
            cin >> schoice;
            cout << endl;
        }
        else {
            typeError = false;
        }
        
    }
    

    switch (schoice){
        case 1:
        conversionType = "USD";
        break;
        case 2:
        conversionType = "EUR";
        break;
        case 3:
        conversionType = "GBP";
        break;
        case 4:
        conversionType = "JPY";
        break;
        case 5:
        conversionType = "AUD";
        break;
    }

    
    
    return conversionType;
}

double getConversionAmount() {
    cout << "Enter the amount of " << currencyType << " that you wish to convert: ";
    cin >> conversionAmount;
    cout << endl;
    
    return conversionAmount;
}

double conversionLogic() {

    if (currencyType == "USD" && conversionType == "EUR") {
        convertedAmount = conversionAmount * 0.90752; 
    }
    else if (currencyType == "USD" && conversionType == "GBP") {
        convertedAmount = conversionAmount * 0.778476; 
    }
    else if (currencyType == "USD" && conversionType == "JPY") {
        convertedAmount = conversionAmount * 141.171223; 
    }
    else if (currencyType == "USD" && conversionType == "AUD") {
        convertedAmount = conversionAmount * 1.503506; 
    }

    else if (currencyType == "EUR" && conversionType == "USD") {
        convertedAmount = conversionAmount * 1.102558; 
    }
    else if (currencyType == "EUR" && conversionType == "GBP") {
        convertedAmount = conversionAmount * 0.858316; 
    }
    else if (currencyType == "EUR" && conversionType == "JPY") {
        convertedAmount = conversionAmount * 155.649481; 
    }
    else if (currencyType == "EUR" && conversionType == "AUD") {
        convertedAmount = conversionAmount * 1.657703; 
    }

    else if (currencyType == "GBP" && conversionType == "USD") {
        convertedAmount = conversionAmount * 1.284560; 
    }
    else if (currencyType == "GBP" && conversionType == "EUR") {
        convertedAmount = conversionAmount * 1.165073; 
    }
    else if (currencyType == "GBP" && conversionType == "JPY") {
        convertedAmount = conversionAmount * 181.342958; 
    }
    else if (currencyType == "GBP" && conversionType == "AUD") {
        convertedAmount = conversionAmount * 1.931345; 
    }

    else if (currencyType == "JPY" && conversionType == "USD") {
        convertedAmount = conversionAmount * 0.007084; 
    }
    else if (currencyType == "JPY" && conversionType == "EUR") {
        convertedAmount = conversionAmount * 0.006425; 
    }
    else if (currencyType == "JPY" && conversionType == "GBP") {
        convertedAmount = conversionAmount * 0.005514; 
    }
    else if (currencyType == "JPY" && conversionType == "AUD") {
        convertedAmount = conversionAmount * 0.010650; 
    }
    
    else if (currencyType == "AUD" && conversionType == "USD") {
        convertedAmount = conversionAmount * 0.665112; 
    }
    else if (currencyType == "AUD" && conversionType == "EUR") {
        convertedAmount = conversionAmount * 0.603244; 
    }
    else if (currencyType == "AUD" && conversionType == "GBP") {
        convertedAmount = conversionAmount * 0.517774; 
    }
    else if (currencyType == "AUD" && conversionType == "JPY") {
        convertedAmount = conversionAmount * 93.894655; 
    }

    return conversionAmount;

}
