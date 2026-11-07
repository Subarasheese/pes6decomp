/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"
extern void func_0011FA98(void *);
extern char D_011D40C0[];
extern s32 D_011D40E8[];
void func_00120298(s32 arg0) {
    func_0011FA98((arg0 * 0x14) + ((void *)D_011D40C0));
    D_011D40E8[0] = 0;
}
