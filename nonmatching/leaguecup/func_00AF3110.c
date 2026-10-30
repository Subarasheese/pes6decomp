/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00AEFF50(void);
extern void func_001D4E00(void *);
M2C_UNK func_001EDD90(s32);                         /* extern */
M2C_UNK func_002ED130(s32);                         /* extern */
M2C_UNK func_008CA7A0(s32);                         /* extern */
M2C_UNK func_00972290(s32);                         /* extern */

void func_00AF3110(void) {
    u32 temp_v0;

    temp_v0 = func_00AEFF50();
    if (temp_v0 != 0) {
        func_008CA7A0(M2C_FIELD(temp_v0, s32 *, 0x1C80));
        func_00972290(M2C_FIELD(temp_v0, s32 *, 0x1C70));
        func_00972290(M2C_FIELD(temp_v0, s32 *, 0x1C74));
        func_00972290(M2C_FIELD(temp_v0, s32 *, 0x1C78));
        func_002ED130(M2C_FIELD(temp_v0, s32 *, 4));
        func_001EDD90(M2C_FIELD(temp_v0, s32 *, 0x2320));
        func_001D4E00(M2C_FIELD(temp_v0, void **, 0));
    }
}
