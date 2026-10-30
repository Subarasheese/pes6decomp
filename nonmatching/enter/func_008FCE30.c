/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int Pes6BitSet_Write(void *, int, int);
s32 func_008FCE30(void *arg0, void *arg1, void *arg2) {
    Pes6BitSet_Write(arg0, 0x7A, M2C_FIELD(arg1, u8 *, 0xD) == 3);
    Pes6BitSet_Write(arg0, 0x7B, (M2C_FIELD(arg2, u8 *, 2) == 0) & ((M2C_FIELD(arg2, u8 *, 0) == 3) & (M2C_FIELD(arg2, u8 *, 1) == 0)));
    Pes6BitSet_Write(arg0, 0x7C, (M2C_FIELD(arg2, u8 *, 2) == 1) & ((M2C_FIELD(arg2, u8 *, 0) == 2) & (M2C_FIELD(arg2, u8 *, 1) == 0)));
    Pes6BitSet_Write(arg0, 0x7D, (M2C_FIELD(arg2, u8 *, 2) == 0) & ((M2C_FIELD(arg2, u8 *, 0) == 2) & (M2C_FIELD(arg2, u8 *, 1) == 1)));
    Pes6BitSet_Write(arg0, 0x7E, (M2C_FIELD(arg2, u8 *, 2) == 3) & ((M2C_FIELD(arg2, u8 *, 0) == 1) & (M2C_FIELD(arg2, u8 *, 1) == 0)));
    Pes6BitSet_Write(arg0, 0x7F, (M2C_FIELD(arg2, u8 *, 2) == 1) & ((M2C_FIELD(arg2, u8 *, 0) == 1) & (M2C_FIELD(arg2, u8 *, 1) == 1)));
    Pes6BitSet_Write(arg0, 0x80, (M2C_FIELD(arg2, u8 *, 2) == 0) & ((M2C_FIELD(arg2, u8 *, 0) == 1) & (M2C_FIELD(arg2, u8 *, 1) == 2)));
    Pes6BitSet_Write(arg0, 0x81, (M2C_FIELD(arg2, u8 *, 2) == 3) & ((M2C_FIELD(arg2, u8 *, 0) == 0) & (M2C_FIELD(arg2, u8 *, 1) == 0)));
    Pes6BitSet_Write(arg0, 0xFB, (M2C_FIELD(arg2, u8 *, 2) == 2) & ((M2C_FIELD(arg2, u8 *, 0) == 0) & (M2C_FIELD(arg2, u8 *, 1) == 1)));
    Pes6BitSet_Write(arg0, 0xFC, (M2C_FIELD(arg2, u8 *, 2) == 1) & ((M2C_FIELD(arg2, u8 *, 0) == 0) & (M2C_FIELD(arg2, u8 *, 1) == 2)));
    Pes6BitSet_Write(arg0, 0xFD, (M2C_FIELD(arg2, u8 *, 2) == 0) & ((M2C_FIELD(arg2, u8 *, 0) == 0) & (M2C_FIELD(arg2, u8 *, 1) == 3)));
    return 1;
}
