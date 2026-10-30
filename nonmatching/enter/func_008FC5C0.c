/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int Pes6BitSet_Write(void *, int, int);
s32 func_008FC5C0(void *arg0, void *arg1, void *arg2) {
    Pes6BitSet_Write(arg0, 0x10E, M2C_FIELD(arg1, u8 *, 0xD) == 5);
    Pes6BitSet_Write(arg0, 0x10F, (M2C_FIELD(arg2, u8 *, 2) == 0) & ((M2C_FIELD(arg2, u8 *, 0) == 5) & (M2C_FIELD(arg2, u8 *, 1) == 0)));
    Pes6BitSet_Write(arg0, 0x110, (M2C_FIELD(arg2, u8 *, 2) == 1) & ((M2C_FIELD(arg2, u8 *, 0) == 4) & (M2C_FIELD(arg2, u8 *, 1) == 0)));
    Pes6BitSet_Write(arg0, 0x111, (M2C_FIELD(arg2, u8 *, 2) == 0) & ((M2C_FIELD(arg2, u8 *, 0) == 4) & (M2C_FIELD(arg2, u8 *, 1) == 1)));
    Pes6BitSet_Write(arg0, 0x112, (M2C_FIELD(arg2, u8 *, 2) == 2) & ((M2C_FIELD(arg2, u8 *, 0) == 3) & (M2C_FIELD(arg2, u8 *, 1) == 0)));
    Pes6BitSet_Write(arg0, 0x113, (M2C_FIELD(arg2, u8 *, 2) == 1) & ((M2C_FIELD(arg2, u8 *, 0) == 3) & (M2C_FIELD(arg2, u8 *, 1) == 1)));
    Pes6BitSet_Write(arg0, 0x114, (M2C_FIELD(arg2, u8 *, 2) == 0) & ((M2C_FIELD(arg2, u8 *, 0) == 3) & (M2C_FIELD(arg2, u8 *, 1) == 2)));
    Pes6BitSet_Write(arg0, 0x115, (M2C_FIELD(arg2, u8 *, 2) == 3) & ((M2C_FIELD(arg2, u8 *, 0) == 2) & (M2C_FIELD(arg2, u8 *, 1) == 0)));
    Pes6BitSet_Write(arg0, 0x116, (M2C_FIELD(arg2, u8 *, 2) == 2) & ((M2C_FIELD(arg2, u8 *, 0) == 2) & (M2C_FIELD(arg2, u8 *, 1) == 1)));
    Pes6BitSet_Write(arg0, 0x117, (M2C_FIELD(arg2, u8 *, 2) == 1) & ((M2C_FIELD(arg2, u8 *, 0) == 2) & (M2C_FIELD(arg2, u8 *, 1) == 2)));
    Pes6BitSet_Write(arg0, 0x118, (M2C_FIELD(arg2, u8 *, 2) == 0) & ((M2C_FIELD(arg2, u8 *, 0) == 2) & (M2C_FIELD(arg2, u8 *, 1) == 3)));
    Pes6BitSet_Write(arg0, 0x119, (M2C_FIELD(arg2, u8 *, 2) == 4) & ((M2C_FIELD(arg2, u8 *, 0) == 1) & (M2C_FIELD(arg2, u8 *, 1) == 0)));
    Pes6BitSet_Write(arg0, 0x11A, (M2C_FIELD(arg2, u8 *, 2) == 3) & ((M2C_FIELD(arg2, u8 *, 0) == 1) & (M2C_FIELD(arg2, u8 *, 1) == 1)));
    Pes6BitSet_Write(arg0, 0x11B, (M2C_FIELD(arg2, u8 *, 2) == 2) & ((M2C_FIELD(arg2, u8 *, 0) == 1) & (M2C_FIELD(arg2, u8 *, 1) == 2)));
    Pes6BitSet_Write(arg0, 0x11C, (M2C_FIELD(arg2, u8 *, 2) == 1) & ((M2C_FIELD(arg2, u8 *, 0) == 1) & (M2C_FIELD(arg2, u8 *, 1) == 3)));
    Pes6BitSet_Write(arg0, 0x11D, (M2C_FIELD(arg2, u8 *, 2) == 0) & ((M2C_FIELD(arg2, u8 *, 0) == 1) & (M2C_FIELD(arg2, u8 *, 1) == 4)));
    Pes6BitSet_Write(arg0, 0x11E, (M2C_FIELD(arg2, u8 *, 2) == 5) & ((M2C_FIELD(arg2, u8 *, 0) == 0) & (M2C_FIELD(arg2, u8 *, 1) == 0)));
    Pes6BitSet_Write(arg0, 0x11F, (M2C_FIELD(arg2, u8 *, 2) == 4) & ((M2C_FIELD(arg2, u8 *, 0) == 0) & (M2C_FIELD(arg2, u8 *, 1) == 1)));
    Pes6BitSet_Write(arg0, 0x120, (M2C_FIELD(arg2, u8 *, 2) == 3) & ((M2C_FIELD(arg2, u8 *, 0) == 0) & (M2C_FIELD(arg2, u8 *, 1) == 2)));
    Pes6BitSet_Write(arg0, 0x121, (M2C_FIELD(arg2, u8 *, 2) == 2) & ((M2C_FIELD(arg2, u8 *, 0) == 0) & (M2C_FIELD(arg2, u8 *, 1) == 3)));
    Pes6BitSet_Write(arg0, 0x122, (M2C_FIELD(arg2, u8 *, 2) == 1) & ((M2C_FIELD(arg2, u8 *, 0) == 0) & (M2C_FIELD(arg2, u8 *, 1) == 4)));
    Pes6BitSet_Write(arg0, 0x123, (M2C_FIELD(arg2, u8 *, 2) == 0) & ((M2C_FIELD(arg2, u8 *, 0) == 0) & (M2C_FIELD(arg2, u8 *, 1) == 5)));
    return 1;
}
