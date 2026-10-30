/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0030D9F0(void *, s32);
extern int func_0030E360(void *, int, int);
extern int Pes6BitSet_Write(void *, int, int);
extern int func_0030E3E0(void *, int, int);
s32 func_00352870(void *arg0, void *arg1) {
    s32 sp34;
    s32 sp38;
    u8 sp3E;
    u8 sp3F;
    s32 var_a2;

    func_0030D9F0(&sp3F, (s32) M2C_FIELD(arg1, u8 *, 8));
    func_0030D9F0(&sp3E, (s32) M2C_FIELD(arg1, u8 *, 9));
    func_0030E3E0(&sp38, (s32) M2C_FIELD(arg1, u8 *, 5), (s32) M2C_FIELD(arg1, u8 *, 6));
    func_0030E360(&sp34, (s32) M2C_FIELD(arg1, u8 *, 5), (s32) M2C_FIELD(arg1, u8 *, 6));
    var_a2 = sp3F != 0;
    if (var_a2 != 0) {
        var_a2 = sp3E != 0;
    }
    Pes6BitSet_Write(arg0, 0x54, var_a2);
    Pes6BitSet_Write(arg0, 0x56, sp3F == 3);
    Pes6BitSet_Write(arg0, 0x57, sp3F == 1);
    Pes6BitSet_Write(arg0, 0x58, sp3F == 2);
    Pes6BitSet_Write(arg0, 0x5A, sp3F == 3);
    Pes6BitSet_Write(arg0, 0x5B, sp3F == 2);
    Pes6BitSet_Write(arg0, 0x5C, M2C_FIELD(arg1, u8 *, 8) == 9);
    Pes6BitSet_Write(arg0, 0x5E, sp3F == 1);
    Pes6BitSet_Write(arg0, 0x60, sp3F == 2);
    Pes6BitSet_Write(arg0, 0x61, sp3F == 1);
    Pes6BitSet_Write(arg0, 0x62, sp38 >= 0x55);
    Pes6BitSet_Write(arg0, 0x63, sp34 >= 0x55);
    return 1;
}
