/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0099AA00(void);
M2C_UNK func_0081CC20(M2C_UNK);                     /* extern */
M2C_UNK func_0081CC60(M2C_UNK);                     /* extern */
M2C_UNK func_00821320();                            /* extern */
M2C_UNK func_00821580();                            /* extern */
M2C_UNK func_00822280();                            /* extern */
s32 func_008225C0(M2C_UNK *);                       /* extern */
M2C_UNK func_00822640(M2C_UNK);                     /* extern */
M2C_UNK func_0093D7C0();                            /* extern */
M2C_UNK func_0093D8A0();                            /* extern */
M2C_UNK func_0093D950();                            /* extern */
M2C_UNK func_0093DA00();                            /* extern */
M2C_UNK func_0093DAB0();                            /* extern */
M2C_UNK func_0093DB60();                            /* extern */
M2C_UNK func_0093DC40();                            /* extern */
M2C_UNK func_0094DE00();                            /* extern */
M2C_UNK func_0094E4E0();                            /* extern */
M2C_UNK func_0094E650();                            /* extern */
M2C_UNK func_0094EDB0();                            /* extern */
M2C_UNK func_0094EF00();                            /* extern */
M2C_UNK func_00985EC0();                            /* extern */
M2C_UNK func_0099AEF0();                            /* extern */
s32 func_0099BB10(M2C_UNK *);                       /* extern */
s32 func_0099BB30(M2C_UNK *);                       /* extern */
M2C_UNK func_0099D0A0();                            /* extern */
M2C_UNK func_009FB110();                            /* extern */
extern char D_008A5F70[];

s32 func_00987B90(s32 arg0) {
    s16 *temp_s0;
    s16 *var_v1;
    s16 *var_v1_2;
    s16 *var_v1_3;
    s16 *var_v1_4;
    s16 temp_v1;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a1;

    temp_s0 = ((void *)D_008A5F70) + (arg0 * 2);
    temp_v1 = *temp_s0;
    switch (temp_v1) {                              /* irregular */
    default:
        var_a1 = arg0 + 1;
        *temp_s0 = 0;
        if (var_a1 < 5) {
            var_v1 = ((void *)D_008A5F70) + (var_a1 * 2);
            do {
                var_a1 += 1;
                *var_v1 = 0;
                var_v1 += 2;
            } while (var_a1 < 5);
        }
        return 1;
    case 0:
        if (func_0099BB30(((void *)D_008A5F70)) == 1) {
            var_a0 = arg0 + 1;
            *temp_s0 += 1;
            if (var_a0 < 5) {
                var_v1_2 = ((void *)D_008A5F70) + (var_a0 * 2);
                do {
                    var_a0 += 1;
                    *var_v1_2 = 0;
                    var_v1_2 += 2;
                } while (var_a0 < 5);
            }
        }
block_24:
        return 0;
    case 1:
        if (func_0099BB10(((void *)D_008A5F70)) == 1) {
            var_a0_2 = arg0 + 1;
            *temp_s0 += 1;
            if (var_a0_2 < 5) {
                var_v1_3 = ((void *)D_008A5F70) + (var_a0_2 * 2);
                do {
                    var_a0_2 += 1;
                    *var_v1_3 = 0;
                    var_v1_3 += 2;
                } while (var_a0_2 < 5);
            }
        }
        goto block_24;
    case 2:
        if (func_008225C0(((void *)D_008A5F70)) == 1) {
            func_00822640(0x9A08840E);
            func_0093DB60();
            func_0093D7C0();
            func_0093D8A0();
            func_0093D950();
            func_0093DA00();
            func_0093DAB0();
            func_0093DC40();
            func_009FB110();
            func_0094EF00();
            func_0094EDB0();
            func_0094E650();
            func_0094E4E0();
            func_00822280();
            func_0094DE00();
            func_0099AA00();
            func_00821320();
            func_00821580();
            func_00985EC0();
            func_0099AEF0();
            func_0099D0A0();
            func_0081CC60(0);
            func_0081CC20(0);
            var_a0_3 = arg0 + 1;
            *temp_s0 = 0;
            if (var_a0_3 < 5) {
                var_v1_4 = ((void *)D_008A5F70) + (var_a0_3 * 2);
                do {
                    var_a0_3 += 1;
                    *var_v1_4 = 0;
                    var_v1_4 += 2;
                } while (var_a0_3 < 5);
            }
            return 1;
        }
        goto block_24;
    }
}
