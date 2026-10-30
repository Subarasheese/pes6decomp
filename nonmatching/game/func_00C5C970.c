/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00C132C0(void *);
extern u8 func_00C132B0(void *);
extern u32 func_00C137B0(u32);
s32 func_002C18C0(s32, M2C_UNK);                    /* extern */
void *func_00C13280(void *);                        /* extern */
u32 func_00C13390(s32);                             /* extern */
u32 func_00C13400(void *);                          /* extern */
void *func_00C13640(u32, M2C_UNK *, s32);           /* extern */
f32 func_00C18AC0(u16, u16);                        /* extern */
extern char D_00CB3450[];
extern char D_00CB3468[];

s32 func_00C5C970(u32 arg0, s32 arg1, s32 arg2, s32 (*arg3)(f32 *)) {
    f32 sp7C;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_v0;
    s32 var_s3;
    u32 var_s0;
    u32 var_s2;
    void *temp_s0_2;

    temp_s1 = arg2 & 0xFF;
    temp_s0 = (temp_s1 >> 5) & 1;
    var_s3 = 0;
    if ((arg0 == -1U) || (arg1 == -1) || (temp_v0 = func_002C18C0(temp_s0, 6), (temp_v0 == -1)) || (var_s2 = func_00C13390(temp_v0), (var_s2 == -1U)) || (arg0 >= var_s2) || ((func_00C132C0((void *) var_s2) & 0xFF) != 0xB) || ((temp_s0 & 0xFF) != (((s32) (func_00C132B0((void *) var_s2) & 0xFF) >> 5) & 1))) {
        var_s2 = -1U;
    }
    var_s0 = -1U;
    if ((var_s2 != -1U) && (temp_s1 == (func_00C132B0((void *) var_s2) & 0xFF))) {
        var_s0 = func_00C13400((void *) var_s2);
        if (var_s0 != -1U) {
            var_s0 = func_00C13640(func_00C137B0(var_s0), ((void *)D_00CB3450), (*(s32 *)D_00CB3468));
        }
    }
    if ((var_s2 != -1U) && (var_s0 != -1U)) {
        temp_s0_2 = func_00C13280((void *) var_s2);
        sp7C = func_00C18AC0(M2C_FIELD(temp_s0_2, u16 *, 2), M2C_FIELD(func_00C13280((void *) var_s0), u16 *, 2));
        var_s3 = arg3(&sp7C);
    }
    return var_s3;
}
