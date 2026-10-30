/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0027CB00(void);
M2C_UNK func_00909AF0();                            /* extern */
M2C_UNK func_00909D30();                            /* extern */
s32 func_0090B510(M2C_UNK);                         /* extern */
extern char D_0092F01C[];
extern char D_0092F020[];
extern char D_0092F028[];
extern char D_0092F02C[];
extern char D_0092F04C[];

void func_0090D4E0(s32 arg0) {
    s32 temp_v0;
    s32 var_a0;

    temp_v0 = func_0090B510(1);
    switch (arg0) {                                 /* irregular */
    case 0x10000:
        if (!(arg0 & temp_v0)) {
            func_0027CB00();
            (*(s32 *)D_0092F01C) = 0;
            (*(s32 *)D_0092F020) = 0;
            var_a0 = (*(s32 *)D_0092F04C) & ~arg0;
block_17:
            (*(s32 *)D_0092F04C) = var_a0;
        }
        return;
    case 0x2000:
        if (!(arg0 & temp_v0)) {
            func_00909AF0();
            (*(s32 *)D_0092F028) = 0;
            (*(s32 *)D_0092F02C) = 0;
            var_a0 = (*(s32 *)D_0092F04C) & ~arg0;
            goto block_17;
        }
        break;
    case 0x1000:
        if (!(arg0 & temp_v0) && ((*(s32 *)D_0092F04C) & arg0)) {
            func_00909D30();
            var_a0 = (*(s32 *)D_0092F04C) & ~arg0;
            goto block_17;
        }
        break;
    }
}
