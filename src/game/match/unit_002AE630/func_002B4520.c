/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 func_00207390(void *, s32);
extern void func_00207BE0(void *);
extern s32 func_00207D10(void *);
extern s32 func_00208610(void *);
extern void func_00209830(void *);
extern void func_002B45E0(void *);

void func_002B4520(void *arg0, s32 arg1, s32 arg2) {
    s32 value;
    s32 value2;

    value2 = arg2;
    if (2 == (arg1 & 0xFF)) {
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
        value2 = 0;
    }
    func_00209830(arg0);
    value = (0xFF & value2);
    if (1 == value) {
        func_00207BE0(arg0);
    } else {
        if (2 != value) {
            if (3 == value) {
                if (func_00207D10(arg0) != 0) {
                    func_00208610(arg0);
                    func_00207390(arg0, 4);
                }
            }
        } else {
            func_002B45E0(arg0);
        }
    }
}
