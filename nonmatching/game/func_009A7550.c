/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009A7690(u16 *, void *);                   /* extern */
extern s32 D_003EA718;
extern char D_00CB7700[];
extern char D_00CB7720[];
extern char D_00CB7724[];
extern char D_00CB7728[];
extern char D_00CB7730[];

s32 func_009A7550(void *arg0) {
    s32 temp_v0;
    s32 var_a3;
    s32 var_v1;
    u16 *var_a2;
    u16 temp_v0_2;
    void *temp_v1;

    var_v1 = 1;
    if ((*(f32 *)D_00CB7720) != M2C_FIELD(arg0, f32 *, 0)) {
        var_v1 = 0;
    }
    if (var_v1 != 0) {
        var_v1 = 1;
        if ((*(f32 *)D_00CB7724) != M2C_FIELD(arg0, f32 *, 4)) {
            var_v1 = 0;
        }
    }
    if (var_v1 != 0) {
        var_v1 = 1;
        if ((*(f32 *)D_00CB7728) != M2C_FIELD(arg0, f32 *, 8)) {
            var_v1 = 0;
        }
    }
    if (var_v1 != 0) {
        goto block_9;
    }
    temp_v0 = func_009A7690(((void *)D_00CB7700), arg0);
    D_003EA718 = temp_v0;
    if (temp_v0 > 0) {
        (*(f32 *)D_00CB7720) = M2C_FIELD(arg0, f32 *, 0);
        (*(f32 *)D_00CB7724) = M2C_FIELD(arg0, f32 *, 4);
        (*(f32 *)D_00CB7728) = M2C_FIELD(arg0, f32 *, 8);
block_9:
        var_a3 = 0;
        if (D_003EA718 > 0) {
            var_a2 = ((void *)D_00CB7700);
loop_11:
            temp_v0_2 = *var_a2;
            if (temp_v0_2 != 0xFFFF) {
                var_a3 += 1;
                temp_v1 = ((void *)D_00CB7730) + (temp_v0_2 << 5);
                var_a2 += 2;
                M2C_FIELD(temp_v1, s8 *, 0x8D) = 0;
                M2C_FIELD(temp_v1, s32 *, 0x80) = 0;
                M2C_FIELD(temp_v1, s32 *, 0x84) = 0;
                M2C_FIELD(temp_v1, s32 *, 0x88) = 0;
                if (var_a3 >= D_003EA718) {
                    goto block_17;
                }
                goto loop_11;
            }
            goto block_20;
        }
block_17:
        return 1;
    }
block_20:
    return 0;
}
