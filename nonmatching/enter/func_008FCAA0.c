/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int Pes6BitSet_Write(void *, int, int);
s32 func_008FCAA0(void *arg0, void *arg1, void *arg2) {
    Pes6BitSet_Write(arg0, 0xFE, M2C_FIELD(arg1, u8 *, 0xD) == 4);
    Pes6BitSet_Write(arg0, 0xFF, (M2C_FIELD(arg2, u8 *, 2) == 0) & ((M2C_FIELD(arg2, u8 *, 0) == 4) & (M2C_FIELD(arg2, u8 *, 1) == 0)));
    Pes6BitSet_Write(arg0, 0x100, (M2C_FIELD(arg2, u8 *, 2) == 1) & ((M2C_FIELD(arg2, u8 *, 0) == 3) & (M2C_FIELD(arg2, u8 *, 1) == 0)));
    Pes6BitSet_Write(arg0, 0x101, (M2C_FIELD(arg2, u8 *, 2) == 0) & ((M2C_FIELD(arg2, u8 *, 0) == 3) & (M2C_FIELD(arg2, u8 *, 1) == 1)));
    Pes6BitSet_Write(arg0, 0x102, (M2C_FIELD(arg2, u8 *, 2) == 2) & ((M2C_FIELD(arg2, u8 *, 0) == 2) & (M2C_FIELD(arg2, u8 *, 1) == 0)));
    Pes6BitSet_Write(arg0, 0x103, (M2C_FIELD(arg2, u8 *, 2) == 1) & ((M2C_FIELD(arg2, u8 *, 0) == 2) & (M2C_FIELD(arg2, u8 *, 1) == 1)));
    Pes6BitSet_Write(arg0, 0x104, (M2C_FIELD(arg2, u8 *, 2) == 0) & ((M2C_FIELD(arg2, u8 *, 0) == 2) & (M2C_FIELD(arg2, u8 *, 1) == 2)));
    Pes6BitSet_Write(arg0, 0x105, (M2C_FIELD(arg2, u8 *, 2) == 3) & ((M2C_FIELD(arg2, u8 *, 0) == 1) & (M2C_FIELD(arg2, u8 *, 1) == 0)));
    Pes6BitSet_Write(arg0, 0x106, (M2C_FIELD(arg2, u8 *, 2) == 2) & ((M2C_FIELD(arg2, u8 *, 0) == 1) & (M2C_FIELD(arg2, u8 *, 1) == 1)));
    Pes6BitSet_Write(arg0, 0x107, (M2C_FIELD(arg2, u8 *, 2) == 1) & ((M2C_FIELD(arg2, u8 *, 0) == 1) & (M2C_FIELD(arg2, u8 *, 1) == 2)));
    Pes6BitSet_Write(arg0, 0x108, (M2C_FIELD(arg2, u8 *, 2) == 0) & ((M2C_FIELD(arg2, u8 *, 0) == 1) & (M2C_FIELD(arg2, u8 *, 1) == 3)));
    Pes6BitSet_Write(arg0, 0x109, (M2C_FIELD(arg2, u8 *, 2) == 4) & ((M2C_FIELD(arg2, u8 *, 0) == 0) & (M2C_FIELD(arg2, u8 *, 1) == 0)));
    Pes6BitSet_Write(arg0, 0x10A, (M2C_FIELD(arg2, u8 *, 2) == 3) & ((M2C_FIELD(arg2, u8 *, 0) == 0) & (M2C_FIELD(arg2, u8 *, 1) == 1)));
    Pes6BitSet_Write(arg0, 0x10B, (M2C_FIELD(arg2, u8 *, 2) == 2) & ((M2C_FIELD(arg2, u8 *, 0) == 0) & (M2C_FIELD(arg2, u8 *, 1) == 2)));
    Pes6BitSet_Write(arg0, 0x10C, (M2C_FIELD(arg2, u8 *, 2) == 1) & ((M2C_FIELD(arg2, u8 *, 0) == 0) & (M2C_FIELD(arg2, u8 *, 1) == 3)));
    Pes6BitSet_Write(arg0, 0x10D, (M2C_FIELD(arg2, u8 *, 2) == 0) & ((M2C_FIELD(arg2, u8 *, 0) == 0) & (M2C_FIELD(arg2, u8 *, 1) == 4)));
    return 1;
}
