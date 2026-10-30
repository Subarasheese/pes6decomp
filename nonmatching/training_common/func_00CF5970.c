/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001DF420(void *, u8);
s32 func_00CED1E0(M2C_UNK, M2C_UNK);                /* extern */
extern char D_00D000D0[];
extern void *D_00D000D8;

void func_00CF5970(void) {
    if ((*(s32 *)D_00D000D0) != 0) {
        func_001DF420(D_00D000D8, func_00CED1E0(0xFF, 0x41000000) & 0xFF);
    }
}
