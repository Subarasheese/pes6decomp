/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002CAFD0(s32);
M2C_UNK func_001A5BE0(M2C_UNK);                     /* extern */
s64 func_0026B250(u8, u8);                          /* extern */
extern char D_003AE970[];
extern char D_003AE99A[];

void func_008F9C50(void) {
    s64 temp_a0_2;
    s64 temp_v0;
    u8 temp_a0;
    u8 temp_a1;

    temp_a1 = (*(u8 *)D_003AE99A);
    temp_a0 = temp_a1 + 1;
    (*(u8 *)D_003AE99A) = temp_a0;
    if (temp_a1 == 0) {
        temp_v0 = func_0026B250(temp_a0, temp_a1);
        (*(s8 *)D_003AE970) = (s8) temp_v0;
        temp_a0_2 = (s64) (temp_v0 << 0x38) >> 0x38;
        if ((temp_a0_2 != 3) && (temp_a0_2 != 4)) {
            func_001A5BE0(5);
            func_002CAFD0(0);
            return;
        }
        func_002CAFD0(1);
    }
}
