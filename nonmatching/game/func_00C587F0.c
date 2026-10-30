/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00C137C0(u32);
extern u8 func_00C132C0(void *);
extern u8 func_00C132B0(void *);
s32 func_00C12900(s32);                             /* extern */
M2C_UNK func_00C22390(s32, s8 *);                   /* extern */
M2C_UNK func_00C58970(s8 *, void *, u32, void *);   /* extern */

u32 func_00C587F0(s32 arg0, void *arg1, void *arg2) {
    s8 sp88;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_v0;
    s8 *var_v1;
    void *var_s2;
    void *var_s3;

    temp_s0 = func_00C132B0(arg1) & 0xFF;
    func_00C132B0(arg2);
    var_v1 = &sp88;
    var_v0 = 8;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    var_s3 = arg1;
    var_s2 = arg1;
    if ((u32) arg1 < (u32) arg2) {
loop_4:
        temp_s0_2 = func_00C132C0(var_s3) & 0xFF;
        if (func_00C12900(temp_s0_2) != 0) {
            temp_v1 = temp_s0_2 & 0xFF;
            if ((temp_v1 != 0xF) && (temp_v1 != 0x1B)) {
                var_s3 = func_00C137C0((u32) var_s3);
                goto block_13;
            }
        }
        temp_v1_2 = temp_s0_2 & 0xFF;
        if (temp_v1_2 != 0xF) {
            if (temp_v1_2 == 0x1B) {
                goto block_11;
            }
        } else {
block_11:
            if ((temp_s0 & 0xFF) == (func_00C132B0(var_s3) & 0xFF)) {
                var_s2 = var_s3;
                var_s3 = func_00C137C0((u32) var_s3);
block_13:
                if ((u32) var_s3 >= (u32) arg2) {

                } else {
                    goto loop_4;
                }
            }
        }
    }
    func_00C58970(&sp88, arg1, func_00C137C0((u32) var_s2), arg2);
    func_00C22390(arg0, &sp88);
    return (u32) var_s2;
}
