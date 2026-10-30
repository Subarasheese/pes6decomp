/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"
typedef int s128 __attribute__((mode(TI)));
typedef unsigned int u128 __attribute__((mode(TI)));
typedef char Check128Width[sizeof(s128)==16?1:-1];

extern u32 func_009B7C90(void);
M2C_UNK func_0095ED30(f32 *, M2C_UNK, s128 *);      /* extern */
extern f32 D_003E7B60;
extern f32 D_003E7B64;
extern char D_00591C09[];
extern char D_009C1250[];

s32 func_009B6460(void) {
    s128 sp10;
    f32 sp28;
    f32 sp2C;
    u32 temp_v0;

    sp2C = D_003E7B60;
    sp10 = (*(s128 *)D_009C1250);
    sp28 = D_003E7B64;
    temp_v0 = func_009B7C90();
    if (temp_v0 != 0) {
        if ((u32) (M2C_FIELD(temp_v0, s32 *, 0x238) - 2) < 2U) {

        } else {
            switch ((*(u8 *)D_00591C09)) {                   /* irregular */
            case 1:
                func_0095ED30(&sp28, 1, &sp10);
                break;
            case 4:
                func_0095ED30(&sp2C, 1, &sp10);
                break;
            }
        }
    }
    return 0;
}
