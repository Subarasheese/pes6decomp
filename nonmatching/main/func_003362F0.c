/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int Pes6BitSet_Write(void *, int, int);
extern int func_003395B0(void *);
extern s32 func_00340C80(f32);
extern s32 func_003389D0(s32, s32);
extern s32 func_0030EA70(void);
extern int func_0030E830(void);
extern int func_003336F0(int);
s32 func_003362F0(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    s32 *temp_s0_2;
    s32 *temp_s3;
    s32 temp_s0;
    s32 temp_s1_2;
    s32 temp_s1_3;
    s32 temp_s2;
    s32 temp_s6;
    void *temp_s1;

    temp_s0 = M2C_FIELD(arg1, s32 *, 0x48);
    temp_s1 = M2C_FIELD(arg1, void **, 0x44);
    if (func_003389D0((s32) arg1, 3) != 0) {
        temp_s1_2 = func_003395B0(temp_s1);
        temp_s2 = temp_s1_2 < func_00340C80(60.0f);
        temp_s1_3 = func_003336F0(temp_s0);
        temp_s6 = func_0030EA70();
        Pes6BitSet_Write(arg0, 1, func_0030E830() == 0);
        temp_s0_2 = arg2 + ((arg3 & 0xFF) * 4);
        Pes6BitSet_Write(arg0, 2, temp_s2 & (*temp_s0_2 == 2));
        temp_s3 = arg2 + (((arg3 & 0xFF) ^ 1) * 4);
        Pes6BitSet_Write(arg0, 3, temp_s1_3 & (*temp_s3 == 0));
        Pes6BitSet_Write(arg0, 8, temp_s1_3 & (*temp_s3 == 0));
        Pes6BitSet_Write(arg0, 0xC, temp_s2 & (*temp_s0_2 == 3));
        Pes6BitSet_Write(arg0, 0xF, temp_s1_3 & ((temp_s6 >= 0x18) & ((*temp_s0_2 + *temp_s3) == 1)));
        Pes6BitSet_Write(arg0, 0xB8, temp_s2);
        return 1;
    }
    return 0;
}
