/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00915200(void *);                          /* extern */
M2C_UNK func_00C23600(void *);                      /* extern */
s32 func_00C5FC80();                                /* extern */
M2C_UNK func_00C67C00(void *, M2C_UNK);             /* extern */
M2C_UNK func_00C6A440();                            /* extern */
extern void *Pes6Ball_Current;
extern char D_00591E4C[];
extern char D_00CB5302[];
extern char D_00CB5397[];

void func_00C67AE0(void *arg0) {
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f2_2;
    s32 var_v0;
    s32 var_v1;

    if ((*(u8 *)D_00CB5302) == M2C_FIELD(arg0, u8 *, 0)) {
        if (func_00C5FC80() == 0) {
            if (((*(u8 *)D_00591E4C) != 0) && ((*(u8 *)D_00CB5397) != 0) && (func_00915200(arg0) != 0)) {
                temp_f2 = (f32) M2C_FIELD(arg0, s16 *, 0x14);
                if ((temp_f2 * M2C_FIELD(Pes6Ball_Current, f32 *, 0x10)) < (M2C_FIELD(arg0, f32 *, 0xE0) * temp_f2)) {
                    temp_f1 = M2C_FIELD(Pes6Ball_Current, f32 *, 0x18);
                    if (!(temp_f1 < 0.0f)) {
                        var_v1 = 1;
                    } else {
                        var_v1 = -1;
                    }
                    temp_f2_2 = M2C_FIELD(arg0, f32 *, 0xE8);
                    if (!(temp_f2_2 < 0.0f)) {
                        var_v0 = 1;
                    } else {
                        var_v0 = -1;
                    }
                    if ((var_v0 == var_v1) && (fabsf(temp_f2_2) < fabsf(temp_f1))) {
                        func_00C23600(arg0);
                    }
                }
            }
            func_00C67C00(arg0, 1);
        }
    } else {
        func_00C6A440();
    }
}
