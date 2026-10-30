/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00815B70(M2C_UNK);                     /* extern */
M2C_UNK func_00820F10(M2C_UNK);                     /* extern */
M2C_UNK func_008210C0(M2C_UNK);                     /* extern */
M2C_UNK func_00821790(M2C_UNK);                     /* extern */
s32 func_00940910();                                /* extern */
M2C_UNK func_0099C590();                            /* extern */
M2C_UNK func_0099D030(M2C_UNK);                     /* extern */
M2C_UNK func_009C6C50();                            /* extern */
M2C_UNK func_009D5FD0();                            /* extern */
M2C_UNK func_00D0BF70(M2C_UNK);                     /* extern */
M2C_UNK func_00D10140(M2C_UNK);                     /* extern */
extern char D_008A5F70[];
extern char D_008A5F74[];

s32 func_009CA2B0(void) {
    s16 *temp_v0_2;
    s16 *temp_v0_3;
    s32 temp_v0;
    s32 var_a0;
    s32 var_a0_2;

    func_0099D030(1);
    temp_v0 = func_00940910();
    switch (temp_v0) {                              /* irregular */
    case 4:
        func_0099D030(0);
        func_00815B70(0);
        func_00815B70(1);
        func_00815B70(2);
        func_00815B70(3);
        func_00D0BF70(0);
        func_00D10140(5);
        func_0099C590();
        func_00820F10(1);
        func_008210C0(7);
        func_009C6C50();
        func_009D5FD0();
        func_00821790(0);
        var_a0 = 3;
        (*(s16 *)D_008A5F74) = 1;
loop_12:
        if (var_a0 < 5) {
            temp_v0_2 = &(((void *)D_008A5F70))[var_a0];
            var_a0 += 1;
            *temp_v0_2 = 0;
            goto loop_12;
        }
    case 0:
        return 0;
    default:
    case 2:
    case 1:
        func_0099D030(0);
        (*(s16 *)D_008A5F70) = 0x28;
        var_a0_2 = 1;
loop_8:
        if (var_a0_2 < 5) {
            temp_v0_3 = &(((void *)D_008A5F70))[var_a0_2];
            var_a0_2 += 1;
            *temp_v0_3 = 0;
            goto loop_8;
        }
        return 1;
    }
}
