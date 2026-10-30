/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001526B0(s32, f32 *, M2C_UNK, s16, s16); /* extern */
M2C_UNK func_001C48E8(void *, M2C_UNK, s32);        /* extern */
extern s32 D_003E9C0C;
extern char D_0058D328[];
extern char D_0058D344[];
extern char D_0058D346[];
extern char D_0058D34A[];
extern char D_0058D34C[];
extern char D_0058D34E[];

void func_00260CB0(void) {
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 sp2C;
    s32 var_a4;
    s32 var_s0;
    void *var_a0;

    if ((D_003E9C0C != 0) && ((*(s32 *)D_0058D328) != 0)) {
        sp20 = (f32) (*(s16 *)D_0058D344);
        sp24 = (f32) (*(s16 *)D_0058D346);
        sp28 = (f32) (*(s16 *)D_0058D34C);
        sp2C = (f32) (*(s16 *)D_0058D34E);
        func_001526B0((*(s32 *)D_0058D328), &sp20, 0, (*(s16 *)D_0058D346), (*(s16 *)D_0058D344));
        var_s0 = 0;
        if ((*(s16 *)D_0058D34E) > 0) {
            do {
                var_a0 = (*(s32 *)D_0058D328) + ((*(s16 *)D_0058D34C) * var_s0 * 4);
                if (var_s0 < (*(s16 *)D_0058D34A)) {
                    var_a4 = 0;
                    if ((*(s16 *)D_0058D34C) > 0) {
                        do {
                            if (var_a4 >= *(s16 *)0x58D348) {
                                M2C_FIELD(var_a0, s8 *, 0) = 0;
                                M2C_FIELD(var_a0, s8 *, 1) = 0;
                                M2C_FIELD(var_a0, s8 *, 2) = 0;
                                M2C_FIELD(var_a0, s8 *, 3) = 0;
                            } else {
                                M2C_FIELD(var_a0, s8 *, 3) = 0x80;
                            }
                            var_a4 += 1;
                            var_a0 += 4;
                        } while (var_a4 < *(s16 *)0x58D34C);
                    }
                } else {
                    func_001C48E8(var_a0, 0, (*(s16 *)D_0058D34C) * 4);
                }
                var_s0 += 1;
            } while (var_s0 < (*(s16 *)D_0058D34E));
        }
        D_003E9C0C = 0;
    }
}
