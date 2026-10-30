/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00902AB0();                            /* extern */
M2C_UNK func_0090A410(M2C_UNK, M2C_UNK, M2C_UNK, f32); /* extern */
M2C_UNK func_0090B0E0(M2C_UNK);                     /* extern */
extern char D_0092F0FA[];

s32 func_00902DB0(void) {
    func_00902AB0();
    func_0090A410(0x19, 0xFF, -1, (f32) (*(s16 *)D_0092F0FA));
    func_0090B0E0(0x80);
    return 1;
}
