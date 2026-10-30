/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int Pes6BitSet_Write(void *, int, int);
s32 func_0036B580(void *arg0, void *arg1) {
    s32 temp_s0_2;
    u8 temp_s0;

    temp_s0 = M2C_FIELD(arg1, u8 *, 0x1E);
    Pes6BitSet_Write(arg0, 0x15, M2C_FIELD(arg1, u8 *, 0x1D) == 0);
    temp_s0_2 = temp_s0 & 0xFF;
    Pes6BitSet_Write(arg0, 0x16, temp_s0_2 < 6);
    Pes6BitSet_Write(arg0, 0x17, temp_s0_2 == 0);
    Pes6BitSet_Write(arg0, 0x18, temp_s0_2 == 1);
    Pes6BitSet_Write(arg0, 0x19, temp_s0_2 == 2);
    Pes6BitSet_Write(arg0, 0x1A, temp_s0_2 == 3);
    Pes6BitSet_Write(arg0, 0x1B, temp_s0_2 == 4);
    Pes6BitSet_Write(arg0, 0x1C, temp_s0_2 == 5);
    Pes6BitSet_Write(arg0, 0x1D, temp_s0_2 == 6);
    Pes6BitSet_Write(arg0, 0x1E, temp_s0_2 == 7);
    Pes6BitSet_Write(arg0, 0x1F, temp_s0_2 == 8);
    Pes6BitSet_Write(arg0, 0x20, temp_s0_2 == 9);
    Pes6BitSet_Write(arg0, 0x21, temp_s0_2 == 0xA);
    Pes6BitSet_Write(arg0, 0x22, temp_s0_2 == 0xB);
    Pes6BitSet_Write(arg0, 0x23, temp_s0_2 == 0xC);
    Pes6BitSet_Write(arg0, 0x24, temp_s0_2 == 0xD);
    Pes6BitSet_Write(arg0, 0x25, temp_s0_2 == 0xE);
    Pes6BitSet_Write(arg0, 0x26, temp_s0_2 == 0xF);
    Pes6BitSet_Write(arg0, 0x27, temp_s0_2 == 0x10);
    Pes6BitSet_Write(arg0, 0x28, temp_s0_2 == 0x11);
    Pes6BitSet_Write(arg0, 0x29, temp_s0_2 == 0x12);
    Pes6BitSet_Write(arg0, 0x2A, temp_s0_2 == 0x13);
    Pes6BitSet_Write(arg0, 0x2B, temp_s0_2 == 0x14);
    Pes6BitSet_Write(arg0, 0x2C, temp_s0_2 == 0x15);
    Pes6BitSet_Write(arg0, 0x2D, temp_s0_2 == 0x16);
    Pes6BitSet_Write(arg0, 0x2E, temp_s0_2 == 0x17);
    Pes6BitSet_Write(arg0, 0x2F, temp_s0_2 == 0x18);
    Pes6BitSet_Write(arg0, 0x30, temp_s0_2 == 0x19);
    Pes6BitSet_Write(arg0, 0x31, temp_s0_2 == 0x1A);
    Pes6BitSet_Write(arg0, 0x32, temp_s0_2 == 0x1B);
    Pes6BitSet_Write(arg0, 0x33, temp_s0_2 == 0x1C);
    Pes6BitSet_Write(arg0, 0x34, temp_s0_2 == 0x1D);
    Pes6BitSet_Write(arg0, 0x35, temp_s0_2 == 0x1E);
    Pes6BitSet_Write(arg0, 0x36, temp_s0_2 == 0x1F);
    Pes6BitSet_Write(arg0, 0x37, temp_s0_2 == 0x20);
    Pes6BitSet_Write(arg0, 0x38, temp_s0_2 == 0x21);
    Pes6BitSet_Write(arg0, 0x39, temp_s0_2 == 0x22);
    Pes6BitSet_Write(arg0, 0x3A, temp_s0_2 == 0x23);
    Pes6BitSet_Write(arg0, 0x3B, temp_s0_2 == 0x24);
    Pes6BitSet_Write(arg0, 0x3C, temp_s0_2 == 0x25);
    Pes6BitSet_Write(arg0, 0x3D, temp_s0_2 == 0x26);
    Pes6BitSet_Write(arg0, 0x3E, temp_s0_2 == 0x27);
    Pes6BitSet_Write(arg0, 0x3F, temp_s0_2 == 0x28);
    Pes6BitSet_Write(arg0, 0x40, temp_s0_2 == 0x29);
    Pes6BitSet_Write(arg0, 0x41, temp_s0_2 == 0x2A);
    Pes6BitSet_Write(arg0, 0x42, temp_s0_2 == 0x2B);
    Pes6BitSet_Write(arg0, 0x43, temp_s0_2 == 0x2C);
    Pes6BitSet_Write(arg0, 0x44, temp_s0_2 == 0x2D);
    Pes6BitSet_Write(arg0, 0x45, M2C_FIELD((arg1 + 0x18), s32 *, 0x2C) & 4);
    return 1;
}
