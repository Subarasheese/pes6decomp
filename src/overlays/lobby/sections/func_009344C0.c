/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_0082C2A0(void);
extern s32 func_0082CA50(s32, s32);
extern s32 func_0082C840(s32);
extern s32 func_0082C690(s32, s32);
extern s32 func_00862110(s32, s32);
extern s32 func_009368B0(s32);

int func_009344C0(void) {
    int value;
    int value2;

    value = func_0082C2A0();
    if (value == 0) {
        func_0082CA50(0x97, 0);
        func_0082C840(0xf);
        func_0082C690(0xf, 0);
        value = 2;
    } else {
        value2 = func_00862110(value, 3);
        if (value2 == 1) {
            value = 3;
        } else {
            value2 = func_00862110(value, 8);
            if (value2 == 1) {
                value = 8;
            } else {
                value2 = func_00862110(value, 4);
                if (value2 == 1) {
                    value = 4;
                } else {
                    value = func_00862110(value, 5);
                    if (value == 1) {
                        value = 5;
                    } else {
                        func_0082CA50(0x97, 0);
                        func_0082C840(0xf);
                        func_0082C690(0xf, 0);
                        return 2;
                    }
                }
            }
        }
        value = func_009368B0(value);
    }
    return value;
}
