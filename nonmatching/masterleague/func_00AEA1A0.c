/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"
typedef int s128 __attribute__((mode(TI)));
typedef unsigned int u128 __attribute__((mode(TI)));
typedef char Check128Width[sizeof(s128)==16?1:-1];

extern u32 func_00AE3240(void);
M2C_UNK func_0095ED30(f32 *, M2C_UNK, s128 *);      /* extern */
extern f32 D_003E7CE0;
extern f32 D_003E7CE4;
extern char D_00B78FD0[];
extern char D_00B78FE0[];

s32 func_00AEA1A0(void) {
    s128 sp10;
    s128 sp20;
    f32 sp38;
    f32 sp3C;
    s32 temp_v1;
    u32 temp_v0;

    sp10 = (*(s128 *)D_00B78FE0);
    sp3C = D_003E7CE0;
    sp38 = D_003E7CE4;
    sp20 = (*(s128 *)D_00B78FD0);
    temp_v0 = func_00AE3240();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, u8 *, 0x3DB5) == 0) {
            temp_v1 = M2C_FIELD(temp_v0, s32 *, 0x59F0);
            if ((temp_v1 != 2) && (temp_v1 != 3)) {

            } else {
                switch (temp_v1) {                  /* irregular */
                case 2:
                    func_0095ED30(&sp3C, 1, &sp20);
                    break;
                case 3:
                    func_0095ED30(&sp38, 1, &sp10);
                    break;
                }
            }
        }
    }
    return 0;
}
