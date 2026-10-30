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

s32 func_00C5E140(u32 arg0, u32 arg1, s32 arg2) {
    s32 temp_s4;
    s32 temp_s5;
    s32 temp_v1;
    s32 var_s6;
    u32 var_s0;
    void *temp_s2;
    void *temp_v0;

    var_s6 = 0;
    if ((arg0 != -1U) && (arg1 != -1U)) {
        var_s0 = arg0;
        if (arg1 >= arg0) {
            temp_s4 = arg2 & 0xFF;
            temp_s5 = (*(s32 *)D_00CB3468);
loop_4:
            temp_v1 = func_00C132C0((void *) var_s0) & 0xFF;
            if ((temp_v1 != 0xC) && (temp_v1 != 0x11)) {
                goto block_6;
            }
            if (temp_s4 == (func_00C132B0((void *) var_s0) & 0xFF)) {
                temp_v0 = func_00C135B0((void *) var_s0, ((void *)D_00CB3450), temp_s5);
                if (temp_v0 != (void *)-1) {
                    if (((((s32) (func_00C132B0(temp_v0) & 0xFF) >> 5) & 1) != ((temp_s4 >> 5) & 1 & 0xFF)) && ((func_00C12C40(temp_v0) == 0) || (temp_s2 = func_00C13280((void *) var_s0), (func_00C18AC0(M2C_FIELD(temp_s2, u16 *, 2), M2C_FIELD(func_00C13280(temp_v0), u16 *, 2)) < 100.0f)))) {
                        var_s6 = 1;
                    } else {
                        goto block_6;
                    }
                }
            } else {
block_6:
                var_s0 = func_00C137C0(var_s0);
                if (arg1 < var_s0) {

                } else {
                    goto loop_4;
                }
            }
        }
    }
    return var_s6;
}
