/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_0090C2F0();                            /* extern */
M2C_UNK func_0090C4E0();                            /* extern */
M2C_UNK func_0090C6E0();                            /* extern */
M2C_UNK func_0090C9B0();                            /* extern */
M2C_UNK func_0090CB60(s32);                         /* extern */
M2C_UNK func_0090CCC0();                            /* extern */
M2C_UNK func_0090CD80(s32);                         /* extern */
M2C_UNK func_0090CEE0(s32);                         /* extern */
extern char D_0092F048[];

void func_0090DD00(s32 arg0) {
    if (arg0 & 0xFC) {
        func_0090CEE0((*(s32 *)D_0092F048));
        return;
    }
    switch (arg0) {                                 /* irregular */
    case 0x1000:
    case 0x2:
        func_0090CD80((*(s32 *)D_0092F048));
        return;
    case 0x1:
        func_0090CCC0();
        return;
    case 0x400:
    case 0x200:
    case 0x100:
        func_0090CB60((*(s32 *)D_0092F048));
        return;
    case 0x2000:
        func_0090C9B0();
        return;
    case 0x4000:
        func_0090C6E0();
        return;
    case 0x8000:
        func_0090C4E0();
        return;
    case 0x10000:
        func_0090C2F0();
        return;
    }
}
