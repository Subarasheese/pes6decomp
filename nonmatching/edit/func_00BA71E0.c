/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00BA6600(M2C_UNK);                         /* extern */
s32 func_00BAAD60(M2C_UNK *, M2C_UNK *);            /* extern */
extern char D_00CE42E0[];
extern char D_00CE4330[];
extern char D_00CE4560[];

void func_00BA71E0(void *arg0) {
    M2C_UNK *var_a0;
    M2C_UNK *var_v1_3;
    s32 temp_v0;
    s32 var_a1;
    s32 var_v1_2;
    s8 var_v1;

    temp_v0 = func_00BA6600(1);
    switch (temp_v0) {                              /* irregular */
    case 2:
        var_v1 = 3;
        M2C_FIELD(arg0, s8 *, 0x11) = (s8) M2C_FIELD(arg0, s8 *, 0x10);
block_31:
        M2C_FIELD(arg0, s8 *, 0x10) = var_v1;
        return;
    case 1:
        M2C_FIELD(arg0, s32 *, 0xC) = 2;
        if (func_00BAAD60(((void *)D_00CE4560), ((void *)D_00CE42E0)) == 0) {
            var_v1_2 = 0;
        } else {
            var_a1 = 0;
            var_a0 = ((void *)D_00CE4330);
loop_14:
            if ((var_a1 >= 0) && (var_a1 < 8)) {
                var_v1_3 = var_a0;
            } else {
                var_v1_3 = NULL;
            }
            if (M2C_FIELD(var_v1_3, s32 *, 4) == 0) {
                var_a1 += 1;
                var_a0 += 0x50;
                if (var_a1 >= 7) {
                    var_v1_2 = 1;
                } else {
                    goto loop_14;
                }
            } else {
                var_v1_2 = 0;
            }
        }
        if (var_v1_2 != 0) {
            var_v1 = 0xC;
            M2C_FIELD(arg0, s8 *, 0x11) = (s8) M2C_FIELD(arg0, s8 *, 0x10);
        } else {
            var_v1 = 8;
            M2C_FIELD(arg0, s8 *, 0x11) = (s8) M2C_FIELD(arg0, s8 *, 0x10);
        }
        goto block_31;
    case 0:
        M2C_FIELD(arg0, s32 *, 0xC) = 1;
        M2C_FIELD(arg0, s8 *, 0x2C) = 0;
        var_v1 = 0xA;
        M2C_FIELD(arg0, s8 *, 0x11) = (s8) M2C_FIELD(arg0, s8 *, 0x10);
        goto block_31;
    }
}
