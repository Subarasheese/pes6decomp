/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D4E00(void *);
extern u32 func_00B4DFD0(void);
M2C_UNK func_001EDD90(s32);                         /* extern */
M2C_UNK func_008CA7A0(s32);                         /* extern */
M2C_UNK func_00957070(s32);                         /* extern */
M2C_UNK func_00971E30(s32);                         /* extern */
M2C_UNK func_00972290(s32);                         /* extern */

void func_00B4DAE0(void) {
    s32 var_s1;
    u32 temp_v0;
    u32 var_s0;
    void *temp_a0;
    void *temp_a0_2;

    temp_v0 = func_00B4DFD0();
    if (temp_v0 != 0) {
        func_001EDD90(M2C_FIELD(temp_v0, s32 *, 0x940));
        func_00972290(M2C_FIELD(temp_v0, s32 *, 0x98C));
        func_00972290(M2C_FIELD(temp_v0, s32 *, 0x988));
        func_00971E30(M2C_FIELD(temp_v0, s32 *, 0x984));
        var_s1 = 0;
        var_s0 = temp_v0;
        do {
            func_00957070(M2C_FIELD(var_s0, s32 *, 0xA4));
            var_s1 += 1;
            var_s0 += 4;
        } while (var_s1 < 8);
        func_00957070(M2C_FIELD(temp_v0, s32 *, 0x114));
        func_008CA7A0(M2C_FIELD(temp_v0, s32 *, 0x124));
        temp_a0 = M2C_FIELD(temp_v0, void **, 0);
        if (temp_a0 != NULL) {
            func_001D4E00(temp_a0);
            M2C_FIELD(temp_v0, void **, 0) = NULL;
        }
        temp_a0_2 = M2C_FIELD(temp_v0, void **, 0x348);
        if (temp_a0_2 != NULL) {
            func_001D4E00(temp_a0_2);
            M2C_FIELD(temp_v0, void **, 0x348) = NULL;
        }
    }
}
