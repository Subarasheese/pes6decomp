/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00151EA0(s32);
extern void func_002209A0(s32);
extern int func_00221180(int, int, int, int);
extern void func_002D9C38(s32);
s32 func_00114E20(void *);                          /* extern */
extern s32 D_003EAC6C;
extern char D_009CA828[];

s32 func_00931220(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0_2;
    s32 var_s1;
    void *temp_v0;

    temp_v0 = func_00221180(arg0, arg1, arg2, arg3);
    M2C_FIELD(temp_v0, s8 *, 0) = 5;
    M2C_FIELD(temp_v0, u8 *, 1) = 7U;
    M2C_FIELD(temp_v0, s8 *, 2) = 6;
    M2C_FIELD(temp_v0, s8 *, 3) = 5;
    M2C_FIELD(temp_v0, s8 *, 5) = 4;
    M2C_FIELD(temp_v0, s8 *, 6) = 3;
    M2C_FIELD(temp_v0, s8 *, 7) = 0;
    func_00151EA0(0xFFFF);
    if (func_00114E20(temp_v0) == 0) {
        temp_v0_2 = D_003EAC6C + 1;
        D_003EAC6C = temp_v0_2;
        if (temp_v0_2 < 0x14) {
            return 0;
        }
        D_003EAC6C = 0;
        goto block_4;
    }
block_4:
    func_002D9C38((s32) temp_v0);
    var_s1 = 0;
    if ((s32) M2C_FIELD(temp_v0, u8 *, 1) > 0) {
        do {
            func_00151EA0(0x10);
            var_s1 += 1;
        } while (var_s1 < (s32) M2C_FIELD(temp_v0, u8 *, 1));
    }
    M2C_FIELD(temp_v0, s32 *, 8) = (s32) (func_00151EA0(0xFFFF) & 0xFFFF);
    func_002209A0((s32) ((void *)D_009CA828));
    return 1;
}
