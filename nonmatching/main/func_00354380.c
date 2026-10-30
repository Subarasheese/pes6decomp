/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00326040(void *, s32);
extern int Pes6BitSet_Write(void *, int, int);
extern s32 func_00310800(void *, s32);
extern int func_00335390(void);
extern int Pes6BitSet_Lookup(void *, int);
extern s32 func_003389D0(s32, s32);
extern s32 func_003107E0(void *, s32);
extern s32 func_00310820(void *, s32);
extern char D_00591BC3[];

s32 func_00354380(void *arg0, void *arg1) {
    s32 sp60;
    s32 sp64;
    s32 sp68;
    s32 sp6C;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s0_4;
    s32 temp_s0_5;
    s32 temp_s0_6;
    s32 temp_s0_7;
    s32 temp_s2;
    s32 temp_s4;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_a2_3;
    s32 var_s0;
    s32 var_s1;
    void *temp_s1;

    temp_s1 = M2C_FIELD(arg1, void **, 0x44);
    temp_s0 = func_003389D0((s32) arg1, 0);
    temp_s4 = func_003389D0((s32) arg1, 1);
    temp_s2 = func_00326040(temp_s1, func_003389D0((s32) arg1, 2));
    if (temp_s0 != 0) {
        var_s1 = 0;
    } else if (temp_s4 == 0) {
        var_s1 = 0;
    } else {
        var_s1 = 1;
    }
    func_00310820(&sp6C, var_s1);
    func_00310800(&sp68, var_s1);
    var_a2 = temp_s0 != 0;
    if (var_a2 != 0) {
        var_a2 = temp_s4 != 0;
    }
    Pes6BitSet_Write(arg0, 5, var_a2);
    Pes6BitSet_Write(arg0, 6, temp_s2);
    Pes6BitSet_Write(arg0, 7, temp_s0);
    Pes6BitSet_Write(arg0, 8, temp_s4);
    Pes6BitSet_Write(arg0, 9, Pes6BitSet_Lookup(arg0, 5) == 0);
    var_s0 = 0;
    func_00310800(&sp64, var_s1);
    func_003107E0(&sp60, var_s1);
    if (((*(u8 *)D_00591BC3) == (sp60 + sp64)) && (sp6C != 0)) {
        var_s0 = 1;
    }
    Pes6BitSet_Write(arg0, 0xB, var_s0);
    Pes6BitSet_Write(arg0, 0xC, sp6C == 1);
    Pes6BitSet_Write(arg0, 0xD, sp6C == 2);
    Pes6BitSet_Write(arg0, 0xE, sp6C == 3);
    Pes6BitSet_Write(arg0, 0xF, sp6C == 4);
    Pes6BitSet_Write(arg0, 0x10, sp6C == 5);
    temp_s0_2 = Pes6BitSet_Lookup(arg0, 0xB);
    temp_s0_3 = temp_s0_2 | Pes6BitSet_Lookup(arg0, 0xC);
    temp_s0_4 = Pes6BitSet_Lookup(arg0, 0xD) | temp_s0_3;
    temp_s0_5 = Pes6BitSet_Lookup(arg0, 0xE) | temp_s0_4;
    temp_s0_6 = Pes6BitSet_Lookup(arg0, 0xF) | temp_s0_5;
    Pes6BitSet_Write(arg0, 0xA, Pes6BitSet_Lookup(arg0, 0x10) | temp_s0_6);
    Pes6BitSet_Write(arg0, 0x12, temp_s2);
    Pes6BitSet_Write(arg0, 0x13, sp68 == 1);
    Pes6BitSet_Write(arg0, 0x14, sp68 < 4);
    Pes6BitSet_Write(arg0, 0x17, sp68 == 3);
    Pes6BitSet_Write(arg0, 0x15, sp68 >= 2);
    Pes6BitSet_Write(arg0, 0x16, sp68 >= 1);
    Pes6BitSet_Write(arg0, 0x1A, Pes6BitSet_Lookup(arg0, 0x17));
    Pes6BitSet_Write(arg0, 0x18, Pes6BitSet_Lookup(arg0, 0x15));
    Pes6BitSet_Write(arg0, 0x19, Pes6BitSet_Lookup(arg0, 0x16));
    Pes6BitSet_Write(arg0, 0x1B, sp68 == 1);
    Pes6BitSet_Write(arg0, 0x1E, temp_s2);
    var_a2_2 = Pes6BitSet_Lookup(arg0, 0x12) != 0;
    if (var_a2_2 != 0) {
        var_a2_2 = Pes6BitSet_Lookup(arg0, 0x14) != 0;
    }
    if (var_a2_2 == 0) {
        var_a2_2 = Pes6BitSet_Lookup(arg0, 0x1B) != 0;
    }
    Pes6BitSet_Write(arg0, 0x11, var_a2_2);
    var_a2_3 = func_00335390() != 0;
    if (var_a2_3 != 0) {
        var_a2_3 = sp6C != 0;
        if (var_a2_3 != 0) {
            var_a2_3 = temp_s2 == 0;
        }
    }
    if (var_a2_3 != 0) {
        temp_s0_7 = Pes6BitSet_Lookup(arg0, 0xA);
        var_a2_3 = (temp_s0_7 | Pes6BitSet_Lookup(arg0, 0x11)) != 0;
    }
    Pes6BitSet_Write(arg0, 1, var_a2_3);
    return 1;
}
