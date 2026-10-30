/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001F1EA0(void *);
extern void func_001D7F10(void *);
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_008C5D70(s32);                         /* extern */

void func_008E6BF0(void *arg0) {
    if (arg0 != NULL) {
        func_008C5D70(arg0 + 0x9EC);
        func_001F1EA0(M2C_FIELD(arg0, void **, 0x6C0));
        func_001F1EA0(M2C_FIELD(arg0, void **, 0x6C4));
        func_001D7F10(M2C_FIELD(arg0, void **, 0x9D0));
        func_001D7F10(M2C_FIELD(arg0, void **, 0x9D4));
        func_001D7F10(M2C_FIELD(arg0, void **, 0x9D8));
        func_001C48E8(arg0, 0, 0xA0C);
    }
}
