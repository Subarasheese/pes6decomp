/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001A5670(f32);
s32 func_00205960();                                /* extern */
M2C_UNK func_00205BC0(s8);                          /* extern */
M2C_UNK func_00205EE0();                            /* extern */
M2C_UNK func_00206930(s64);                         /* extern */
M2C_UNK func_00206BA0(s8);                          /* extern */
M2C_UNK func_00206F80(s8);                          /* extern */
extern char D_00533044[];
extern char D_00533048[];
extern char D_0053304A[];

void func_00207280(void) {
    switch ((*(s8 *)D_0053304A)) {                           /* irregular */
    case 0:
        (*(s32 *)D_00533044) = 0;
        (*(s8 *)D_00533048) = 0xFF;
        func_001A5670(1430.0f);
        func_00205EE0();
        func_00206930((s64) ((func_00205960() & 0xFF) << 0x38) >> 0x38);
        (*(s8 *)D_0053304A) = 1;
        return;
    case 1:
        func_00205BC0((*(s8 *)D_0053304A));
        (*(s8 *)D_0053304A) = 2;
        return;
    case 2:
        func_00206F80((*(s8 *)D_0053304A));
        return;
    case 3:
        func_00206BA0((*(s8 *)D_0053304A));
        return;
    }
}
