/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern void func_00295730(void);
extern void func_00BA99D0(s32);

void func_00BA9800(s32 arg0, s32 arg1) {
    switch (arg0) {
    case 0:
        func_00BA99D0(arg1);
        break;
    case 1:
        break;
    case 2:
        func_00295730();
        break;
    }
}
