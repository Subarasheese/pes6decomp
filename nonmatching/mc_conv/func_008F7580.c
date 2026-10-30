/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_002EDDF0(s32);                             /* extern */
s32 func_002EDE60(s32);                             /* extern */
u8 *func_00623FC0(s32, u8);                         /* extern */
extern char D_008FEA80[];
extern char D_008FEA82[];
extern char D_008FEA90[];

void func_008F7580(void) {
    s32 var_a0;
    s32 var_s1;
    s32 var_s2;
    u8 *temp_v0;
    u8 *temp_v0_2;
    u8 *temp_v0_3;
    u8 var_v0;
    u8 var_v1;
    u8 var_v1_2;

    var_s2 = 1;
    var_s1 = 0;
    if ((*(u8 *)D_008FEA82) != 3) {
        if ((*(u8 *)D_008FEA82) != 2) {
            if (M2C_FIELD(((void *)D_008FEA80), u8 *, 3) == 0) {
                M2C_FIELD(((void *)D_008FEA80), s8 *, 0) = 6;
            } else {
                if ((*(s32 *)D_008FEA90) != 0) {
                    temp_v0 = func_00623FC0(0x32, (*(u8 *)D_008FEA82));
                    if (temp_v0 != NULL) {
                        var_v1 = *temp_v0;
                    } else {
                        var_v1 = 0;
                    }
                    if (var_v1 != 0) {
                        goto block_18;
                    }
                } else {
                    temp_v0_2 = func_00623FC0(0, (*(u8 *)D_008FEA82));
                    if (temp_v0_2 != NULL) {
                        var_v1_2 = *temp_v0_2;
                    } else {
                        var_v1_2 = 0;
                    }
                    if (var_v1_2 != 0) {
block_18:
                        var_s1 = 1;
                    }
                }
                if (var_s1 == 0) {
                    func_0026E840(0x8C008005);
                    var_s2 = 0;
                } else if (M2C_FIELD(((void *)D_008FEA80), u8 *, 3) != 1) {
                    M2C_FIELD(((void *)D_008FEA80), u8 *, 5) = 0U;
                    M2C_FIELD(((void *)D_008FEA80), s8 *, 2) = 2;
                } else {
                    M2C_FIELD(((void *)D_008FEA80), s8 *, 0) = 4;
                }
            }
        } else {
            if ((*(s32 *)D_008FEA90) != 0) {
                var_a0 = 0x32;
            } else {
                var_a0 = 0;
            }
            temp_v0_3 = func_00623FC0(M2C_FIELD(((void *)D_008FEA80), u8 *, 5) + (var_a0 + M2C_FIELD(((void *)D_008FEA80), s8 *, 8)), (*(u8 *)D_008FEA82));
            if (temp_v0_3 != NULL) {
                var_v0 = *temp_v0_3;
            } else {
                var_v0 = 0;
            }
            if ((var_v0 == 0) || ((func_002EDDF0((*(s32 *)D_008FEA90)) == 0) && (func_002EDE60((*(s32 *)D_008FEA90)) == 0))) {
                func_0026E840(0x8C008005);
                var_s2 = 0;
            } else if (!(func_002EDDF0((*(s32 *)D_008FEA90)) & 0xFF) && !(func_002EDE60((*(s32 *)D_008FEA90)) & 0xFF)) {
                func_0026E840(0x8C008005);
                var_s2 = 0;
            } else {
                M2C_FIELD(((void *)D_008FEA80), s8 *, 2) = 3;
            }
        }
    } else {
        M2C_FIELD(((void *)D_008FEA80), s8 *, 0) = 3;
    }
    if (var_s2 == 1) {
        func_0026E840(0x84028400);
    }
}
