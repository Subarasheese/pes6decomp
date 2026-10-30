/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D4E00(void *);
extern u32 func_00B68690(void);
M2C_UNK func_001EDD90(s32);                         /* extern */
M2C_UNK func_00971E30(s32);                         /* extern */
M2C_UNK func_00972290(s32);                         /* extern */

void func_00B67BF0(void) {
    u32 temp_v0;

    temp_v0 = func_00B68690();
    if (temp_v0 != 0) {
        func_001EDD90(M2C_FIELD(temp_v0, s32 *, 0x154));
        func_00972290(M2C_FIELD(temp_v0, s32 *, 0x19C));
        func_00971E30(M2C_FIELD(temp_v0, s32 *, 0x198));
        func_001D4E00(M2C_FIELD(temp_v0, void **, 0));
        func_001D4E00(M2C_FIELD(temp_v0, void **, 4));
    }
}
