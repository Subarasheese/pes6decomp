/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00C137C0(u32);
extern u8 func_00C132B0(void *);
s32 func_00C12A40(void *);                          /* extern */
M2C_UNK func_00C13480(u32, M2C_UNK *, s32);         /* extern */
u32 func_00C13510(void *, M2C_UNK *, s32);          /* extern */
u32 func_00C137F0();                                /* extern */
extern char D_00CB3498[];
extern char D_00CB34A0[];
extern char D_00CB34A8[];
extern char D_00CB34B0[];

void func_00C59B70(void *arg0) {
    s32 temp_s0;
    s32 temp_s2;
    s32 var_s3;
    u32 temp_v0;
    void *var_s4;
    void *var_s5;

    var_s5 = arg0;
    temp_s0 = func_00C132B0(arg0) & 0xFF;
    temp_v0 = func_00C137F0();
    var_s4 = var_s5;
    var_s3 = 0;
    if ((u32) var_s5 < temp_v0) {
        temp_s2 = (*(s32 *)D_00CB34B0);
loop_2:
        if (func_00C12A40(var_s5) == 0) {
            if ((temp_s0 & 0xFF) != (func_00C132B0(var_s5) & 0xFF)) {
                var_s3 = (var_s3 + 1) & 0xFF;
                if (var_s3 >= 3) {

                } else {
                    goto block_7;
                }
            } else {
                var_s3 = 0;
                var_s4 = var_s5;
block_7:
                var_s5 = func_00C13510(var_s5, ((void *)D_00CB34A8), temp_s2);
                if ((u32) var_s5 >= temp_v0) {

                } else {
                    goto loop_2;
                }
            }
        }
    }
    func_00C13480(func_00C137C0((u32) var_s4), ((void *)D_00CB3498), (*(s32 *)D_00CB34A0));
}
