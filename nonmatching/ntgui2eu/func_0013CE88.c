/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001566A8(void);
M2C_UNK func_0012DD30(M2C_UNK, M2C_UNK, M2C_UNK, s32, M2C_UNK, s32); /* extern */
s32 func_00135080(M2C_UNK);                         /* extern */
M2C_UNK func_00136FD8(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00153F78(M2C_UNK, s32);                /* extern */
s32 func_00154070(M2C_UNK *, M2C_UNK);              /* extern */
s32 func_001B016C(M2C_UNK, s32);                    /* extern */
extern char D_005B3744[];
extern char D_005BEDB8[];
extern char D_005FBB70[];

void func_0013CE88(void) {
    s32 var_s0;

    if (func_00154070(((void *)D_005FBB70), -1) == 0) {
        var_s0 = 0;
        if (M2C_FIELD(((void *)D_005BEDB8), s32 *, 0) > 0) {
loop_3:
            if (func_001B016C(0x011D9DB0, *(s32 *)0x5BEDAC + (var_s0 * 0x20C) + 0x10C) != 0) {
                var_s0 += 1;
                if (var_s0 >= M2C_FIELD(((void *)D_005BEDB8), s32 *, -0x1248)) {
                    /* Duplicate return node #6. Try simplifying control flow for better match */
                    func_00153F78(0x5FBB30, 0x011D9DB0);
                    func_001566A8();
                    func_00136FD8(1, 0x13);
                    return;
                }
                goto loop_3;
            }
            func_0012DD30(2, 0x1F4, 0xFA, func_00135080(0x3C), 0, (*(s32 *)D_005B3744));
            return;
        }
    }
    func_00153F78(0x5FBB30, 0x011D9DB0);
    func_001566A8();
    func_00136FD8(1, 0x13);
}
