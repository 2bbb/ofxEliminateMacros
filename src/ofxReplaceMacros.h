//
//  ofxReplaceMacros.h
//
//  Created by ishii 2bit on 2018/12/25.
//

#ifndef ofxReplaceMacros_h
#define ofxReplaceMacros_h

#include "ofxEliminateMacros.h"

constexpr double PI = 3.14159265358979323846;

constexpr double TWO_PI = 6.28318530717958647693;

constexpr double M_TWO_PI = 6.28318530717958647693;

constexpr double FOUR_PI = 12.56637061435917295385;

constexpr double HALF_PI = 1.57079632679489661923;

constexpr double DEG_TO_RAD = PI / 180.0;

constexpr double RAD_TO_DEG = 180.0 / PI;

template <typename t1, typename t2>
constexpr auto MIN(t1 x, t2 y) -> decltype(x + y) {
    return (x < y) ? x : y;
}

template <typename t1, typename t2>
constexpr auto MAX(t1 x, t2 y) -> decltype(x + y) {
    return (x > y) ? x : y;
}

template <typename t1, typename t2, typename t3>
constexpr auto CLAMP(t1 val, t2 min, t3 max) -> decltype(val + min + max) {
    return (val < min) ? min : ((val > max) ? max : val);
}

template <typename t>
constexpr t ABS(t x) {
    return (x < 0) ? -x : x;
}


#endif /* ofxReplaceMacros_h */
