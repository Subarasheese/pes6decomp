/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0021DF90(s32);
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_001D5C40(M2C_UNK);                     /* extern */
M2C_UNK func_001F0210(s32);                         /* extern */
M2C_UNK func_00C8E380();                            /* extern */
extern char D_00CCD570[];
extern char D_00CCD88F[];

void func_00C8CE10(void) {
    func_00C8E380();
    if ((*(u8 *)D_00CCD88F) != 0) {
        func_001D5C40(0x1024E);
        func_001F0210(func_0021DF90(0xD));
    }
    func_001C48E8(((void *)D_00CCD570), 0, 0x330);
}
