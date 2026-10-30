/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00AEC360(s32);                         /* extern */
M2C_UNK func_00AEE690();                            /* extern */
extern char D_00B02B74[];
extern char D_00B02B7C[];

s32 func_00AEC900(void) {
    if (((u64) ((s64) (*(u8 *)D_00B02B7C) << 0x3E) >> 0x3F) == 0) {
        return 1;
    }
    func_00AEE690();
    func_00AEC360((*(s32 *)D_00B02B74));
    (*(u8 *)D_00B02B7C) = ((*(u8 *)D_00B02B7C) & ~2) | ((0 & 1) * 2);
    return 1;
}
