/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_0030E5B0();                                /* extern */
M2C_UNK Pes6BitSet_Write(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_003264D0(s32 *, s32 *, u8);            /* extern */
M2C_UNK func_003266C0(s32 *, s32 *, u8);            /* extern */
M2C_UNK func_003414D0(u8 *, M2C_UNK, M2C_UNK);      /* extern */

s32 func_008FD540(s32 arg0, s32 *arg1) {
    s32 sp34;
    s32 sp38;
    u8 sp3F;
    s32 temp_v1;

    if (*arg1 == 0x11) {
        if (func_0030E5B0() == 1) {
            sp3F = 0;
        } else {
            sp3F = 1;
        }
    } else {
        func_003414D0(&sp3F, 2, 0xFF);
    }
    func_003266C0(&sp38, arg1, sp3F);
    temp_v1 = *arg1;
    switch (temp_v1) {                              /* irregular */
    case 17:
        /* fallthrough */
    case 11:
        sp34 = M2C_FIELD(&arg1[sp3F], s32 *, 0x8DC);
        break;
    default:
        func_003264D0(&sp34, arg1, sp3F);
        break;
    }
    Pes6BitSet_Write(arg0, 0x42, sp34 != 4);
    Pes6BitSet_Write(arg0, 0x43, sp34 == 1);
    Pes6BitSet_Write(arg0, 0x44, sp38 & 1);
    Pes6BitSet_Write(arg0, 0x45, sp38 & 2);
    Pes6BitSet_Write(arg0, 0x46, sp38 & 8);
    Pes6BitSet_Write(arg0, 0x47, sp38 & 0x10);
    Pes6BitSet_Write(arg0, 0x48, sp38 & 0x20);
    Pes6BitSet_Write(arg0, 0x49, sp38 & 0x40);
    Pes6BitSet_Write(arg0, 0x4A, sp38 & 0x80);
    Pes6BitSet_Write(arg0, 0x4B, sp38 & 0x100);
    Pes6BitSet_Write(arg0, 0x4C, sp38 & 0x200);
    Pes6BitSet_Write(arg0, 0x4D, sp38 & 0x400);
    Pes6BitSet_Write(arg0, 0x4E, sp38 & 0x800);
    Pes6BitSet_Write(arg0, 0x5E, sp34 == 3);
    Pes6BitSet_Write(arg0, 0x5F, sp38 & 0x1000);
    Pes6BitSet_Write(arg0, 0x60, sp38 & 0x4000);
    Pes6BitSet_Write(arg0, 0x61, sp38 & 0x2000);
    Pes6BitSet_Write(arg0, 0x62, sp38 & 0x8000);
    Pes6BitSet_Write(arg0, 0x63, sp38 & 0x10000);
    Pes6BitSet_Write(arg0, 0x4F, sp34 == 2);
    Pes6BitSet_Write(arg0, 0x50, sp38 & 0x20000);
    Pes6BitSet_Write(arg0, 0x51, sp38 & 0x40000);
    Pes6BitSet_Write(arg0, 0x52, sp38 & 0x01000000);
    Pes6BitSet_Write(arg0, 0x54, sp38 & 0x40000);
    Pes6BitSet_Write(arg0, 0x55, sp38 & 0x80000);
    Pes6BitSet_Write(arg0, 0x56, sp38 & 0x200000);
    Pes6BitSet_Write(arg0, 0x57, sp38 & 0x400000);
    Pes6BitSet_Write(arg0, 0x58, sp38 & 0x800000);
    Pes6BitSet_Write(arg0, 0x59, sp38 & 0x01000000);
    Pes6BitSet_Write(arg0, 0x5A, sp38 & 0x02000000);
    Pes6BitSet_Write(arg0, 0x5B, sp38 & 0x04000000);
    Pes6BitSet_Write(arg0, 0x5C, sp38 & 0x08000000);
    return 1;
}
