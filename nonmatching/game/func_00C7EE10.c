/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002D5630(void *, s32);
extern int func_002D55B0(void *);
M2C_UNK func_00C88E50(M2C_UNK);                     /* extern */
M2C_UNK func_00C8B230();                            /* extern */
M2C_UNK func_00C931C0();                            /* extern */
M2C_UNK func_00C932C0();                            /* extern */
extern s32 D_003EA86C;
extern char D_00CCC05C[];
extern char D_00CCC060[];
extern char D_00CCC068[];

void func_00C7EE10(void) {
    s32 var_a1;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;

    var_s1 = 0;
    var_s2 = (*(s32 *)D_00CCC05C);
    var_s0 = 0;
    switch (var_s2) {                               /* irregular */
    case 0:
        var_a1 = 0;
        if ((*(u8 *)D_00CCC068) & 1) {
            var_a1 = 1;
        }
        if (var_a1 != 0) {
            func_002D5630(((void *)D_00CCC060), 0x3C);
            func_00C932C0();
            var_s0 = 1;
            var_s2 += 1;
            (*(u8 *)D_00CCC068) = ((*(u8 *)D_00CCC068) & ~4) | 4;
        }
        break;
    case 1:
        if ((func_002D55B0(((void *)D_00CCC060)) == 1) || (((u64) ((s64) (*(u8 *)D_00CCC068) << 0x3E) >> 0x3F) != 0)) {
            var_s0 = 1;
        }
        if (var_s0 == 0) {
            var_s0 = 1;
        } else {
            var_s2 += 1;
            var_s0 = 1;
        }
        break;
    case 2:
        if (((u64) ((s64) (*(u8 *)D_00CCC068) << 0x3D) >> 0x3F) != 0) {
            func_00C931C0();
        }
        var_s2 += 1;
        /* fallthrough */
    default:
        var_s1 = 1;
        break;
    }
    (*(s32 *)D_00CCC05C) = var_s2;
    if (var_s0 != 0) {
        func_00C8B230();
    }
    if (var_s1 != 0) {
        func_00C88E50(0x12);
        if (D_003EA86C != 0) {
            D_003EA86C = 0;
        }
    }
}
