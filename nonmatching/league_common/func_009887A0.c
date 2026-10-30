/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"
typedef int s128 __attribute__((mode(TI)));
typedef unsigned int u128 __attribute__((mode(TI)));
typedef char Check128Width[sizeof(s128)==16?1:-1];

extern u32 func_00989410(void);
s32 func_0094C730();                                /* extern */
s32 func_0094C7B0();                                /* extern */
M2C_UNK func_0095ED30(f32 *, M2C_UNK32, s128 *);    /* extern */
extern char D_009C08B0[];
extern char D_009C08B4[];
extern char D_009C08B8[];
extern char D_009C08BC[];
extern char D_009C08C0[];
extern char D_009C08C4[];
extern char D_009C08D0[];
extern char D_009C08E0[];

s32 func_009887A0(void) {
    s128 sp10;
    s128 sp20;
    M2C_UNK32 sp38;
    M2C_UNK32 sp3C;
    f32 sp40;
    f32 sp44;
    f32 sp48;
    f32 sp4C;
    s32 temp_v1;
    s32 temp_v1_2;
    u32 temp_v0;

    sp10 = (*(s128 *)D_009C08E0);
    sp48 = (*(f32 *)D_009C08B0);
    sp4C = (*(f32 *)D_009C08B4);
    sp40 = (*(f32 *)D_009C08B8);
    sp44 = (*(f32 *)D_009C08BC);
    sp38 = (*(M2C_UNK32 *)D_009C08C0);
    sp3C = (*(M2C_UNK32 *)D_009C08C4);
    sp20 = (*(s128 *)D_009C08D0);
    temp_v0 = func_00989410();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, s32 *, 0x488) == 2) {

        } else if (func_0094C7B0() == 0x38) {
            temp_v1 = func_0094C730() & 0xFF;
            switch (temp_v1) {                      /* switch 1; irregular */
            case 14:                                /* switch 1 */
                func_0095ED30(&sp40, 2, &sp10);
                break;
            case 17:                                /* switch 1 */
                func_0095ED30(&sp4C, sp3C, &sp20);
                break;
            case 10:                                /* switch 1 */
                func_0095ED30(&sp48, sp38, &sp20);
                break;
            }
        } else if (func_0094C7B0() == 0x36) {
            temp_v1_2 = func_0094C730() & 0xFF;
            switch (temp_v1_2) {                    /* switch 2; irregular */
            case 14:                                /* switch 2 */
                func_0095ED30(&sp4C, sp3C, &sp20);
                break;
            case 13:                                /* switch 2 */
            case 12:                                /* switch 2 */
                func_0095ED30(&sp48, sp38, &sp20);
                break;
            }
        } else if (func_0094C7B0() == 0x37) {
            func_0095ED30(&sp48, sp38, &sp20);
        } else if (func_0094C7B0() == 0x39) {
            func_0095ED30(&sp48, sp38, &sp20);
        } else if (func_0094C7B0() == 0x3A) {
            func_0095ED30(&sp48, sp38, &sp20);
        }
    }
    return 0;
}
