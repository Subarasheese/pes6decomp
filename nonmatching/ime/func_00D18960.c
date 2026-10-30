/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00D1AA70();                            /* extern */
M2C_UNK func_00D1B840(M2C_UNK *, s32, s32, s32 *, s32 *); /* extern */
s32 func_00D1BAC0(M2C_UNK *, s32, s32, s32);        /* extern */
extern s32 D_003EB368;
extern char D_00D395A4[];
extern char D_00D395C8[];
extern char D_00D395D0[];
extern char D_00D395D4[];
extern char D_00D395E4[];
extern char D_00D39640[];
extern char D_00D39AA4[];
extern char D_00D39AAC[];

s32 func_00D18960(void) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_s0;
    s32 var_v1;

    var_s0 = 0;
    if (((*(s32 *)D_00D39AA4) != 0) && ((*(s32 *)D_00D39AA4) != 1)) {
        if (((u64) ((s64) *(u8 *)0xD395A4 << 0x3E) >> 0x3F) != 0) {
            temp_v0 = func_00D1BAC0(((void *)D_00D39640), (s32) (*(f32 *)D_00D395C8), (*(s32 *)D_00D395D0), (*(s32 *)D_00D395D4));
            if (temp_v0 > 0) {
                func_00D1B840(((void *)D_00D39640), (s32) (*(f32 *)D_00D395C8), temp_v0, ((void *)D_00D395D0), ((void *)D_00D395D4));
                func_0026E840(0x8C008006);
                var_s0 = -1;
            } else if ((*(s8 *)D_00D395E4) == 0) {
                func_0026E840(0x8C008005);
                (*(s8 *)D_00D395E4) = 1;
                var_s0 = -1;
            }
        } else {
            if ((*(s32 *)D_00D395D0) != 0) {
                func_0026E840(0x8C008006);
                var_s0 = -1;
            } else if (((*(s32 *)D_00D395D4) == 0) && ((*(s8 *)D_00D395E4) == 0)) {
                func_0026E840(0x8C008005);
                (*(s8 *)D_00D395E4) = 1;
                var_s0 = -1;
            }
            var_v1 = (*(s32 *)D_00D395D0) - 1;
            goto block_43;
        }
    } else {
        temp_v1 = ((s32) (*(s32 *)D_00D39AAC) >> 3) & 3;
        switch (temp_v1) {                          /* irregular */
        case 1:
            if (D_003EB368 != 0) {
                func_0026E840(0x8C008006);
                var_s0 = -1;
            } else if ((*(s8 *)D_00D395E4) != 0) {
                var_s0 = 0;
            } else {
                func_0026E840(0x8C008005);
                (*(s8 *)D_00D395E4) = 1;
                var_s0 = -1;
            }
            D_003EB368 -= 1;
            break;
        case 0:
            if (((u64) ((s64) (*(u8 *)D_00D395A4) << 0x3E) >> 0x3F) != 0) {
                temp_v0_2 = func_00D1BAC0(((void *)D_00D39640), (s32) (*(f32 *)D_00D395C8), (*(s32 *)D_00D395D0), (*(s32 *)D_00D395D4));
                if (temp_v0_2 > 0) {
                    func_00D1B840(((void *)D_00D39640), (s32) (*(f32 *)D_00D395C8), temp_v0_2, ((void *)D_00D395D0), ((void *)D_00D395D4));
                    func_0026E840(0x8C008006);
                    var_s0 = -1;
                } else if ((*(s8 *)D_00D395E4) != 0) {
                    var_s0 = 0;
                } else {
                    func_0026E840(0x8C008005);
                    (*(s8 *)D_00D395E4) = 1;
                    var_s0 = -1;
                }
            } else {
                if ((*(s32 *)D_00D395D0) != 0) {
                    func_0026E840(0x8C008006);
                    var_s0 = -1;
                } else if ((*(s32 *)D_00D395D4) == 0) {
                    if ((*(s8 *)D_00D395E4) != 0) {
                        var_s0 = 0;
                    } else {
                        func_0026E840(0x8C008005);
                        (*(s8 *)D_00D395E4) = 1;
                        var_s0 = -1;
                    }
                }
                var_v1 = (*(s32 *)D_00D395D0) - 1;
block_43:
                (*(s32 *)D_00D395D0) = var_v1;
            }
            break;
        }
    }
    if ((*(s32 *)D_00D395D0) < 0) {
        (*(s32 *)D_00D395D0) = 0;
    }
    if (D_003EB368 < 0) {
        D_003EB368 = 0;
    }
    func_00D1AA70();
    return var_s0;
}
