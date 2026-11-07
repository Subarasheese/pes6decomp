/* compiler: ee-gcc-2.9-Os-G0 */
#include "pes6/m2c.h"

void func_0019EE30(void *, s32, s32, void *, s32, void *, s32, s32, s32);
void func_001B02B0(void *, s32);
extern char D_011E3980[];
extern char D_011E3A00[];

void func_00159480(s32 arg0) {
    char *p = D_011E3A00;

    func_001B02B0(p + 0x230, arg0);
    func_0019EE30(D_011E3980, 0x13, 1, p, 0x1000, p, 0x1000, 0, 0);
}
