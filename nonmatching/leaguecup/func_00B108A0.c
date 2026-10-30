/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D4E00(void *);
extern u32 func_00B0CD50(void);
M2C_UNK func_001EDD90(s32);                         /* extern */
M2C_UNK func_002ED130(s32);                         /* extern */
M2C_UNK func_008CA7A0(s32);                         /* extern */
M2C_UNK func_00972290(s32);                         /* extern */

void func_00B108A0(void) {
    u32 temp_v0;

    temp_v0 = func_00B0CD50();
    if (temp_v0 != 0) {
        func_008CA7A0(M2C_FIELD(temp_v0, s32 *, 0xEA8));
        func_00972290(M2C_FIELD(temp_v0, s32 *, 0xE98));
        func_00972290(M2C_FIELD(temp_v0, s32 *, 0xE9C));
        func_00972290(M2C_FIELD(temp_v0, s32 *, 0xEA0));
        func_002ED130(M2C_FIELD(temp_v0, s32 *, 8));
        func_001EDD90(M2C_FIELD(temp_v0, s32 *, 0x1404));
        func_001D4E00(M2C_FIELD(temp_v0, void **, 0));
    }
}
