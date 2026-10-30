/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"
typedef int s128 __attribute__((mode(TI)));
typedef unsigned int u128 __attribute__((mode(TI)));
typedef char Check128Width[sizeof(s128)==16?1:-1];

extern u32 func_00993A80(void);
M2C_UNK func_0095ED30(f32 *, M2C_UNK, s128 *);      /* extern */
extern f32 D_003E7B40;
extern char D_009C0A10[];

s32 func_00993680(void) {
    s128 sp10;
    f32 sp2C;
    u32 temp_v0;

    sp2C = D_003E7B40;
    sp10 = (*(s128 *)D_009C0A10);
    temp_v0 = func_00993A80();
    if (temp_v0 != 0) {
        if ((u32) (M2C_FIELD(temp_v0, s32 *, 0x258) - 1) >= 2U) {
            func_0095ED30(&sp2C, 1, &sp10);
        }
    }
    return 0;
}
