/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int Pes6BitSet_Write(void *, int, int);
extern int func_00325FC0(int, int);
extern s32 func_003389D0(s32, s32);
s32 func_00340CD0(f32, f32);                        /* extern */
s32 func_00341090(M2C_UNK *);                       /* extern */
s32 func_00341620(M2C_UNK *);                       /* extern */
extern char D_005F1C80[];
extern char D_005F1C8C[];
extern char D_005F1C94[];

s32 func_003357A0(void *arg0, s32 arg1, M2C_UNK arg2, s32 arg3) {
    s32 temp_fp;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s6;
    s32 temp_s7;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_a2_3;

    if (func_003389D0(arg1, 3) == 0) {
        return 0;
    }
    temp_s2 = M2C_FIELD(arg1, s32 *, 0x4C);
    temp_s1 = func_00341620(((void *)D_005F1C80));
    temp_s6 = func_00341090(((void *)D_005F1C80));
    temp_fp = temp_s1 | temp_s6;
    temp_s0 = func_00340CD0(fabsf((*(f32 *)D_005F1C8C)), (*(f32 *)D_005F1C94));
    Pes6BitSet_Write(arg0, 0x93, temp_fp);
    var_a2 = temp_s1 != 0;
    if (var_a2 != 0) {
        var_a2 = func_00325FC0(temp_s2, arg3 & 0xFF) == 0;
    }
    Pes6BitSet_Write(arg0, 0x95, var_a2);
    Pes6BitSet_Write(arg0, 0x96, temp_s0);
    temp_s7 = temp_s0 == 0;
    Pes6BitSet_Write(arg0, 0x97, temp_s7);
    Pes6BitSet_Write(arg0, 0x98, temp_s6);
    Pes6BitSet_Write(arg0, 0x99, temp_fp);
    Pes6BitSet_Write(arg0, 0x9A, temp_s6);
    Pes6BitSet_Write(arg0, 0x9B, temp_s1);
    var_a2_2 = temp_s0 != 0;
    if (var_a2_2 != 0) {
        var_a2_2 = func_00325FC0(temp_s2, arg3 & 0xFF) == 0;
    }
    Pes6BitSet_Write(arg0, 0x9C, var_a2_2);
    var_a2_3 = temp_s0 != 0;
    if (var_a2_3 != 0) {
        var_a2_3 = func_00325FC0(temp_s2, arg3 & 0xFF) != 0;
    }
    Pes6BitSet_Write(arg0, 0x9D, var_a2_3);
    Pes6BitSet_Write(arg0, 0x9E, temp_s7);
    Pes6BitSet_Write(arg0, 0x9F, temp_s7);
    Pes6BitSet_Write(arg0, 0xA0, M2C_FIELD(arg1, s32 *, 0x2C) == 2);
    return 1;
}
