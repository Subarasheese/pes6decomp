/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0019ADD0(M2C_UNK, M2C_UNK *);          /* extern */
extern char D_005CBEF0[];
extern M2C_UNK func_001A70C0;

s32 func_001A6B90(s32 arg0) {
    (*(s32 *)D_005CBEF0) = arg0;
    func_0019ADD0(1, &func_001A70C0);
    func_0019ADD0(2, &func_001A70C0);
    func_0019ADD0(3, &func_001A70C0);
    return arg0;
}
