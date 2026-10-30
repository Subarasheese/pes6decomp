/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00814FC0(M2C_UNK *);                       /* extern */
M2C_UNK func_00935E80(s32);                         /* extern */
M2C_UNK func_009C63F0();                            /* extern */
M2C_UNK func_009D5670();                            /* extern */
M2C_UNK func_00D0C980();                            /* extern */
extern char D_008A5F70[];
extern char D_00A02E30[];
extern char D_00A7DD90[];

s32 func_009C9EF0(void) {
    s16 *temp_v0;
    s16 *temp_v0_2;
    s16 *temp_v0_3;
    s16 *temp_v0_4;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a1;

    if (func_00814FC0(((void *)D_00A02E30)) == 0) {
        return 0;
    }
    func_00D0C980();
    func_009C63F0();
    func_009D5670();
    switch ((*(s32 *)D_00A7DD90)) {                           /* irregular */
    case 6:
        (*(s16 *)D_008A5F70) = 0x28;
        var_a0 = 1;
loop_29:
        if (var_a0 < 5) {
            temp_v0 = &(((void *)D_008A5F70))[var_a0];
            var_a0 += 1;
            *temp_v0 = 0;
            goto loop_29;
        }
block_30:
        return 1;
    case 2:
        (*(s16 *)D_008A5F70) = 0x1F;
        var_a0_2 = 1;
loop_20:
        if (var_a0_2 < 5) {
            temp_v0_2 = &(((void *)D_008A5F70))[var_a0_2];
            var_a0_2 += 1;
            *temp_v0_2 = 0;
            goto loop_20;
        }
        return 2;
    default:
        var_a1 = 1;
        if ((*(s32 *)D_00A7DD90) == 1) {
            (*(s16 *)D_008A5F70) = 0x1D;
loop_16:
            if (var_a1 < 5) {
                temp_v0_3 = &(((void *)D_008A5F70))[var_a1];
                var_a1 += 1;
                *temp_v0_3 = 0;
                goto loop_16;
            }
            return 2;
        }
    case 3:
        (*(s16 *)D_008A5F70) = 0x18;
        var_a0_3 = 1;
loop_24:
        if (var_a0_3 < 5) {
            temp_v0_4 = &(((void *)D_008A5F70))[var_a0_3];
            var_a0_3 += 1;
            *temp_v0_4 = 0;
            goto loop_24;
        }
        goto block_30;
    case 4:
        func_00935E80((*(s32 *)D_00A7DD90));
        goto block_30;
    }
}
