/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001758C0(M2C_UNK);                     /* extern */
M2C_UNK func_00175958(s32, M2C_UNK);                /* extern */
extern char D_0038DBD0[];
extern char D_0038DBD8[];

void func_00175860(s32 arg0) {
    if ((*(s32 *)D_0038DBD8) == 1) {
        if ((*(s32 *)D_0038DBD0) <= 0) {
            return;
        }
        /* Duplicate return node #4. Try simplifying control flow for better match */
        func_001758C0(0);
        func_00175958(arg0, 0);
        return;
    }
    func_001758C0(0);
    func_00175958(arg0, 0);
}
