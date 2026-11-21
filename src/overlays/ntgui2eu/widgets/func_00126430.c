/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern s32 func_001266E0(void);

extern char D_005B5944[];
extern char D_011D4418[];

void func_00126430(s32 arg0, void *arg1) {
    if (!((u32)((*(s32 *)D_011D4418) - 2) >= 2U)) {
        return;
    }
    if (M2C_FIELD(arg1, s32 *, 0x1C) == ((*(s32 *)D_005B5944) + 1)) {
        func_001266E0();
    }
}
