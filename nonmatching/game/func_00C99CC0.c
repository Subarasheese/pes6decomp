/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001BC360(void);
extern s32 func_001BC370(s32, s32, s32, s32, s32);
extern void func_002F4CE0(void *, s8);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
extern char D_003AB4C0[];
extern char D_003AB4C4[];
extern char D_00591DB6[];

s32 func_00C99CC0(M2C_UNK arg0, void *arg1) {
    s16 temp_v1;
    s32 temp_s1;
    s32 var_a0;
    s32 var_s1;

    var_a0 = 2;
    if (M2C_FIELD(arg1, s16 *, 0x12) == 2) {
        var_a0 = 3;
    }
    temp_v1 = M2C_FIELD(arg1, s16 *, 0x10);
    if (var_a0 >= 3) {
        var_s1 = (s32) (temp_v1 + var_a0 + 1) % var_a0;
    } else {
        var_s1 = 1;
    }
    if (var_s1 != temp_v1) {
        func_0026E840(0x8400F802);
    }
    M2C_FIELD(arg1, s16 *, 0x10) = (s16) var_s1;
    temp_s1 = M2C_FIELD(((((s64) ((s64) var_s1 << 0x30) >> 0x30) * 4) + arg1), s32 *, 0x20);
    func_001BC360();
    M2C_FIELD(arg1, s32 *, 0) = func_001BC370((s32) (*(s8 *)D_00591DB6), (*(s32 *)D_003AB4C0), (*(s32 *)D_003AB4C4), temp_s1, (s32) arg1);
    func_002F4CE0(M2C_FIELD(arg1, void **, 0x18), (s8) M2C_FIELD(arg1, s16 *, 0x10));
    return 0;
}
