/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern u32 func_00B447A0(void);
extern s32 func_00B42D10(s32);
s32 func_00958000(u8);
extern u8 D_003EAE68;

void func_00B3DA70(void) {
    int value;
    u8 value2;
    u32 value3;
    int value4;
    int value5;
    value3 = func_00B447A0();
    if (value3 != 0) {
        value = 9;
        value = (*((s32 *)(((s8 *)value3) + 0x6B4))) != value;
        if (!value) {
            value2 = 0x5D;
        } else {
            value = 1;
            if (func_00B42D10(0) == value) {
                value5 = value;
                value4 = 0x56;
                if (func_00B42D10(value5) == value) {
                    value2 = 0x5B;
                } else {
                    value2 = value4;
                }
            } else if (func_00B42D10(1) == 1) {
                value2 = 0x5C;
            } else {
                value2 = 0x5D;
            }
        }
        if ((value2 & 0xFF) != D_003EAE68) {
            func_00958000(value2);
            D_003EAE68 = value2;
        }
    }
}
