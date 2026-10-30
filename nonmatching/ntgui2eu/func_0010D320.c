/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001AD620(M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
extern char D_005F7F48[];
extern char D_005F7F68[];

void func_0010D320(void *arg0, s32 arg1) {
    if (arg0 == NULL) {
        func_001AD620(((void *)D_005F7F48), 0x138, ((void *)D_005F7F68));
    }
    M2C_FIELD(arg0, s32 *, 0x300) = arg1;
}
