/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern int func_001BB430(int);
extern void func_001BB060(void *, s32, s32, s32);
s32 func_001BB080(s32);
s32 func_001BB250(s32, s32);

void func_001BB4F0(void *arg0, s32 arg1) {
    s32 value;
    s32 value2;
    s32 value3;
    s32 value4;
    s32 value5;

    if (arg0 != NULL) {
        value = 0;
        if (arg0 != NULL) {
            value4 = 0;
            if (arg0 != NULL) {
                value4 = M2C_FIELD(arg0, s32 *, 0);
            }
            if (value4 == 0) {
                value = 1;
            }
        }
        if (!(value == 0)) {
            if ((arg0 != NULL) && (arg1 != 0)) {
                value3 = 0;
                if (arg0 != NULL) {
                    value5 = 0;
                    if (arg0 != NULL) {
                        value5 = M2C_FIELD(arg0, s32 *, 0);
                    }
                    if (value5 == 0) {
                        value3 = 1;
                    }
                }
                if (value3 != 0) {
                    if (func_001BB430(arg1) != 0) {
                        func_001BB080(arg1);
                    }
                    M2C_FIELD(arg0, s32 *, 4) = arg1;
                    M2C_FIELD(arg0, s32 *, 8) = arg1;
                    func_001BB060((void *)arg1, 0, 0, (s32)arg0);
                    if (arg0 != NULL) {
                        M2C_FIELD(arg0, s32 *, 0) = (s32)(M2C_FIELD(arg0, s32 *, 0) + 1);
                    }
                }
            }
        } else {
            value2 = 0;
            if (arg0 != NULL) {
                value2 = M2C_FIELD(arg0, s32 *, 8);
            }
            func_001BB250(value2, arg1);
        }
    }
}
