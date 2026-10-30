/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00220240(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_008178E0();                            /* extern */
M2C_UNK func_008178F0(M2C_UNK);                     /* extern */
M2C_UNK func_00817930();                            /* extern */
M2C_UNK func_00817C00();                            /* extern */
M2C_UNK func_008187D0();                            /* extern */
M2C_UNK func_00820F10(M2C_UNK);                     /* extern */
M2C_UNK func_00821460();                            /* extern */
M2C_UNK func_00822610();                            /* extern */
M2C_UNK func_0082BE90();                            /* extern */
M2C_UNK func_0093D770();                            /* extern */
M2C_UNK func_0093D850();                            /* extern */
M2C_UNK func_0093D900();                            /* extern */
M2C_UNK func_0093D9B0();                            /* extern */
M2C_UNK func_0093DA60();                            /* extern */
M2C_UNK func_0093DB10();                            /* extern */
M2C_UNK func_0093DBF0();                            /* extern */
M2C_UNK func_009812D0();                            /* extern */
M2C_UNK func_00985D80();                            /* extern */
M2C_UNK func_0099A7C0();                            /* extern */
M2C_UNK func_0099ABA0();                            /* extern */
M2C_UNK func_0099BE30();                            /* extern */
M2C_UNK func_0099C590();                            /* extern */
M2C_UNK func_0099C5C0(M2C_UNK);                     /* extern */
M2C_UNK func_0099C6D0(M2C_UNK);                     /* extern */
M2C_UNK func_0099C7C0(s32);                         /* extern */
M2C_UNK func_0099CFB0();                            /* extern */
M2C_UNK func_0099CFF0(M2C_UNK);                     /* extern */
M2C_UNK func_0099D030(M2C_UNK);                     /* extern */
M2C_UNK func_0099D7F0();                            /* extern */
M2C_UNK func_009FB0B0();                            /* extern */
M2C_UNK func_00D13B90();                            /* extern */
extern char D_008A5F70[];
extern char D_008A5F72[];
extern char D_008AB76C[];

s32 func_00988EC0(void) {
    s16 *var_v1;
    s16 *var_v1_2;
    s16 *var_v1_3;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;

    switch ((*(s16 *)D_008A5F72)) {                           /* irregular */
    case 1:
        func_0099D030(0);
        func_0099CFF0(0);
        func_00985D80();
        func_00820F10(0);
        func_0099C5C0(0);
        func_00817930();
        func_008178F0(0);
        func_0099C6D0(0);
        func_0099D7F0();
        func_008187D0();
        func_009812D0();
        func_00817C00();
        var_a0 = 2;
        (*(s16 *)D_008A5F72) = 2;
        if (2 < 5) {
            var_v1 = ((void *)D_008A5F70) + (2 * 2);
            do {
                var_a0 += 1;
                *var_v1 = 0;
                var_v1 += 2;
            } while (var_a0 < 5);
        }
block_19:
        return 0;
    default:
        var_a0_2 = 2;
        (*(s16 *)D_008A5F72) = 0;
        if (2 < 5) {
            var_v1_2 = ((void *)D_008A5F70) + (2 * 2);
            do {
                var_a0_2 += 1;
                *var_v1_2 = 0;
                var_v1_2 += 2;
            } while (var_a0_2 < 5);
        }
        goto block_19;
    case 0:
        func_00822610();
        var_a0_3 = 2;
        (*(s16 *)D_008A5F72) = 1;
        if (2 < 5) {
            var_v1_3 = ((void *)D_008A5F70) + (2 * 2);
            do {
                var_a0_3 += 1;
                *var_v1_3 = 0;
                var_v1_3 += 2;
            } while (var_a0_3 < 5);
        }
        goto block_19;
    case 2:
        func_00D13B90();
        func_00220240(0, 0x18);
        func_0099C7C0((*(s32 *)D_008AB76C));
        (*(s32 *)D_008AB76C) = 0;
        func_0099CFB0();
        func_008178F0(0);
        func_00817930();
        func_008178E0();
        func_0099BE30();
        func_0099A7C0();
        func_0099C590();
        func_0099C5C0(0);
        func_0093DB10();
        func_0093D770();
        func_0093D850();
        func_0093D900();
        func_0093D9B0();
        func_0093DA60();
        func_0093DBF0();
        func_009FB0B0();
        func_0082BE90();
        func_00821460();
        func_0099ABA0();
        return 1;
    }
}
