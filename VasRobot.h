#ifndef VASROBOT_H
#define VASROBOT_H

#include <iostream>
#include "Prohledavac.h"

class VasRobot : public Prohledavac {
public:
    VasRobot() { srand(time(nullptr)); }
    virtual bool start(Bludiste & map) override {return true;};
    virtual bool start(BludisteOdkryte & map) override {return true;};
    virtual bool stop() override { return false; };
    virtual void krok(Bludiste & map) override;
    virtual void krok(BludisteOdkryte & map);
    virtual std::string jmeno();
private:
    int smer{};
};

#endif

