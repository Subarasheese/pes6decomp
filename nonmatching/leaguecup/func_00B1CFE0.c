/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D4E00(void *);
extern u32 func_00B1DE00(void);
M2C_UNK func_001EDD90(s32);                         /* extern */
M2C_UNK func_008CA7A0(s32);                         /* extern */
M2C_UNK func_00957070(s32);                         /* extern */
M2C_UNK func_00971E30(s32);                         /* extern */
M2C_UNK func_00972290(s32);                         /* extern */

void func_00B1CFE0(void) {
    s32 temp_a0;
    u32 temp_v0;

    temp_v0 = func_00B1DE00();
    if (temp_v0 != 0) {
        func_00971E30(M2C_FIELD(temp_v0, s32 *, 0x80));
        func_00957070(M2C_FIELD(temp_v0, s32 *, 0x2C));
        temp_a0 = M2C_FIELD(temp_v0, s32 *, 0x38);
        if (temp_a0 != 0) {
            func_001EDD90(temp_a0);
            M2C_FIELD(temp_v0, s32 *, 0x38) = 0;
        }
        func_00972290(M2C_FIELD(temp_v0, s32 *, 0x88));
        func_00972290(M2C_FIELD(temp_v0, s32 *, 0x8C));
        func_008CA7A0(M2C_FIELD(temp_v0, s32 *, 0x30));
        func_001D4E00(M2C_FIELD(temp_v0, void **, 0));
        func_001D4E00(M2C_FIELD(temp_v0, void **, 0x34));
    }
}
