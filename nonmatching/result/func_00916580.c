/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_0090F820();                                /* extern */
M2C_UNK func_00916700();                            /* extern */
M2C_UNK func_00916970(s32);                         /* extern */
extern char D_0058D7AA[];
extern void *D_00923FCC;

s32 func_00916580(void) {
    if (func_0090F820() != 0) {

    } else if ((*(s8 *)D_0058D7AA) == 0) {
        if (M2C_FIELD(D_00923FCC, s32 *, 0) < (M2C_FIELD(D_00923FCC, s32 *, 0xC) - 0xC)) {
            func_0026E840(0x8400F802);
            M2C_FIELD(D_00923FCC, s32 *, 0) = (s32) (M2C_FIELD(D_00923FCC, s32 *, 0) + 1);
            func_00916970(M2C_FIELD(D_00923FCC, s32 *, 0) + 0xB);
            func_00916700();
        }
    } else if (M2C_FIELD(D_00923FCC, s32 *, 0) < (M2C_FIELD(D_00923FCC, s32 *, 0xC) - 9)) {
        func_0026E840(0x8400F802);
        M2C_FIELD(D_00923FCC, s32 *, 0) = (s32) (M2C_FIELD(D_00923FCC, s32 *, 0) + 1);
        func_00916970(M2C_FIELD(D_00923FCC, s32 *, 0) + 8);
        func_00916700();
    }
    return 0;
}
