#include "VasRobot.h"
#include <cstdlib>

//bool VasRobot::start(Bludiste & map) {smer = 0; return true; }
//bool VasRobot::start(BludisteOdkryte & map) { return true; }
//bool VasRobot::stop() {return true; }

void VasRobot::krok(Bludiste & map){
    smer = rand() % 4;

    if (smer == 0) {
        map.dolu();
    }
    else if (smer == 1) {
        map.vlevo();
    }
    else if (smer == 2) {
        map.nahoru();
    }
    else if (smer == 3) {
        map.vpravo();
    }
}

void VasRobot::krok(BludisteOdkryte &map) {
    smer = rand() % 4;

    if (smer == 0) {
        map.dolu();
    }
    else if (smer == 1) {
        map.vlevo();
    }
    else if (smer == 2) {
        map.nahoru();
    }
    else if (smer == 3) {
        map.vpravo();
    }
}


//std::string VasRobot::jmeno () { return "Nahodny robot"; }