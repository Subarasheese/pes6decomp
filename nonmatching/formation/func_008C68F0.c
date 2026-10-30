/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0020A540(void);
extern void func_001D7F10(void *);
extern void func_001F1EA0(void *);
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_002DF960(s32);                         /* extern */
M2C_UNK func_008C5D70(void *);                      /* extern */

void func_008C68F0(void *arg0) {
    if (arg0 != NULL) {
        func_002DF960(M2C_FIELD(arg0, s32 *, 0x74));
        func_002DF960(M2C_FIELD(arg0, s32 *, 0x70));
        func_001F1EA0(M2C_FIELD(arg0, void **, 0x54));
        func_0020A540();
        func_001D7F10(M2C_FIELD(arg0, void **, 0x78));
        func_001D7F10(M2C_FIELD(arg0, void **, 0x7C));
        func_001D7F10(M2C_FIELD(arg0, void **, 0x80));
        func_008C5D70(arg0 + 0xB0);
        func_001C48E8(arg0, 0, 0xD0);
    }
}
