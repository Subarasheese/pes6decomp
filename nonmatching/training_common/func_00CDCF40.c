/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00212E00(M2C_UNK, s32);                /* extern */
s32 func_00213180(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00213820(s32, M2C_UNK);                /* extern */
s32 func_00CE2B40();                                /* extern */
extern void *D_003E7E1C;
extern char D_00CF97B0[];
extern char D_00CF97C0[];
extern char D_00CF97E0[];
extern char D_00CF97F0[];

void func_00CDCF40(void) {
    s32 temp_v0;

    temp_v0 = func_00CE2B40();
    switch (temp_v0) {                              /* irregular */
    case 0:
        func_00213820(func_00213180(0, ((void *)D_00CF97B0), 0, 4, 0), 0);
        func_00212E00(0, M2C_FIELD(D_003E7E1C, s32 *, 0x14C));
        return;
    case 1:
        func_00213820(func_00213180(0, ((void *)D_00CF97C0), 0, 5, 0), 0);
        func_00212E00(0, M2C_FIELD(D_003E7E1C, s32 *, 0x14C));
        return;
    case 2:
        func_00213820(func_00213180(0, ((void *)D_00CF97E0), 0, 4, 0), 0);
        func_00212E00(0, M2C_FIELD(D_003E7E1C, s32 *, 0x14C));
        return;
    case 3:
        func_00213820(func_00213180(0, ((void *)D_00CF97F0), 0, 5, 0), 0);
        func_00212E00(0, M2C_FIELD(D_003E7E1C, s32 *, 0x14C));
        return;
    default:
        func_00213820(func_00213180(0, (M2C_UNK *)0xCF97B0, 0, 4, 0), 0);
        func_00212E00(0, M2C_FIELD(D_003E7E1C, s32 *, 0x14C));
        return;
    }
}
