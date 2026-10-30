/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00AEE570(void);
extern void func_001D4E00(void *);
extern void func_001F2810(void *);
extern void func_001B9C60(void *);
M2C_UNK func_00957070(s32);                         /* extern */
M2C_UNK func_00971470(s32);                         /* extern */
M2C_UNK func_00971E30(s32);                         /* extern */
M2C_UNK func_00972290(s32);                         /* extern */
M2C_UNK func_00973460(s32);                         /* extern */

void func_00AEDC70(void) {
    s32 temp_a0;
    s32 var_s1;
    u32 temp_v0;
    u32 var_s0;

    temp_v0 = func_00AEE570();
    if (temp_v0 != 0) {
        temp_a0 = M2C_FIELD(temp_v0, s32 *, 0x58);
        if (temp_a0 != 0) {
            func_00971E30(temp_a0);
        }
        func_00972290(M2C_FIELD(temp_v0, s32 *, 0x400));
        func_001B9C60(M2C_FIELD(temp_v0, void **, 0x3FC));
        func_001F2810(M2C_FIELD(temp_v0, void **, 0x3EC));
        var_s1 = 0;
        var_s0 = temp_v0;
        do {
            func_00973460(M2C_FIELD(var_s0, s32 *, 0x364));
            var_s1 += 1;
            var_s0 += 4;
        } while (var_s1 < 0x20);
        func_00957070(M2C_FIELD(temp_v0, s32 *, 0x50));
        func_001D4E00(M2C_FIELD(temp_v0, void **, 0));
        func_00971470(M2C_FIELD(temp_v0, s32 *, 0x418));
    }
}
