/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00C132B0(void *);
u32 func_00C135B0(void *, M2C_UNK *, s32);          /* extern */
extern char D_00CB3450[];
extern char D_00CB3468[];

void *func_00C4FE30(u32 arg0, void *arg1, s32 arg2) {
    s32 temp_s0;
    s32 var_s2;
    s32 var_s3;
    u32 var_s1;
    void *var_s7;

    temp_s0 = (*(s32 *)D_00CB3468);
    var_s7 = arg1;
    var_s3 = 0;
    var_s2 = 0;
    var_s1 = func_00C135B0(arg1, ((void *)D_00CB3450), (*(s32 *)D_00CB3468));
    if (var_s1 != -1U) {
        if (arg0 < var_s1) {
loop_3:
            if (arg1 != (void *)-1) {
                if ((func_00C132B0((void *) var_s1) & 0xFF) != 0xFF) {
                    if ((arg2 & 0xFF) == (((s32) (func_00C132B0((void *) var_s1) & 0xFF) >> 5) & 1)) {
                        var_s3 = 0;
                        var_s2 += 1;
                        var_s7 = (void *) var_s1;
                    } else {
                        var_s3 += 1;
                    }
                    if (var_s3 >= 2) {
                        var_s1 = (u32) var_s7;
                    } else {
                        goto block_10;
                    }
                } else {
block_10:
                    var_s1 = func_00C135B0((void *) var_s1, ((void *)D_00CB3450), temp_s0);
                    if (arg0 >= var_s1) {
                        goto block_11;
                    }
                    goto loop_3;
                }
            } else {
                goto block_11;
            }
        } else {
block_11:
            var_s1 = arg0;
        }
    }
    if (var_s2 <= 0) {
        var_s1 = (u32) arg1;
    }
    return (void *) var_s1;
}
