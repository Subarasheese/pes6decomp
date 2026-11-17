/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00591BE4[];
extern char D_00CB52A0[];

s32 func_00C234C0(void *arg0) {
    char *var_v1;
    s32 var_a1;
    void *var_a3;

    var_a1 = 0;
    var_v1 = D_00CB52A0;
loop_1:
    if (*(s32 *)(var_v1 + 0x6BC) != 0) {
        var_a1 += 1;
        var_v1 += 0x40;
        if (var_a1 >= 0x16) {
            var_a3 = NULL;
        } else {
            goto loop_1;
        }
    } else {
        var_a3 = ((void *)D_00CB52A0) + (var_a1 << 6) + 0x6BC;
    }
    if (var_a3 == NULL) {
        return 0;
    }
    *(u8 *)((char *)var_a3 + 0x10) = (u8) *(u8 *)((char *)arg0 + 0);
    *(s32 *)((char *)var_a3 + 0) = 6;
    M2C_FIELD(var_a3, s32 *, 8) = (s32) ((*(u8 *)D_00591BE4) * 3);
    *(s16 *)((char *)var_a3 + 0xC) = (s16) (s32) *(f32 *)((char *)arg0 + 0xE0);
    *(s16 *)((char *)var_a3 + 0xE) = (s16) (s32) *(f32 *)((char *)arg0 + 0xE8);
    return 1;
}
