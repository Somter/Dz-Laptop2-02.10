// Dz Laptop2 02.10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string>
using namespace std;

// Video Card   
class VideoCard {
private:
    string nameCard;
public:
    VideoCard(string n): nameCard(n){}
    void ShowCard() {   
        cout << nameCard << endl;   
    }   
};

// motherboard
class Motherboard {
private:
    string nameBor;
public: 
    Motherboard(string n) : nameBor(n) {}   
    void ShowBor() {        
        cout << nameBor << endl;         
    }
};

// RAM - 5
class RAM{
private:
    string  nameR;     
public: 
    RAM(string n) : nameR(n) {} 
    void ShowR() {
        cout << nameR << endl;          
    }
};

// CPU - 4
class CPU { 
private:
    string nameC;
public:
    CPU(string n) : nameC(n) {}
    void ShowC() {
        cout << nameC << endl;
    }
};

// SSD - 3  
class SSD {
private:
    string nameS;
public:
    SSD(string n) : nameS(n) {}
    void ShowS() {
        cout << nameS << endl;
    }
};

// Batteru - 2
class Battery {
private:
    string nameB;
public:
    Battery(string n) : nameB(n) {}
    void ShowB() {
        cout << nameB << endl;
    }
};

// Laptop  - 1
class Laptop {
private:
    string model;
    string color;
    double price;
    Battery* batt;
    SSD* ssd;
    CPU cpu; 
    RAM ram;      
    Motherboard Bord;  
    VideoCard Card; 
public:
    Laptop(SSD* s, Battery* b, string m, string co, double pr, CPU c, RAM r, Motherboard mb, VideoCard Cd);
    void Print();   
    void SetBatt(Battery* temp);    
    void SetSSD(SSD* temp); 
};

Laptop::Laptop(SSD* s, Battery* b, string m, string co, double pr, CPU c, RAM r,  Motherboard mb, VideoCard cd)     
    : model(m), color(co), price(pr), batt(b), ssd(s), cpu(c), ram(r), Bord(mb), Card(cd) {}                     

void Laptop::Print() {  
    cout << "Model: " << model << endl;
    cout << "Color: " << color << endl;
    cout << "Price: " << price << "$" << endl;
    cout << "Battery: ";
    batt->ShowB();
    cout << "SSD: ";
    ssd->ShowS();
    cout << "CPU: ";
    cpu.ShowC();
    cout << "RAM: ";    
    ram.ShowR();    
    cout << "Motherboard: ";
    Bord.ShowBor(); 
    cout << "Video Caard: "; 
    Card.ShowCard();    
}

void Laptop::SetBatt(Battery* temp) {
    batt = temp;
}

void Laptop::SetSSD(SSD* temp) {
    ssd = temp;
}

int main() {
    Battery objB("Samsung");
    SSD objS("Kingston SSDNow A400 480GB 2.5");
    CPU objC("Intel Core i5");
    RAM objR("NVIDIA RTX A5000");  
    Motherboard objM("BoB-WAE9P USB DA0H98TB8E0");
    VideoCard objCd("Radeon Vega 8");   
    Laptop* ptr = new Laptop(&objS, &objB, "Huawei mateabook d15", "white", 100.99, objC, objR, objM, objCd);    
    ptr->SetBatt(&objB);
    ptr->SetSSD(&objS);
    ptr->Print();
    delete ptr;
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
