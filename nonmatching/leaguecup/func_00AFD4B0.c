/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"
typedef int s128 __attribute__((mode(TI)));
typedef unsigned int u128 __attribute__((mode(TI)));
typedef char Check128Width[sizeof(s128)==16?1:-1];

extern u32 func_00B035D0(void);
M2C_UNK func_0095ED30(f32 *, M2C_UNK, s128 *);      /* extern */
extern f32 D_003E7C14;
extern char D_00B324A0[];

s32 func_00AFD4B0(void) {
    s128 sp10;
    f32 sp2C;
    s32 temp_a0;
    u32 temp_v0;

    sp2C = D_003E7C14;
    sp10 = (*(s128 *)D_00B324A0);
    temp_v0 = func_00B035D0();
    if (temp_v0 != 0) {
        temp_a0 = M2C_FIELD(temp_v0, s32 *, 0x5E4);
        switch (temp_a0) {                          /* irregular */
        case 8:
            break;
        case 9:
            break;
        case 5:
            break;
        case 7:
            break;
        default:
            if (M2C_FIELD(temp_v0, u8 *, 0x29F84) != 1) {
                func_0095ED30(&sp2C, 1, &sp10);
            }
            break;
        }
    }
    return 0;
}
