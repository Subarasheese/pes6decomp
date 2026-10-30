/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00134EA0(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_001B02B0(s32, s32);                    /* extern */
extern char D_011D6F04[];
extern char D_011D6F08[];

s32 func_00134CE8(void) {
    func_00134EA0((*(s32 *)D_011D6F04), 0x1A, 2);
    func_001B02B0((*(s32 *)D_011D6F08), (*(s32 *)D_011D6F08) + 1);
    return 2;
}
