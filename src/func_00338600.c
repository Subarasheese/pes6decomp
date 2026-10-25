/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 D_005F1CC4[];
extern char D_003E5F20[];
s32 func_00338AD0(s32, void *, s32, void *);
void func_003385B0(void);

s32 func_00338600(s32 value) {
    D_005F1CC4[0] = value;
    func_00338AD0(0x38, func_003385B0, 2, D_003E5F20);
    return 1;
}
