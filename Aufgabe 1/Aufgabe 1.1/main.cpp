#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <vector>
#include <stdexcept>
#include <exception>

void EinUndAusgabe(){
    std::ifstream input("eingabe.txt",std::fstream::in);
    std::fstream output("ausgabe.txt",std::fstream::out|std::fstream::app);
    int spalte1 {};
    double spalte2 {};
    std::string spalte3 {};
    int i{1};

    while(input >> spalte1 >> spalte2 >> spalte3){
        output << i << ". | " << std::setfill('0') << std::uppercase << std::hex << std::setw(4) <<  spalte1 << " | " << spalte2 << " | " <<std::setw(15) << std::setfill('-') << spalte3 << '\n';
        std::cout << i++ << ". | " << std::setfill('0') << std::uppercase << std::hex << std::setw(4) <<  spalte1 << " | " << spalte2 << " | " <<std::setw(15) << std::setfill('-') << spalte3 << '\n';
    }

}

float abschneiden(float x, int n){

    for (int i = 0; i < n; i++){
        x = x * 10;
    }
    x = (int) x * 1;
    for (int a = 0; a < n; a++){
        x = x / 10;
    }
    return x;
}

int enthaeltGenauEinmal7(int zahl){
    std::vector<int> dieSieben {};
    int count {0};
    while (zahl != 0){
        count++;
        int help = zahl % 10;
        if (help == 7 || help == -7){
            dieSieben.push_back(count);
        }
        zahl = zahl / 10;
    }

    if(dieSieben.size() == 0){
        throw std::invalid_argument("geht nicht");
    }else if(dieSieben.size() > 1){
        for(int i = 0; i<dieSieben.size(); i++){
            std::cout << dieSieben.at(i) << " ";
        }
        throw std::exception();
    }else if(dieSieben.size() == 1){
        return dieSieben.at(0);
    }

    return 0;
}



std::vector<int> gemeinsameWerte(std::vector<int> a, std::vector<int> b){
    std::vector<int> erg {};
    for (int i = 0; i < a.size(); i++){
        for (int j = 0; j < b.size(); j++){
            if (a.at(i)==b.at(j)){
                erg.push_back(a.at(i));
            }
        }
        for (int k = 0; k < erg.size()-1; k++){
            if(erg.at(k) == erg.back()){
                erg.pop_back();
            }
        }
    }
    return erg;
}

bool keineGemeinsamenWerte(std::vector<int> a, std::vector<int> b){
    for (int i = 0; i < a.size(); i++){
        for (int j = 0; j < b.size(); j++){
            if (a.at(i)==b.at(j)){
                return true;
            }
        }
    }
    return false;
}

int main() {
    //Aufgabe 1.1
    //EinUndAusgabe();

    // Aufgabe 1.2.1
/*
    float x {};
    std::cout << "Zahl x zwischen 0 - 1000 wählen" << std::endl;
    std::cin >> x;

    while (x < 0 || x > 1000){
        std::cout << "Die Zahl liegt nicht im Zahlenbereich 0 - 1000" << std::endl;
        std::cin >> x;
    }

    int n {};
    std::cout << "Nachkommastelle eingeben" << std::endl;
    std::cin >> n;
    while (n < 1 || n > 5){
        std::cout << "Richtig eingeben" << std::endl;
        std::cin >> n;
    }
    x = abschneiden(x,n);
    std::cout << x << std::endl;
*/

    //Aufgabe 1.2.2 Funktionen

    int zahl {};
    std::cout << "Zahl x eingeben" << std::endl;
    std::cin >> zahl;
    try{
        std::cout << enthaeltGenauEinmal7(zahl) << std::endl;
    } catch (const std::invalid_argument){
        std::cout << "Eine Zahl mit 7 wird erwartet. :)" << std::endl;
    } catch (const std::exception){
        std::cout << std::endl << "Zu viele 7! Geben Sie die Stelle an, die zählen soll" << std::endl;
        int x {};
        std::cin >> x;
        std::cout << "Sie wählten: " << x;
    }


    //Aufgabe 1.4 Listenbearbeitung
    /*int zahl1 {0};
    std::vector<int> liste1 {};
    std::cout << "Zahl eingeben für Liste 1: " << std::endl;
    std::cin >> zahl1;
    while (zahl1 != -1) {
        liste1.push_back(zahl1);
        std::cout << "Zahl eingeben für Liste 1: " << std::endl;
        std::cin >> zahl1;
    }

    int zahl2 {0};
    std::vector<int> liste2 {};
    std::cout << "Zahl eingeben für Liste 2: " << std::endl;
    std::cin >> zahl2;
    while (zahl2 != -1) {
        liste2.push_back(zahl2);
        std::cout << "Zahl eingeben für Liste 2: " << std::endl;
        std::cin >> zahl2;
    }
    std::vector<int> gemeinsam = gemeinsameWerte(liste1,liste2);
    for (int i = 0; i < gemeinsam.size(); i++){
        std::cout << gemeinsam.at(i) << std::endl;
    }
    std::cout << std::boolalpha << keineGemeinsamenWerte(liste1,liste2) << std::endl;*/
    return 0;
}
