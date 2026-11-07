/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 D_005924A0[];
extern s32 D_005924A4[];
extern s32 D_005924A8[];
extern void (*D_005924AC[])(void);
void func_001F8DE0(void);

void func_001F8EE0(void) {
    D_005924A0[0] = 0;
    D_005924A4[0] = 0;
    D_005924A8[0] = 0;
    D_005924AC[0] = func_001F8DE0;
}
