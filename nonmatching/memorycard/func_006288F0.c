/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00154F98(s32);
extern void func_00628DF0(void);
M2C_UNK func_0063B410(M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK *, s32); /* extern */
M2C_UNK func_00645670(void *);                      /* extern */
M2C_UNK *func_00645820(M2C_UNK);                    /* extern */
M2C_UNK func_00654440();                            /* extern */
M2C_UNK func_00656020(M2C_UNK *, M2C_UNK);          /* extern */
extern char D_0065A9C8[];
extern char D_0065C2A0[];
extern char D_0065C2AC[];
extern char D_0065D430[];

void func_006288F0(void) {
    M2C_UNK *temp_s0;

    func_00654440();
    if (M2C_FIELD(((void *)D_0065C2A0), s32 *, 0) == 0) {

    } else {
        M2C_FIELD(((void *)D_0065C2A0), s32 *, 0) = 0;
        if (M2C_FIELD(((void *)D_0065C2A0), u8 *, 9) == 0) {

        } else {
            func_00154F98(M2C_FIELD(((void *)D_0065C2A0), s16 *, 4) + 2);
            func_00645670(((void *)D_0065C2A0) + 4);
            temp_s0 = func_00645820(0x82);
            func_0063B410(((void *)D_0065D430), ((void *)D_0065A9C8), temp_s0, func_00645820(0x27), M2C_FIELD(((void *)D_0065C2A0), u8 *, 8) + 1);
            func_00656020(func_00645820(0x81), 0);
            func_00656020(((void *)D_0065D430), 1);
        }
    }
    (*(s32 *)D_0065C2AC) = (s32) M2C_FIELD(((void *)D_0065C2A0), u8 *, 9);
    func_00628DF0();
}
