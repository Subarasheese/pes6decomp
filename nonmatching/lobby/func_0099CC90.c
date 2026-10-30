/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002F3A00(void *);
extern void func_002F3AA0(s32);
extern void func_002F3AE0(void *, void *);
extern void func_002F4D60(s32);
extern void func_002F3C70(void *);
extern void func_002F4CE0(void *, s8);
extern void func_002F3BF0(void *);
extern void func_002F3C30(void *);
M2C_UNK func_002F2E90(void *);                      /* extern */
M2C_UNK func_002F4DA0(void *, M2C_UNK);             /* extern */
void *func_002F4E90(M2C_UNK);                       /* extern */
s32 func_008156F0();                                /* extern */
M2C_UNK func_008179F0(f32 *, M2C_UNK);              /* extern */
M2C_UNK func_0099C860(s32, s32, s32, s32);          /* extern */
s32 func_00D0BD00();                                /* extern */
extern char D_009FE868[];
extern char D_009FE86C[];
extern char D_00A7DB10[];
extern void *D_00A7DB18;

void func_0099CC90(s32 arg0, s32 arg1, s32 arg2, void *arg3, s32 arg4, s32 arg5) {
    f32 sp80;
    f32 sp84;
    f32 sp98;
    f32 sp9C;
    f32 *var_v1;
    s32 var_v0;
    void *temp_s0;

    var_v1 = &sp80;
    temp_s0 = D_00A7DB18;
    var_v0 = 0x10;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    if ((M2C_FIELD(temp_s0, s32 *, 0x10) == 0) || (func_008156F0() == 1)) {
        M2C_FIELD(temp_s0, void **, 0) = func_002F4E90(0x17);
        M2C_FIELD(temp_s0, s32 *, 4) = arg4;
        M2C_FIELD(temp_s0, s32 *, 8) = arg2;
        func_002F3C70(M2C_FIELD(temp_s0, void **, 0));
        func_002F3BF0(M2C_FIELD(temp_s0, void **, 0));
        func_0099C860(arg0, arg1, arg2, arg5);
        if (arg3 != NULL) {
            func_002F3AE0(M2C_FIELD(temp_s0, void **, 0), arg3);
        } else if (func_00D0BD00() == 1) {
            func_002F2E90(M2C_FIELD(temp_s0, void **, 0));
        }
        func_002F4DA0(M2C_FIELD(temp_s0, void **, 0), 0);
        func_002F3C30(M2C_FIELD(temp_s0, void **, 0));
        func_002F4D60((s32) M2C_FIELD(temp_s0, void **, 0));
        if (arg3 != NULL) {
            sp80 = M2C_FIELD(arg3, f32 *, 0) + (M2C_FIELD(arg3, f32 *, 8) / 2.0f);
            sp84 = M2C_FIELD(arg3, f32 *, 4) + (M2C_FIELD(arg3, f32 *, 0xC) / 2.0f);
            func_002F3AA0((s32) M2C_FIELD(temp_s0, void **, 0));
        }
        func_002F4CE0(M2C_FIELD(temp_s0, void **, 0), (s8) M2C_FIELD(temp_s0, s32 *, 4));
        func_002F3A00(M2C_FIELD(temp_s0, void **, 0));
        sp98 = (*(f32 *)D_009FE868);
        sp9C = (*(f32 *)D_009FE86C);
        func_008179F0(&sp98, 1);
        (*(s32 *)D_00A7DB10) = 2;
    }
}
