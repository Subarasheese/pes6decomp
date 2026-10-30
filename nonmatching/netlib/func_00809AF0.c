/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_0081D180();                                /* extern */
M2C_UNK func_0081D240(M2C_UNK);                     /* extern */
M2C_UNK func_0081D300(M2C_UNK);                     /* extern */
s32 func_008481D0();                                /* extern */
f32 func_0084B4C0(M2C_UNK);                         /* extern */
M2C_UNK func_0084EE40(M2C_UNK);                     /* extern */
M2C_UNK func_0087D490();                            /* extern */
M2C_UNK func_009B4450(M2C_UNK, u8 *, u8, M2C_UNK, u8); /* extern */
s32 func_00B24590();                                /* extern */
M2C_UNK func_00B24600(M2C_UNK, s32);                /* extern */
extern char D_00592377[];
extern char D_005926FF[];
extern char D_0059273C[];
extern char D_00592742[];
extern char D_0059274E[];
extern char D_0088A908[];
extern char D_008B14CC[];
extern char D_008B14D4[];

void func_00809AF0(void *arg0) {
    f32 temp_f1;
    u8 temp_a2;
    u8 temp_a4;

    func_0087D490();
    func_0084EE40(0);
    if (((*(u8 *)D_005926FF) == 4) && ((*(u8 *)D_00592377) != 0)) {
        func_00B24600(0, func_00B24590());
        (*(u8 *)D_00592377) = 0;
    }
    if (func_0081D180() != 0) {
        func_0081D300(0);
        func_0081D240(0);
    }
    temp_a4 = (*(u8 *)D_008B14CC);
    temp_a2 = (temp_a4 & ~8) | 8;
    (*(s32 *)D_008B14D4) = (*(s32 *)D_0088A908);
    (*(u8 *)D_008B14CC) = temp_a2;
    func_009B4450(1, ((void *)D_008B14CC), temp_a2, 8, temp_a4);
    if (func_008481D0() != 0) {
        if (((*(u8 *)D_005926FF) != 2) && ((*(u8 *)D_005926FF) != 3) && ((*(u8 *)D_005926FF) != 4) && ((*(u8 *)D_005926FF) != 5)) {

        } else {
            (*(s8 *)D_0059274E) = 3;
            temp_f1 = 1.0f / func_0084B4C0(0);
            (*(s8 *)D_00592742) = 1;
            (*(s32 *)D_0059273C) = (s32) (6.0f / temp_f1);
        }
    }
    M2C_FIELD(arg0, s8 *, 3) = 1;
}
