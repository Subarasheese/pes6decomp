/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B59340(void);
extern void func_001D4E00(void *);
M2C_UNK func_00972290(s32);                         /* extern */

void func_00B5ABF0(void) {
    u32 temp_v0;
    void *temp_a0;

    temp_v0 = func_00B59340();
    if (temp_v0 != 0) {
        func_00972290(M2C_FIELD(temp_v0, s32 *, 0x68));
        temp_a0 = M2C_FIELD(temp_v0, void **, 0);
        if (temp_a0 != NULL) {
            func_001D4E00(temp_a0);
            M2C_FIELD(temp_v0, void **, 0) = NULL;
        }
    }
}
