/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0018E6F0(s32);                         /* extern */
M2C_UNK func_001917C0(s32);                         /* extern */
M2C_UNK func_00193800(s32);                         /* extern */
M2C_UNK func_00195820(s32);                         /* extern */
M2C_UNK func_00198150(s32);                         /* extern */
M2C_UNK func_00199F50(s32);                         /* extern */
M2C_UNK func_0019AB60(s32);                         /* extern */
extern char D_0051FFC8[];
extern char D_0051FFD0[];

void func_00185BB0(void) {
    if ((*(s32 *)D_0051FFC8) & (*(s32 *)D_0051FFD0) & 0x800) {
        func_0019AB60((*(s32 *)D_0051FFC8));
    }
    if ((*(s32 *)D_0051FFC8) & (*(s32 *)D_0051FFD0) & 0x1000) {
        func_00199F50((*(s32 *)D_0051FFC8));
    }
    if ((*(s32 *)D_0051FFC8) & (*(s32 *)D_0051FFD0) & 0x10) {
        func_0018E6F0((*(s32 *)D_0051FFC8));
    }
    if ((*(s32 *)D_0051FFC8) & (*(s32 *)D_0051FFD0) & 8) {
        func_00198150((*(s32 *)D_0051FFC8));
    }
    if ((*(s32 *)D_0051FFC8) & (*(s32 *)D_0051FFD0) & 2) {
        func_00195820((*(s32 *)D_0051FFC8));
    }
    if ((*(s32 *)D_0051FFC8) & (*(s32 *)D_0051FFD0) & 4) {
        func_00193800((*(s32 *)D_0051FFC8));
    }
    if ((*(s32 *)D_0051FFC8) & (*(s32 *)D_0051FFD0) & 1) {
        func_001917C0((*(s32 *)D_0051FFC8));
    }
}
