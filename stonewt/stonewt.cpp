#include <iostream>
#include "stonewt.h"

using namespace std;

Stonewt::Stonewt(double lbs) {
    stone = int(lbs) / Lbs_per_stn;
    pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
}

//Stonewt::Stonewt(long lbs) {
//    cout << "long type of Stonewt constructor" << endl;
//}

Stonewt::Stonewt(int stn, double lbs) {
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn + lbs;
}

Stonewt::Stonewt() {
    stone = pounds = pds_left = 0;
}

void Stonewt::show_stn() const {
    cout << stone << " stone," << pds_left << " pounds\n";
}

void Stonewt::show_lbs() const {
    cout << pounds << " pounds\n";
}

// 转换函数定义
Stonewt::operator int() const {
    return int(pounds + 0.5);
}
Stonewt::operator double() const {
    return pounds;
}