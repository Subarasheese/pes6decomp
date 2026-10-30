/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int Pes6BitSet_Write(void *, int, int);
s32 func_0036B170(void *arg0, void *arg1) {
    s32 temp_s0_2;
    u8 temp_s0;

    temp_s0 = M2C_FIELD(arg1, u8 *, 0x1E);
    Pes6BitSet_Write(arg0, 0x46, M2C_FIELD(arg1, u8 *, 0x1D) == 1);
    temp_s0_2 = temp_s0 & 0xFF;
    Pes6BitSet_Write(arg0, 0x47, temp_s0_2 < 0x33);
    Pes6BitSet_Write(arg0, 0x48, temp_s0_2 == 0x2D);
    Pes6BitSet_Write(arg0, 0x49, temp_s0_2 == 0x2E);
    Pes6BitSet_Write(arg0, 0x4A, temp_s0_2 == 0x2F);
    Pes6BitSet_Write(arg0, 0x4B, temp_s0_2 == 0x30);
    Pes6BitSet_Write(arg0, 0x4C, temp_s0_2 == 0x31);
    Pes6BitSet_Write(arg0, 0x4D, temp_s0_2 == 0x32);
    Pes6BitSet_Write(arg0, 0x4E, temp_s0_2 == 0x33);
    Pes6BitSet_Write(arg0, 0x4F, temp_s0_2 == 0x34);
    Pes6BitSet_Write(arg0, 0x50, temp_s0_2 == 0x35);
    Pes6BitSet_Write(arg0, 0x51, temp_s0_2 == 0x36);
    Pes6BitSet_Write(arg0, 0x52, temp_s0_2 == 0x37);
    Pes6BitSet_Write(arg0, 0x53, temp_s0_2 == 0x38);
    Pes6BitSet_Write(arg0, 0x54, temp_s0_2 == 0x39);
    Pes6BitSet_Write(arg0, 0x55, temp_s0_2 == 0x3A);
    Pes6BitSet_Write(arg0, 0x56, temp_s0_2 == 0x3B);
    Pes6BitSet_Write(arg0, 0x57, temp_s0_2 == 0x3C);
    Pes6BitSet_Write(arg0, 0x58, temp_s0_2 == 0x3D);
    Pes6BitSet_Write(arg0, 0x59, temp_s0_2 == 0x3E);
    Pes6BitSet_Write(arg0, 0x5A, temp_s0_2 == 0x3F);
    Pes6BitSet_Write(arg0, 0x5B, temp_s0_2 == 0x40);
    Pes6BitSet_Write(arg0, 0x5C, temp_s0_2 == 0x41);
    Pes6BitSet_Write(arg0, 0x5D, temp_s0_2 == 0x42);
    Pes6BitSet_Write(arg0, 0x5E, temp_s0_2 == 0x43);
    Pes6BitSet_Write(arg0, 0x5F, temp_s0_2 == 0x44);
    Pes6BitSet_Write(arg0, 0x60, temp_s0_2 == 0x45);
    Pes6BitSet_Write(arg0, 0x61, temp_s0_2 == 0x46);
    Pes6BitSet_Write(arg0, 0x62, temp_s0_2 == 0x47);
    Pes6BitSet_Write(arg0, 0x63, temp_s0_2 == 0x48);
    Pes6BitSet_Write(arg0, 0x64, temp_s0_2 == 0x49);
    Pes6BitSet_Write(arg0, 0x65, temp_s0_2 == 0x4A);
    Pes6BitSet_Write(arg0, 0x66, temp_s0_2 == 0x4B);
    Pes6BitSet_Write(arg0, 0x67, temp_s0_2 == 0x4C);
    Pes6BitSet_Write(arg0, 0x68, temp_s0_2 == 0x4D);
    Pes6BitSet_Write(arg0, 0x69, temp_s0_2 == 0x4E);
    Pes6BitSet_Write(arg0, 0x6A, temp_s0_2 == 0x4F);
    Pes6BitSet_Write(arg0, 0x6B, temp_s0_2 == 0x50);
    Pes6BitSet_Write(arg0, 0x6C, temp_s0_2 == 0x51);
    Pes6BitSet_Write(arg0, 0x6D, temp_s0_2 == 0x52);
    Pes6BitSet_Write(arg0, 0x6E, temp_s0_2 == 0x53);
    Pes6BitSet_Write(arg0, 0x6F, temp_s0_2 == 0x54);
    Pes6BitSet_Write(arg0, 0x70, temp_s0_2 == 0x55);
    Pes6BitSet_Write(arg0, 0x71, temp_s0_2 == 0x56);
    Pes6BitSet_Write(arg0, 0x72, temp_s0_2 == 0x57);
    Pes6BitSet_Write(arg0, 0x73, temp_s0_2 == 0x58);
    Pes6BitSet_Write(arg0, 0x74, temp_s0_2 == 0x59);
    Pes6BitSet_Write(arg0, 0x75, temp_s0_2 == 0x5A);
    Pes6BitSet_Write(arg0, 0x76, M2C_FIELD((arg1 + 0x18), s32 *, 0x2C) & 4);
    return 1;
}
