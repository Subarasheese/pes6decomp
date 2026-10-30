/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_0030E780(void);
extern s32 func_00326040(void *, s32);
extern int Pes6BitSet_Write(void *, int, int);
extern s32 func_00333740(void *, s32);
extern int func_00325FC0(int, int);
extern s32 func_003389D0(s32, s32);
extern s32 func_0030EA70(void);
extern int func_0030E830(void);
extern char D_005F1C80[];

s32 func_00335600(void *arg0, void *arg1, M2C_UNK arg2, s32 arg3) {
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s4;
    s32 temp_v0;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s3;

    temp_s1 = arg3 & 0xFF;
    temp_s4 = M2C_FIELD(arg1, s32 *, 0x4C);
    temp_s0 = func_00333740(M2C_FIELD(arg1, void **, 0x48), temp_s1);
    temp_v0 = func_0030E830();
    if ((temp_v0 != 1) && (temp_v0 != 0)) {
        var_s3 = 0xF;
        var_s2 = 0xA;
    } else {
        var_s3 = 0x2D;
        var_s2 = 0x25;
    }
    if ((func_0030EA70() % var_s3) < var_s2) {
        if (func_0030E780() != 0) {
            var_s2_2 = 0;
        } else {
            goto block_9;
        }
    } else {
block_9:
        var_s2_2 = 1;
    }
    Pes6BitSet_Write(arg0, 0xA8, M2C_FIELD(((void *)D_005F1C80), u8 *, 5) != 0x10);
    Pes6BitSet_Write(arg0, 0xA9, func_00325FC0(temp_s4, temp_s1) == 0);
    Pes6BitSet_Write(arg0, 0xB1, func_00326040((void *) temp_s4, temp_s1));
    Pes6BitSet_Write(arg0, 0xB2, func_003389D0((s32) arg1, 0) < 3);
    Pes6BitSet_Write(arg0, 0xB3, var_s2_2);
    Pes6BitSet_Write(arg0, 0xB4, temp_s0 == 0xD);
    Pes6BitSet_Write(arg0, 0xB5, temp_s0 >= 0xE);
    Pes6BitSet_Write(arg0, 0xB6, temp_s0 < 0xD);
    return 1;
}
