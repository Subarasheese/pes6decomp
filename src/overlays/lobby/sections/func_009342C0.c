/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_0082C2A0(void);
extern s32 func_0082C920(s32);
extern s32 func_0082C840(s32);
extern s32 func_0082C690(s32, s32);
extern s32 func_00862110(s32, s32);
extern s32 func_00936260(s32, s32, s32);

int func_009342C0(int arg0, int arg1) {
    int value;
    int value2;

    value = func_0082C2A0();
    if (value == 0) {
        func_0082C920(0x9f);
        func_0082C840(0xae);
        func_0082C690(0xae, 0);
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
                        func_0082C920(0x9f);
                        func_0082C840(0xae);
                        func_0082C690(0xae, 0);
                        return 2;
                    }
                }
            }
        }
        value = func_00936260(value, arg0, arg1);
    }
    return value;
}
