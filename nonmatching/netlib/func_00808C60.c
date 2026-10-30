/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002DCA40(void);
extern int func_002DCA50(void);
s16 *func_008472D0(M2C_UNK);                        /* extern */
M2C_UNK func_00848E60(M2C_UNK *);                   /* extern */
s32 func_0084FBE0();                                /* extern */
M2C_UNK func_008554D0(M2C_UNK *);                   /* extern */
M2C_UNK func_008555C0(M2C_UNK *);                   /* extern */
M2C_UNK func_00858F10(M2C_UNK, M2C_UNK *);          /* extern */
void *func_00858FD0(M2C_UNK *, s16);                /* extern */
extern char D_0088A918[];
extern char D_008B21C0[];
extern M2C_UNK func_00884770;

s8 func_00808C60(void *arg0) {
    u8 temp_v1;
    void *temp_s1;

    M2C_FIELD(arg0, s8 *, 3) = 1;
    temp_v1 = M2C_FIELD(arg0, u8 *, 2);
    switch (temp_v1) {                              /* irregular */
    case 4:
        (*(u8 *)D_0088A918) = ((*(u8 *)D_0088A918) & ~1) | (1 & 1);
        break;
    case 1:
        temp_s1 = func_00858FD0(((void *)D_008B21C0), *func_008472D0(1));
        if (func_0084FBE0() != 0) {
        default:
            M2C_FIELD(arg0, s8 *, 3) = -1;
        } else if ((func_002DCA40() == 0) && (M2C_FIELD(temp_s1, u8 *, 0x14) == 0)) {
            M2C_FIELD(arg0, s8 *, 3) = 0;
        } else {
            func_00848E60(((void *)D_008B21C0));
            if (func_002DCA50() != 0) {
                func_008555C0(&func_00884770);
            } else {
                func_008554D0(&func_00884770);
            }
            func_00858F10(-3, ((void *)D_008B21C0));
        }
        break;
    case 2:
        M2C_FIELD(func_008472D0(1), s32 *, 0x24) = 0;
        break;
    case 5:
        (*(u8 *)D_0088A918) = ((*(u8 *)D_0088A918) & ~1) | (0 & 1);
        break;
    }
    return M2C_FIELD(arg0, s8 *, 3);
}
