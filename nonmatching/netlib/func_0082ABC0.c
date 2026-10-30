/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0082AC90(s32, void *, void *);
extern char D_008A4398[];

void func_0082ABC0(s64 arg0, void *arg1, void *arg2) {
    s16 var_v0_5;
    s32 *temp_v1;
    s32 *var_a3;
    s32 *var_v0;
    s32 *var_v0_2;
    s32 var_a0;
    s32 var_a5;
    s32 var_v0_3;
    s64 temp_a4;
    void *var_v0_4;

    if ((*(s32 *)D_008A4398) != 0) {
        var_v0 = (*(s32 *)D_008A4398) + 0x238;
    } else {
        var_v0 = NULL;
    }
    if (var_v0 != NULL) {
        var_a5 = *var_v0;
    } else {
        var_a5 = 0;
    }
    temp_a4 = (s64) (arg0 << 0x30) >> 0x30;
    if (temp_a4 != 0) {
        var_a0 = 0;
        temp_v1 = (*(s32 *)D_008A4398) + 0x238;
loop_42:
        if (var_a0 >= var_a5) {
            goto block_43;
        }
        if ((*(s32 *)D_008A4398) != 0) {
            var_a3 = temp_v1;
        } else {
            var_a3 = NULL;
        }
        if ((*(s32 *)D_008A4398) != 0) {
            var_v0_2 = temp_v1;
        } else {
            var_v0_2 = NULL;
        }
        if (var_v0_2 != NULL) {
            var_v0_3 = *var_v0_2;
        } else {
            var_v0_3 = 0;
        }
        if (var_a0 < 0) {
            var_v0_4 = NULL;
        } else if (var_a0 < var_v0_3) {
            if (var_a3 != NULL) {
                var_v0_4 = var_a3 + (var_a0 << 6) + 4;
            } else {
                goto block_32;
            }
        } else {
block_32:
            var_v0_4 = NULL;
        }
        if (var_v0_4 != NULL) {
            var_v0_5 = M2C_FIELD(var_v0_4, s16 *, 0x3E);
        } else {
            var_v0_5 = 0;
        }
        if (temp_a4 != ((s64) ((s64) var_v0_5 << 0x30) >> 0x30)) {
            var_a0 += 1;
            goto loop_42;
        }
    } else {
block_43:
        var_a0 = -1;
    }
    func_0082AC90(var_a0, arg1, arg2);
}
