/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00C132B0(void *);
extern u32 func_00C137B0(u32);
s32 func_00C12860(void *);                          /* extern */
u32 func_00C13480(void *, M2C_UNK *, s32);          /* extern */
M2C_UNK func_00C13510(u32, M2C_UNK *, s32);         /* extern */
u32 func_00C13840();                                /* extern */
extern char D_00CB3488[];
extern char D_00CB3490[];
extern char D_00CB3498[];
extern char D_00CB34A0[];

void func_00C59C80(void *arg0) {
    s32 temp_s0;
    s32 temp_s2;
    s32 var_s3;
    u32 temp_v0;
    void *var_s4;
    void *var_s5;

    var_s5 = arg0;
    temp_s0 = func_00C132B0(arg0) & 0xFF;
    temp_v0 = func_00C13840();
    var_s4 = var_s5;
    var_s3 = 0;
    if (temp_v0 < (u32) var_s5) {
        temp_s2 = (*(s32 *)D_00CB3490);
loop_2:
        if (func_00C12860(var_s5) == 0) {
            if ((temp_s0 & 0xFF) != (func_00C132B0(var_s5) & 0xFF)) {
                var_s3 = (var_s3 + 1) & 0xFF;
                if (var_s3 < 3) {
                    goto block_7;
                }
            } else {
                var_s3 = 0;
                var_s4 = var_s5;
block_7:
                var_s5 = func_00C13480(var_s5, ((void *)D_00CB3488), temp_s2);
                if (var_s5 != (void *)-1) {
                    if (temp_v0 >= (u32) var_s5) {

                    } else {
                        goto loop_2;
                    }
                }
            }
        }
    }
    func_00C13510(func_00C137B0((u32) var_s4), ((void *)D_00CB3498), (*(s32 *)D_00CB34A0));
}
