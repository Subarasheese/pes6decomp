/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001BC2B0();                            /* extern */
M2C_UNK func_001BC300();                            /* extern */
s32 func_0023C230(s32 *);                           /* extern */
M2C_UNK func_0024DFB0(M2C_UNK);                     /* extern */
M2C_UNK func_0024DFD0(M2C_UNK);                     /* extern */
s32 func_00262BB0(s32);                             /* extern */
s32 func_002640B0(s32 *);                           /* extern */
M2C_UNK func_00268EA0(M2C_UNK);                     /* extern */
s32 func_0026AD30(s32 *);                           /* extern */
s64 func_0026AE40(M2C_UNK);                         /* extern */
s32 func_0026B8B0(s8);                              /* extern */
M2C_UNK func_002CAFC0();                            /* extern */
M2C_UNK func_008FAD70(M2C_UNK);                     /* extern */
M2C_UNK func_008FADB0();                            /* extern */
M2C_UNK func_00C83010();                            /* extern */
extern char D_003AE970[];
extern char D_003AE992[];
extern s32 *D_003AE9D0;
extern char D_00591DB6[];

s32 func_008FEFA0(void) {
    s32 *temp_a0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s0;
    s32 var_v0;
    s32 var_v0_2;
    s64 temp_v0_3;
    s64 temp_v0_4;

    temp_v0 = M2C_FIELD(D_003AE9D0, s32 *, 0);
    var_s0 = 0;
    if (temp_v0 != 1) {
        if (temp_v0 != 0) {
            var_s0 = 1;
        } else {
            if (((*(s8 *)D_003AE970) != 0) && ((*(s8 *)D_003AE970) != 1) && ((*(s8 *)D_003AE970) != 2) && ((*(s8 *)D_003AE970) != 5) && ((*(s8 *)D_003AE970) != 8) && ((*(s8 *)D_003AE970) != 3) && ((*(s8 *)D_003AE970) != 4)) {
                func_0024DFD0(1);
            }
            if (((*(s8 *)D_003AE970) == 6) || ((*(s8 *)D_003AE970) == 9) || ((*(s8 *)D_003AE970) == 7) || ((*(s8 *)D_003AE970) == 0xA)) {
                func_0024DFB0(1);
            }
            var_v0 = M2C_FIELD(D_003AE9D0, s32 *, 0) + 1;
            goto block_32;
        }
    } else {
        temp_v0_2 = M2C_FIELD(D_003AE9D0, s32 *, 4);
        temp_a0 = D_003AE9D0 + 4;
        if (temp_v0_2 != 0) {
            M2C_FIELD(D_003AE9D0, s32 *, 4) = (s32) (temp_v0_2 - 1);
            if (M2C_FIELD(D_003AE9D0, s32 *, 4) == 0) {
                func_00268EA0(0);
                func_002CAFC0();
            }
        } else if ((*(u8 *)D_003AE992) == 0) {
            if (M2C_FIELD(D_003AE9D0, s32 *, 8) == 0) {
                var_v0_2 = func_0023C230(temp_a0);
            } else {
                var_v0_2 = func_00262BB0(func_002640B0(temp_a0));
            }
            if (var_v0_2 == 0) {

            } else {
                goto block_27;
            }
        } else if (func_0026AD30(temp_a0) != 0) {
block_27:
            if (func_0026B8B0((*(s8 *)D_00591DB6)) == -1) {
                temp_v0_3 = func_0026AE40(0);
                (*(s8 *)D_00591DB6) = (s8) temp_v0_3;
                if (((s64) (temp_v0_3 << 0x38) >> 0x38) == -1) {
                    temp_v0_4 = func_0026AE40(1);
                    (*(s8 *)D_00591DB6) = (s8) temp_v0_4;
                    if (((s64) (temp_v0_4 << 0x38) >> 0x38) == -1) {
                        (*(s8 *)D_00591DB6) = 0;
                    }
                }
            }
            func_001BC2B0();
            func_008FAD70(-1);
            func_008FADB0();
            func_001BC300();
            func_00C83010();
            var_v0 = M2C_FIELD(D_003AE9D0, s32 *, 0) + 1;
block_32:
            M2C_FIELD(D_003AE9D0, s32 *, 0) = var_v0;
        }
    }
    return var_s0;
}
