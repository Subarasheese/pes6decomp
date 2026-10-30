/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009275C0(s32, s32);                    /* extern */
M2C_UNK func_00C6A440(u8 *);                        /* extern */
extern char D_00591DC4[];
extern char D_00591F24[];
extern char D_005926F2[];

void func_00C68AF0(u8 *arg0) {
    s32 temp_a2;
    s32 temp_hi;

    temp_a2 = (*(u8 *)D_005926F2) * 0x14;
    temp_hi = (s32) *arg0 % temp_a2;
    if (temp_hi == ((u32) (*(u32 *)D_00591DC4) % (u32) temp_a2)) {
        func_009275C0(temp_hi, temp_a2);
    }
    if ((*(u8 *)D_00591F24) != 8) {
        func_00C6A440(arg0);
    }
}
