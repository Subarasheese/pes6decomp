/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0017E120(int);
extern s32 func_00152130(s32, s8);
s32 func_00B79600();                                /* extern */
extern char D_00591BE4[];
extern char D_00CBAA07[];
extern char D_00CBAA0E[];
extern char D_00CBCD96[];
extern char D_00CBCDC4[];
extern char D_00CBD264[];

void func_009B6920(void) {
    s32 temp_a0;
    s32 var_a3;

    if (func_00B79600() != 0) {
        func_0017E120(1);
        if ((*(u8 *)D_00CBAA07) != 3) {
            goto block_2;
        }
        var_a3 = (*(u8 *)D_00CBCD96) + (*(s32 *)D_00CBCDC4);
        temp_a0 = (((*(u8 *)D_00591BE4) * 4) / 3) + ((u32) ((*(u8 *)D_00591BE4) * 4) >> 0x1F);
        if (var_a3 < temp_a0) {
            var_a3 = temp_a0;
        }
        if (((*(u8 *)D_00591BE4) + var_a3) >= 0x12D) {
            (*(s8 *)D_00CBAA0E) = 6;
            return;
        }
block_2:
        switch ((*(u8 *)D_00CBAA07)) {                       /* irregular */
        default:
            if ((u32) ((*(u8 *)D_00CBAA07) - 8) < 3U) {
            case 0:
            case 5:
            case 3:
block_14:
                func_00152130(0, 0x10);
            }
block_7:
            (*(s8 *)D_00CBAA0E) = 4;
            return;
        case 1:
            if (((*(s32 *)D_00CBD264) + ((u8) (*(u8 *)D_00591BE4) >> 1)) >= 0x12D) {
                (*(s8 *)D_00CBAA0E) = 6;
                return;
            }
            if (((*(u8 *)D_00CBAA07) == 0) || ((*(u8 *)D_00CBAA07) == 5) || ((*(u8 *)D_00CBAA07) == 3) || ((u32) ((*(u8 *)D_00CBAA07) - 8) < 3U)) {
                goto block_14;
            }
            goto block_7;
        }
    }
}
