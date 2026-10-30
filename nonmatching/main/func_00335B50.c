/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int Pes6BitSet_Write(void *, int, int);
extern int Pes6BitSet_Lookup(void *, int);
extern s32 func_00340FC0(s32);
extern char D_005F1C85[];
extern char D_005F1CA0[];

s32 func_00335B50(void *arg0, void *arg1) {
    s32 temp_s0;
    u8 temp_a2;
    void *temp_s1;

    temp_s1 = M2C_FIELD(arg1, void **, 0x3C);
    temp_s0 = (*(s32 *)D_005F1CA0);
    temp_a2 = M2C_FIELD(temp_s1, u8 *, 0x3A);
    Pes6BitSet_Write(arg0, 0x4C, (temp_a2 == 4) | ((temp_a2 == 2) | (temp_a2 == 3)));
    Pes6BitSet_Write(arg0, 0x4D, M2C_FIELD(temp_s1, u8 *, 0x3A) == 2);
    Pes6BitSet_Write(arg0, 0x50, M2C_FIELD(temp_s1, u8 *, 0x3A) == 3);
    Pes6BitSet_Write(arg0, 0x53, (temp_s0 == 2) | (temp_s0 == 5));
    Pes6BitSet_Write(arg0, 0x57, (s32) M2C_FIELD(temp_s1, u8 *, 0x3C));
    Pes6BitSet_Write(arg0, 0x5B, (*(u8 *)D_005F1C85) == 0x10);
    Pes6BitSet_Write(arg0, 0x5C, temp_s0 == 3);
    Pes6BitSet_Write(arg0, 0x5F, func_00340FC0(temp_s0 & 0xFF));
    Pes6BitSet_Write(arg0, 0x63, M2C_FIELD(temp_s1, u8 *, 0x3D) == 0);
    Pes6BitSet_Write(arg0, 0x67, (s32) M2C_FIELD(temp_s1, u8 *, 0x3D));
    if (Pes6BitSet_Lookup(arg0, 0x4C) != 0) {
        M2C_FIELD(temp_s1, u8 *, 0x3D) = (u8) (M2C_FIELD(temp_s1, u8 *, 0x3D) + 1);
    }
    return 1;
}
