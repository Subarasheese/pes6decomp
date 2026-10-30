/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"
typedef int s128 __attribute__((mode(TI)));
typedef unsigned int u128 __attribute__((mode(TI)));
typedef char Check128Width[sizeof(s128)==16?1:-1];

extern u32 func_00B5F200(void);
M2C_UNK func_0095ED30(f32 *, M2C_UNK, s128 *);      /* extern */
extern f32 D_003E7D18;
extern char D_00B85CD0[];

s32 func_00B5F600(void) {
    s128 sp10;
    f32 sp2C;
    u32 temp_v0;

    sp2C = D_003E7D18;
    sp10 = (*(s128 *)D_00B85CD0);
    temp_v0 = func_00B5F200();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, u8 *, 0x92C) == 1) {
            if (M2C_FIELD(temp_v0, u8 *, 0x92D) != 1) {
                if (M2C_FIELD(temp_v0, u8 *, 0x8B0) != 4) {
                    func_0095ED30(&sp2C, 1, &sp10);
                }
                goto block_14;
            }
            return 0;
        }
        goto block_14;
    }
block_14:
    return 0;
}
