/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0018A4A0(M2C_UNK, s32);                /* extern */
M2C_UNK func_0018BB80(s32);                         /* extern */
M2C_UNK func_0018DB60(s32);                         /* extern */
M2C_UNK func_0018E610(s32);                         /* extern */
M2C_UNK func_001903C0(s32);                         /* extern */
M2C_UNK func_0019BAA0(s32);                         /* extern */
M2C_UNK func_0019C640(s32);                         /* extern */
extern char D_0051FFC8[];
extern char D_0051FFD0[];

void func_001859F0(void) {
    if ((*(s32 *)D_0051FFC8) & (*(s32 *)D_0051FFD0) & 0x100) {
        func_0018DB60((*(s32 *)D_0051FFC8));
    }
    if ((*(s32 *)D_0051FFC8) & (*(s32 *)D_0051FFD0) & 0x200) {
        func_001903C0((*(s32 *)D_0051FFC8));
    }
    if ((*(s32 *)D_0051FFC8) & (*(s32 *)D_0051FFD0) & 0x10) {
        func_0018E610((*(s32 *)D_0051FFC8));
    }
    if ((*(s32 *)D_0051FFC8) & (*(s32 *)D_0051FFD0) & 0x80) {
        func_0018BB80((*(s32 *)D_0051FFC8));
    }
    if ((*(s32 *)D_0051FFC8) & (*(s32 *)D_0051FFD0) & 0x2000) {
        func_0019C640((*(s32 *)D_0051FFC8));
    }
    if ((*(s32 *)D_0051FFC8) & (*(s32 *)D_0051FFD0) & 0x4000) {
        func_0019BAA0((*(s32 *)D_0051FFC8));
    }
    if ((*(s32 *)D_0051FFC8) & (*(s32 *)D_0051FFD0) & 0x20000) {
        func_0018A4A0(0x20000, (*(s32 *)D_0051FFC8));
    }
}
