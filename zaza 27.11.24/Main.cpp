    #include <iostream>
    #include "zaza.h"
    using namespace std;

    int main() {

        PC obj1("basec", "gpu", "cpu", "ssd", "ram");
        obj1.Print();


        Office obj2("ofes", "nvedea520", "amd ", "512gb ssd", "32gb ram", "rizz micro");
        obj2.Print();


        GAYming obj3("game", "nvedea5000", "entel a24", "1tb ssd", "128gb ram", "vibratar 3456", "stenserias", "4k web");
        obj3.Print();


        Home obj4("home", "entel gpu", "entel a5", "256gb ssd", "16gb ram", "logintech maus", "hd web");
        obj4.Print();

        return 0;
    }