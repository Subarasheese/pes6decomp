/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
s32 func_00BC4F70(M2C_UNK, void *);                 /* extern */
extern M2C_UNK func_00BE6B70;

s32 func_00BE69E0(void *arg0) {
    if (func_00BC4F70(-1, M2C_FIELD(arg0, void **, 0x10)) != 0) {
        M2C_FIELD(arg0, M2C_UNK **, 4) = &func_00BE6B70;
        func_00153FA0(M2C_FIELD(arg0, void **, 0x10));
    }
    return 0;
}
