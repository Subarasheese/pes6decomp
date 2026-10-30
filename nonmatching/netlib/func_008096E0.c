/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0081D180(void);
extern s32 func_0081CCA0(s32);
extern s32 func_0081CC20(s32);
extern s32 func_0081D300(s32);
extern s32 func_0081D240(s32);
M2C_UNK func_0087D490();                            /* extern */
s32 func_009E1C90(M2C_UNK, M2C_UNK);                /* extern */
s32 func_00B24590();                                /* extern */
M2C_UNK func_00B24600(M2C_UNK, s32);                /* extern */
extern char D_00592377[];
extern char D_005926FD[];
extern char D_005926FF[];
extern char D_008B14CC[];
extern char D_008B14D0[];
extern char D_008B14DC[];

s8 func_008096E0(void *arg0) {
    u8 temp_v1;

    M2C_FIELD(arg0, s8 *, 3) = 1;
    temp_v1 = M2C_FIELD(arg0, u8 *, 2);
    switch (temp_v1) {                              /* irregular */
    case 1:
        if ((*(u8 *)D_005926FD) != 0) {
            (*(u8 *)D_008B14CC) = ((*(u8 *)D_008B14CC) & ~0x20) | ((1 & 1) << 5);
            func_0081CCA0(1);
            func_0081CC20(3);
            func_0081D300((((*(s32 *)D_008B14DC) - (*(s32 *)D_008B14D0)) / 1000) + ((u32) ((*(s32 *)D_008B14DC) - (*(s32 *)D_008B14D0)) >> 0x1F));
            func_0081D240(1);
            func_0087D490();
            if (((*(u8 *)D_005926FF) == 4) && ((*(u8 *)D_00592377) != 0)) {
                func_00B24600(0, func_00B24590());
                (*(u8 *)D_00592377) = 0;
            }
        }
        break;
    case 2:
        if (func_0081D180() != 0) {
            func_0081D300(0);
            func_0081D240(0);
        }
        (*(u8 *)D_008B14CC) = ((*(u8 *)D_008B14CC) & ~0x20) | ((0 & 1) << 5);
        break;
    case 3:
        if (((func_009E1C90(1, 1) & 0xFF) == 5) && (func_0081D180() != 0)) {
            func_0081CCA0(0);
        }
        break;
    }
    return M2C_FIELD(arg0, s8 *, 3);
}
