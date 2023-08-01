#include <iostream>
#include <map>
using namespace std;

int choice, schoice;
std::string currencyType, conversionType,combinedTypes;
double conversionAmount, convertedAmount, exchangeRate;
bool typeError;

std::map<std::string, double> currencyExchange{
{"USDEUR", 0.90752},
{"USDGBP", 0.778476},
{"USDJPY", 141.171223},
{"USDAUD", 1.503506},

{"EURUSD", 1.102558},
{"EURGBP", 0.858316},
{"EURJPY", 155.649481},
{"EURAUD", 1.657703},

{"GBPUSD", 1.284560},
{"GBPEUR", 1.165073},
{"GBPJPY", 181.342958},
{"GBPAUD", 1.931345},

{"JPYUSD", 0.007084},
{"JPYEUR", 0.006425},
{"JPYGBP", 0.005514},
{"JPYAUD", 0.010650},

{"AUDUSD", 0.665112},
{"AUDEUR", 0.603244},
{"AUDGBP", 0.517774},
{"AUDJPY", 93.894655},

};



std::string getCurrencyType() {
    cout << "What type of currency are you exchanging?\n";
    cout << "1. US Dollar(USD)\n";
    cout << "2. Euro (EUR)\n";
    cout << "3. British Pound (GBP)\n";
    cout << "4. Japanese Yen (JPY)\n";
    cout << "5. Austrialian Dollar (AUD)\n";
    cin >> choice;
    cout << endl;

    if (choice > 5 || choice < 1) {
        typeError = true;
    }

    while (typeError) {
        if (choice > 5 || choice < 1){
            cout << "Choice must be between 1 and 5." << endl;
            cout << "What type of currency are you exchanging?\n";
            cout << "1. US Dollar(USD)\n";
            cout << "2. Euro (EUR)\n";
            cout << "3. British Pound (GBP)\n";
            cout << "4. Japanese Yen (JPY)\n";
            cout << "5. Austrialian Dollar (AUD)\n";
            cin >> choice;
            cout << endl;
        }
        else {
            typeError = false;
        }
        
    }

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

std::string getConversionType() {

    cout << "What type of currency do you want to exchange to?\n";
    cout << "1. US Dollar(USD)\n";
    cout << "2. Euro (EUR)\n";
    cout << "3. British Pound (GBP)\n";
    cout << "4. Japanese Yen (JPY)\n";
    cout << "5. Austrialian Dollar (AUD)\n";
    cin >> schoice;
    cout << endl;

    if (schoice == choice || schoice > 5 || schoice < 1) {
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
        else if (schoice > 5 || schoice < 1){
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

std::string combineTypes() {
    combinedTypes = currencyType + conversionType;
    cout << endl;

    return combinedTypes;
}

double conversionLogic() {

    exchangeRate = currencyExchange[combinedTypes];
    convertedAmount = conversionAmount * exchangeRate;

    return convertedAmount;
}
