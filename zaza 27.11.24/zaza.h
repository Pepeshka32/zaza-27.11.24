#pragma once 
#include <iostream> 
using namespace std;

class PC
{
    string GPU;
    string CPU;
    string RAM;
    string SSD;
    string name;
    double price;


public:

    PC() {}
    PC(string nm, string gp, string cp, string ass, string r) {
        name = nm;
        CPU = cp;
        GPU = gp;
        SSD = ass;
        RAM = r;
        price = 0.0;
    }
    virtual void Print()
    {
        cout << name << "\t" << CPU << "\t" << GPU << "\t" << SSD << "\t" << RAM << "\n";
    }
    virtual double GetPrice()
    {
        return price;
    }
};

class Office : public PC {
    string micro;
    double price;

public:
    Office() {}
    Office(string nm, string gp, string cp, string ass, string r, string mic) : PC(nm, gp, cp, ass, r) {
        micro = mic;
        price = 5200;
    }
    void Print() override {
        PC::Print();
        cout << micro << endl;
    }
    double GetPrice() override {
        return price;
    }
};

class GAYming : public PC {
    string webcam;
    string vibrator;
    string headphones;
    double price;

public: 
    GAYming() {}
    GAYming(string nm, string gp, string cp, string ass, string r, string vib, string hds, string wbc)
        : PC(nm, gp, cp, ass, r), vibrator(vib), headphones(hds), webcam(wbc) {
        price = 5200000000000000000; 
    }
    void Print() override {
        PC::Print();
        cout << vibrator << "\t" << headphones << "\t" << webcam << endl;
    }
    double GetPrice() override {
        return price;
    }
};

class Home : public PC {
    string webcam;
    double price;

public: 
    Home() {}
    Home(string nm, string gp, string cp, string ass, string r, string mic, string wbc)
        : PC(nm, gp, cp, ass, r), webcam(wbc), price(52000) {}

    void Print() override {
        PC::Print();
        cout << webcam << endl;
    }
    double GetPrice() override {
        return price;
    }
};