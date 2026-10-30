/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
M2C_UNK func_0099F000(s32);                         /* extern */
M2C_UNK func_009A0170(s32);                         /* extern */
M2C_UNK func_009BD320(s32);                         /* extern */
M2C_UNK func_009BF1C0(s32);                         /* extern */

s32 func_009BE7C0(void *arg0) {
    if (arg0 != NULL) {
        func_009BF1C0(M2C_FIELD(arg0, s32 *, 0x10));
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
        func_009A0170(M2C_FIELD(arg0, s32 *, 8));
        M2C_FIELD(arg0, s32 *, 8) = 0;
        func_0099F000(M2C_FIELD(arg0, s32 *, 4));
        M2C_FIELD(arg0, s32 *, 4) = 0;
        func_009BD320(M2C_FIELD(arg0, s32 *, 0xC));
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
        func_00153FA0(arg0);
        return 0;
    }
    return 4;
}
