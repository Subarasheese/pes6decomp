/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001B7B80(s32);
extern void func_00656310(void);
extern int func_00309420(void);
extern void func_001B7A60(s32);
M2C_UNK func_002D3820(M2C_UNK);                     /* extern */
M2C_UNK func_002D39A0(s32);                         /* extern */
M2C_UNK func_00627710();                            /* extern */
s32 func_00627810();                                /* extern */
s32 func_0063A830();                                /* extern */
M2C_UNK func_0063A9B0();                            /* extern */
s32 func_00B263A0();                                /* extern */
M2C_UNK func_00C71FC0(M2C_UNK);                     /* extern */
M2C_UNK func_00C92370(M2C_UNK);                     /* extern */
M2C_UNK func_00D0C5F0(M2C_UNK);                     /* extern */
M2C_UNK func_00D0CB50();                            /* extern */
extern s32 D_003E9DF8;

s32 func_0063FAC0(void) {
    if (func_00627810() == 0) {
        return 0;
    }
    func_00656310();
    func_00627710();
    if (func_0063A830() == 1) {
        if (func_00309420() == 0) {
            func_001B7B80(0xC);
            func_001B7A60(1);
        } else {
            func_00D0C5F0(0xC);
            func_00D0CB50();
        }
    }
    if (D_003E9DF8 == 0x16) {
        func_00C92370(1);
        func_002D39A0(func_00B263A0() & 0xFF);
        func_00C71FC0(0);
        func_002D3820(1);
        func_0063A9B0();
    }
    return 1;
}
