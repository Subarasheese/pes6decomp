/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 D_0051FFA8[];
extern s32 D_0051FFAC[];
extern char D_00520360[];
s32 func_001CE690(void);
s32 func_0017F9A0(s32, void (*)(void), s32 *, s32, void *);
void func_001A23E0(void);

void func_001A16F0(s32 arg) {
    D_0051FFA8[0] = 0;
    D_0051FFAC[0] = 0;
    while (func_0017F9A0(func_001CE690(), func_001A23E0, &arg, 4, D_00520360) != 1) {
    }
}
