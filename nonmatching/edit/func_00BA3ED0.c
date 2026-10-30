/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001E81B0(void);
extern void func_002E9370(int);
extern s32 func_001E6C50(void *);
extern void * func_001E6E10(s32);
M2C_UNK func_001E8740(void *, void *);              /* extern */
M2C_UNK func_001E8B90(void *, void *, s16 *);       /* extern */
void *func_002F7F80(s32);                           /* extern */
extern u32 D_003EAF68;
extern s32 D_003EAF6C;
extern char D_00CB5BB8[];
extern char D_00CB5BBA[];
extern char D_00CB5BBC[];
extern char D_00CB5BBE[];

s32 func_00BA3ED0(s32 arg0, s32 arg1) {
    s16 sp68;
    s16 sp6A;
    s16 sp6C;
    s16 sp6E;
    s32 var_a0;
    s32 var_s1;
    s32 var_s2;
    void *temp_s0;
    void *temp_s3;
    void *temp_v0;
    void *temp_v0_2;

    var_s2 = 0;
    var_a0 = 0;
loop_1:
    if (((u32) D_003EAF68 >> var_a0) & 1) {
        var_a0 += 1;
        if (var_a0 >= 0x20) {
            var_s1 = 0x7346;
        } else {
            goto loop_1;
        }
    } else {
        var_s1 = var_a0 + 0x7346;
        D_003EAF68 |= 1 << var_a0;
        temp_v0 = func_001E6E10(var_s1);
        if (temp_v0 != NULL) {
            func_001E6C50(temp_v0);
        }
        D_003EAF6C += 1;
    }
    func_001E81B0();
    temp_s3 = func_001E6E10(var_s1);
    temp_s0 = func_002F7F80(arg1);
    if ((temp_s3 != NULL) && (temp_s0 != NULL)) {
        sp68 = (*(s16 *)D_00CB5BB8);
        sp6A = (*(s16 *)D_00CB5BBA);
        sp6C = (*(s16 *)D_00CB5BBC);
        sp6E = (*(s16 *)D_00CB5BBE);
        func_001E8B90(temp_s3, temp_s0 + 0x60, &sp68);
        func_001E8740(temp_s3, temp_s0 + 0x20);
        M2C_FIELD(temp_s0, s8 *, 0x20) = 0;
        M2C_FIELD(temp_s0, s8 *, 0x21) = 0xFF;
        M2C_FIELD(temp_s0, s8 *, 0x22) = 0xFF;
        M2C_FIELD(temp_s0, s8 *, 0x23) = 0;
        M2C_FIELD(temp_s0, s8 *, 0) = 1;
        if (arg1 < 0x50) {
            func_002E9370(0x800000);
        }
        var_s2 = 1;
    }
    if (((u32) var_s1 >= 0x7346U) && ((u32) var_s1 < 0x7367U) && (((u32) D_003EAF68 >> (var_s1 - 0x7346)) & 1)) {
        D_003EAF6C -= 1;
        temp_v0_2 = func_001E6E10(var_s1);
        if (temp_v0_2 != NULL) {
            func_001E6C50(temp_v0_2);
        }
        D_003EAF68 &= ~(1 << (var_s1 - 0x7346));
    }
    return var_s2;
}
