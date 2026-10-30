/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00D18510();                            /* extern */
M2C_UNK func_00D1A180(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_00D1A8D0();                            /* extern */
extern char D_00D395A4[];
extern char D_00D39A94[];
extern char D_00D39A98[];
extern char D_00D39AA4[];

s32 func_00D1A040(void) {
    s32 var_v1;

    if ((((u64) ((s64) (*(u8 *)D_00D395A4) << 0x3E) >> 0x3F) != 0) && (((u64) ((s64) (*(u8 *)D_00D395A4) << 0x3C) >> 0x3F) == 0)) {
        func_00D18510();
    } else if (((*(u8 *)D_00D395A4) & 1) == 1) {

    } else {
        func_00D1A180((*(s32 *)D_00D39A94), (*(s32 *)D_00D39A98), 2);
        if ((*(s32 *)D_00D39AA4) == 4) {
            if ((*(s32 *)D_00D39A94) != 0) {
                var_v1 = 0x10;
                if ((*(s32 *)D_00D39A94) == 0x10) {
                    (*(s32 *)D_00D39A94) = 0;
                } else {
                    goto block_14;
                }
            } else {
                var_v1 = 1;
                goto block_14;
            }
        } else {
            var_v1 = (*(s32 *)D_00D39A94) + 1;
block_14:
            (*(s32 *)D_00D39A94) = var_v1;
        }
        if ((*(s32 *)D_00D39A94) >= 0x11) {
            (*(s32 *)D_00D39A94) = 0;
        }
        func_0026E840(0x8C008006);
        func_00D1A180((*(s32 *)D_00D39A94), (*(s32 *)D_00D39A98), 3);
        func_00D1A8D0();
    }
    return 0;
}
