/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_001E62C0(void);
extern void func_001EFB90(void *);
extern s32 func_001EDCE0(void *);
M2C_UNK func_001D68C0(void *, s32, s32, s32);       /* extern */

void func_001D66F0(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (func_001EDCE0(M2C_FIELD(arg0, void **, 0xC)) != 0) {
        if (((func_001E62C0() & 2) == 2) && (M2C_FIELD(arg0, u8 *, 0x24) & 1)) {
            func_001D68C0(arg0, arg1, arg2, arg3);
            M2C_FIELD(arg0, u8 *, 0x24) = (u8) (M2C_FIELD(arg0, u8 *, 0x24) & 0xFE);
        }
        func_001EFB90(M2C_FIELD(arg0, void **, 0xC));
        M2C_FIELD(arg0, u8 *, 0x24) = 0U;
    }
}
