/* compiler: ee-gcc-2.9-G0 */
#include "types.h"

typedef void (*NetConfigCallback)(void);
extern NetConfigCallback D_011E0D14;
extern NetConfigCallback D_011E0D18;
extern NetConfigCallback D_011E0D1C;
extern NetConfigCallback D_011E0D20;
extern NetConfigCallback D_011E0D24;
extern NetConfigCallback D_011E0D28;
extern NetConfigCallback D_011E0D2C;
extern NetConfigCallback D_011E0D30;
extern NetConfigCallback D_011E0D34;
extern NetConfigCallback D_011E0D38;
extern NetConfigCallback D_011E0D3C;
extern NetConfigCallback D_011E0D40;
extern NetConfigCallback D_011E0D44;
extern NetConfigCallback D_011E0D48;
extern NetConfigCallback D_011E0D4C;
void func_00154310(NetConfigCallback callback0, NetConfigCallback callback1,
                   NetConfigCallback callback2, NetConfigCallback callback3,
                   NetConfigCallback callback4, NetConfigCallback callback5,
                   NetConfigCallback callback6, NetConfigCallback callback7,
                   NetConfigCallback callback8, NetConfigCallback callback9,
                   NetConfigCallback callback10, NetConfigCallback callback11,
                   NetConfigCallback callback12, NetConfigCallback callback13,
                   NetConfigCallback callback14) {
    D_011E0D14 = callback0;
    D_011E0D18 = callback1;
    D_011E0D1C = callback2;
    D_011E0D20 = callback3;
    D_011E0D24 = callback4;
    D_011E0D28 = callback5;
    D_011E0D2C = callback6;
    D_011E0D30 = callback7;
    D_011E0D34 = callback8;
    D_011E0D38 = callback9;
    D_011E0D3C = callback10;
    D_011E0D40 = callback11;
    D_011E0D44 = callback12;
    D_011E0D48 = callback13;
    D_011E0D4C = callback14;
}
