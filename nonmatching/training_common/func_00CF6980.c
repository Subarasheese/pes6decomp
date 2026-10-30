/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00CF5D90(s32, s32);
M2C_UNK func_00C92F60(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00CF6190(s32);                         /* extern */
extern char D_00D00064[];
extern char D_00D000B0[];
extern char D_00D000B4[];
extern char D_00D000B8[];
extern char D_00D000BC[];

s32 func_00CF6980(s32 arg0, s32 arg1, s32 arg2) {
    if (arg0 == (*(s32 *)D_00D00064)) {
        return 0;
    }
    (*(s32 *)D_00D000BC) = arg1;
    func_00CF6190(arg2);
    func_00CF5D90(arg0, arg2);
    if (arg1 != 0) {
        (*(s32 *)D_00D000B8) = arg1;
        (*(s32 *)D_00D000B0) = arg2;
        (*(s32 *)D_00D000B4) = arg2;
        func_00C92F60(0, 0);
    }
    (*(s32 *)D_00D00064) = arg0;
    return 1;
}
