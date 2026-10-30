/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00C137C0(u32);
extern u8 func_00C132C0(void *);
extern u8 func_00C132B0(void *);
s32 func_00C12A40(void *);                          /* extern */
void *func_00C135B0(void *, M2C_UNK *, s32);        /* extern */
void *func_00C13640(void *, M2C_UNK *, s32);        /* extern */
extern char D_00CB3450[];
extern char D_00CB3468[];

s32 func_00C5DE20(u32 arg0, u32 arg1, s32 arg2) {
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_s7;
    u32 var_s4;
    void *temp_s3;
    void *temp_v0;

    var_s7 = 0;
    if ((arg0 != -1U) && (arg1 != -1U)) {
        var_s4 = arg0;
        if (arg1 >= arg0) {
            temp_s1 = arg2 & 0xFF;
            temp_s2 = (*(s32 *)D_00CB3468);
loop_4:
            temp_v1 = func_00C132C0((void *) var_s4) & 0xFF;
            if ((temp_v1 != 0xC) && (temp_v1 != 0x10) && (temp_v1 != 0x11) && (temp_v1 != 0x12) && (temp_v1 != 0x16)) {
                goto block_9;
            }
            if (temp_s1 == (func_00C132B0((void *) var_s4) & 0xFF)) {
                temp_s3 = func_00C13640((void *) var_s4, ((void *)D_00CB3450), temp_s2);
                temp_v0 = func_00C135B0((void *) var_s4, ((void *)D_00CB3450), temp_s2);
                if ((temp_v0 != (void *)-1) && (temp_s3 != (void *)-1)) {
                    temp_s0 = func_00C132B0(temp_v0) & 0xFF;
                    if ((temp_s0 != 0xFF) && (((temp_s0 >> 5) & 1) != ((temp_s1 >> 5) & 1 & 0xFF)) && (func_00C12A40(temp_s3) == 0) && (temp_v0_2 = func_00C132B0(temp_s3) & 0xFF, (temp_v0_2 != temp_s1)) && (temp_v0_2 != temp_s0)) {
                        var_s7 = 1;
                    } else {
                        goto block_9;
                    }
                }
            } else {
block_9:
                var_s4 = func_00C137C0(var_s4);
                if (arg1 < var_s4) {

                } else {
                    goto loop_4;
                }
            }
        }
    }
    return var_s7;
}
