/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00C137C0(u32);
extern u8 func_00C132C0(void *);
extern u8 func_00C132B0(void *);
s32 func_00C12C40(void *);                          /* extern */
void *func_00C13280(void *);                        /* extern */
void *func_00C135B0(void *, M2C_UNK *, s32);        /* extern */
f32 func_00C18AC0(u16, u16);                        /* extern */
extern char D_00CB3450[];
extern char D_00CB3468[];

s32 func_00C5DFD0(u32 arg0, u32 arg1, s32 arg2) {
    s32 temp_s2;
    s32 temp_s3;
    s32 var_s5;
    u32 var_s4;
    void *temp_s1;
    void *temp_v0;

    var_s5 = 0;
    if ((arg0 != -1U) && (arg1 != -1U)) {
        var_s4 = arg0;
        if (arg1 >= arg0) {
            temp_s2 = arg2 & 0xFF;
            temp_s3 = (*(s32 *)D_00CB3468);
loop_4:
            if (((func_00C132C0((void *) var_s4) & 0xFF) == 0x10) && (temp_s2 == (func_00C132B0((void *) var_s4) & 0xFF))) {
                temp_v0 = func_00C135B0((void *) var_s4, ((void *)D_00CB3450), temp_s3);
                if (temp_v0 != (void *)-1) {
                    if (((((s32) (func_00C132B0(temp_v0) & 0xFF) >> 5) & 1) != ((temp_s2 >> 5) & 1 & 0xFF)) && (func_00C12C40(temp_v0) != 0) && (temp_s1 = func_00C13280((void *) var_s4), !(func_00C18AC0(M2C_FIELD(temp_s1, u16 *, 2), M2C_FIELD(func_00C13280(temp_v0), u16 *, 2)) < 100.0f))) {
                        var_s5 = 1;
                    } else {
                        goto block_11;
                    }
                }
            } else {
block_11:
                var_s4 = func_00C137C0(var_s4);
                if (arg1 < var_s4) {

                } else {
                    goto loop_4;
                }
            }
        }
    }
    return var_s5;
}
