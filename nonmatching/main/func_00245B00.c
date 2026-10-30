/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008B7750();                            /* extern */
M2C_UNK func_008B79F0();                            /* extern */
M2C_UNK func_008B7AE0();                            /* extern */
M2C_UNK func_008B7DD0();                            /* extern */
M2C_UNK func_008B7FC0();                            /* extern */
M2C_UNK func_008B81B0();                            /* extern */
M2C_UNK func_008B82A0();                            /* extern */
M2C_UNK func_008B8830();                            /* extern */
extern char D_0053C300[];
extern char D_0053C310[];

void func_00245B00(void) {
    if (((*(s32 *)D_0053C310) & 2) == 2) {
        func_008B7FC0();
    }
    if ((M2C_FIELD(((void *)D_0053C300), s32 *, 0x10) & 1) == 1) {
        func_008B82A0();
    }
    if ((M2C_FIELD(((void *)D_0053C300), s32 *, 0x10) & 4) == 4) {
        func_008B7DD0();
        func_008B7AE0();
    }
    if ((M2C_FIELD(((void *)D_0053C300), s32 *, 0x10) & 8) == 8) {
        func_008B81B0();
        func_008B7AE0();
    }
    if ((M2C_FIELD(((void *)D_0053C300), s32 *, 0x10) & 0x10) == 0x10) {
        func_008B8830();
    }
    func_008B79F0();
    func_008B7750();
    M2C_FIELD(((void *)D_0053C300), s32 *, 0x10) = 0;
}
