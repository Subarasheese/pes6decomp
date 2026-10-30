/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s64 func_00147D70(s32);
extern s64 func_00147D40(s32);
extern u64 func_00147DA0(s32, s32);
s32 func_001454C0(s32);                             /* extern */
void *func_00145D70(void *, s32, s64 *);            /* extern */
void *func_00149530(void *, s32, u64 *);            /* extern */
extern char D_00376890[];
extern char D_00376894[];
extern char D_00376898[];
extern char D_0037689C[];
extern char D_0050AD80[];

void *func_00146CF0(void *arg0, s32 arg1, s32 arg2) {
    s64 sp70;
    u64 sp78;                                       /* compiler-managed */
    s32 var_s4;
    s32 var_v0;
    s32 var_v0_2;
    u64 temp_v0;
    void *var_s0;
    void *var_s3;

    var_s3 = arg0;
    sp78 = 0;
    (*(u64 *)D_0050AD80) = 0x64020000 | (6 << 0x20);
    if ((arg1 == 0) && (arg2 == 0)) {
        return var_s3;
    }
    temp_v0 = func_00147DA0(arg1, arg2);
    (*(u64 *)D_0050AD80) = temp_v0;
    if (temp_v0 != 0) {
        return var_s3;
    }
    if (arg1 == 0) {
        var_v0 = 0;
    } else {
        var_v0 = func_001454C0(arg1);
    }
    var_s4 = var_v0;
    if (arg1 != arg2) {
        if (arg2 == 0) {
            var_v0_2 = 0;
        } else {
            var_v0_2 = func_001454C0(arg2);
        }
        var_s4 = var_v0_2;
    }
    if (var_v0 != 0) {
        goto block_16;
    }
    if (var_s4 == 0) {
        return var_s3;
    }
block_16:
    var_s0 = var_s3;
    if (var_v0 != 0) {
        var_s0 = func_00149530(var_s3, var_v0, &sp78);
    } else {
        sp78 = func_00147D70(arg1);
    }
    if (var_s4 == 0) {
        sp70 = func_00147D40(arg2);
    } else {
        var_s0 = func_00145D70(var_s0, var_s4, &sp70);
    }
    sp78 |= sp70;
    if (var_s3 != var_s0) {
        var_s3 = var_s0 + 0x10;
        M2C_FIELD(var_s0, f32 *, 0) = (f32) (*(f32 *)D_00376890);
        M2C_FIELD(var_s0, f32 *, 4) = (f32) (*(f32 *)D_00376894);
        M2C_FIELD(var_s0, f32 *, 8) = (f32) (*(f32 *)D_00376898);
        M2C_FIELD(var_s0, f32 *, 0xC) = (f32) (*(f32 *)D_0037689C);
    }
    (*(u64 *)D_0050AD80) = sp78;
    return var_s3;
}
