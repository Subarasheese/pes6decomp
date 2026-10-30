/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00325910(void);
extern int Pes6BitSet_Write(void *, int, int);
extern s32 func_003389D0(s32, s32);
s32 func_0033BAC0(void *arg0, void *arg1) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 var_s2;
    void *temp_s1;

    temp_s1 = M2C_FIELD(arg1, void **, 0x44);
    temp_s0 = func_003389D0((s32) arg1, 0) & 0xFF;
    temp_s0_2 = func_003389D0((s32) arg1, 2);
    var_s2 = func_00325910();
    if (M2C_FIELD(temp_s1, s32 *, 0) == 7) {
        if (temp_s0_2 < 0xE) {
            if (temp_s0_2 == 0xD) {
                var_s2 += 1;
            }
        } else {
            var_s2 += 3;
        }
        Pes6BitSet_Write(arg0, 0xBF, temp_s0_2 >= 0xE);
        Pes6BitSet_Write(arg0, 0xC0, M2C_FIELD(temp_s1, u8 *, 0xD) == 1);
        Pes6BitSet_Write(arg0, 0xC1, var_s2 == 6);
        Pes6BitSet_Write(arg0, 0xC2, var_s2 == 3);
        Pes6BitSet_Write(arg0, 0xC3, var_s2 == 4);
        Pes6BitSet_Write(arg0, 0xC4, M2C_FIELD(temp_s1, u8 *, 0xD) == 2);
        Pes6BitSet_Write(arg0, 0xC5, var_s2 == 9);
        Pes6BitSet_Write(arg0, 0xC6, var_s2 == 6);
        Pes6BitSet_Write(arg0, 0xC7, var_s2 == 7);
        Pes6BitSet_Write(arg0, 0xC8, var_s2 == 6);
        Pes6BitSet_Write(arg0, 0xC9, var_s2 == 3);
        Pes6BitSet_Write(arg0, 0xCA, var_s2 == 4);
        Pes6BitSet_Write(arg0, 0xCB, var_s2 == 7);
        Pes6BitSet_Write(arg0, 0xCC, var_s2 == 5);
        Pes6BitSet_Write(arg0, 0xCE, M2C_FIELD(temp_s1, u8 *, 0xD) == 1);
        Pes6BitSet_Write(arg0, 0xCF, M2C_FIELD(temp_s1, u8 *, 0xD) == 2);
        return 1;
    }
    return 0;
}
