/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7F10(void *);
extern void func_001B9C60(void *);
extern void func_001F1EA0(void *);
M2C_UNK func_002DC1D0(s32);                         /* extern */
M2C_UNK func_002DF960(s32);                         /* extern */
M2C_UNK func_008C38A0(void *);                      /* extern */
M2C_UNK func_008C5D70(void *);                      /* extern */

void func_008C3920(void *arg0) {
    void *temp_a0;

    func_002DC1D0(M2C_FIELD(arg0, s32 *, 0x50));
    func_002DF960(M2C_FIELD(arg0, s32 *, 0x54));
    temp_a0 = M2C_FIELD(arg0, void **, 0x58);
    if (temp_a0 != NULL) {
        func_001B9C60(temp_a0);
    }
    func_001F1EA0(M2C_FIELD(arg0, void **, 0x18));
    func_008C5D70(arg0 + 0x68);
    func_001D7F10(M2C_FIELD(arg0, void **, 0x5C));
    func_001D7F10(M2C_FIELD(arg0, void **, 0x60));
    func_001D7F10(M2C_FIELD(arg0, void **, 0x64));
    func_008C38A0(arg0);
}
