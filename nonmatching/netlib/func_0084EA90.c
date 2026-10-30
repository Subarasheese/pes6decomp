/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00272800(void);
s16 *func_008472D0(M2C_UNK);                        /* extern */
s32 func_008502E0(u8, u8);                          /* extern */
extern char D_00592742[];
extern char D_008B14CD[];

void func_0084EA90(void *arg0, s32 arg1) {
    s16 temp_s2;

    (*(s8 *)D_00592742) = 3;
    if (!((*(u8 *)D_008B14CD) & 1)) {
        temp_s2 = *func_008472D0(3);
        if (temp_s2 != (func_008502E0(M2C_FIELD(arg0, u8 *, 0x12), M2C_FIELD(arg0, u8 *, 0)) & 0xFF)) {
            func_00272800();
        } else {
            func_00272800();
        }
    } else {
        func_00272800();
    }
}
