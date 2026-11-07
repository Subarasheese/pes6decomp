/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00184200(M2C_UNK, s32);                /* extern */
M2C_UNK func_00184F10(s32);                         /* extern */
M2C_UNK func_0018BAF0(s32);                         /* extern */
M2C_UNK func_0018E4A0(s32);                         /* extern */
extern char D_0051FFC8[];
extern char D_0051FFD0[];

void func_00185910(void) {
    if ((*(s32 *)D_0051FFC8) & (*(s32 *)D_0051FFD0) & 0x10) {
        func_0018E4A0((*(s32 *)D_0051FFC8));
    }
    if ((*(s32 *)D_0051FFC8) & (*(s32 *)D_0051FFD0) & 0x20) {
        func_00184F10((*(s32 *)D_0051FFC8));
    }
    if ((*(s32 *)D_0051FFC8) & (*(s32 *)D_0051FFD0) & 0x10000) {
        func_00184200(0x10000, (*(s32 *)D_0051FFC8));
    }
    if ((*(s32 *)D_0051FFC8) & (*(s32 *)D_0051FFD0) & 0x80) {
        func_0018BAF0((*(s32 *)D_0051FFC8));
    }
}
