/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001F2810(void *);
extern void func_001D4E00(void *);
extern u32 func_00B15370(void);
extern void func_001D67B0(void *);
extern void func_001B9C60(void *);
M2C_UNK func_002E4F00(s32);                         /* extern */
M2C_UNK func_00957070(s32);                         /* extern */
M2C_UNK func_00958000(M2C_UNK);                     /* extern */
M2C_UNK func_00971E30(s32);                         /* extern */
M2C_UNK func_00972290(s32);                         /* extern */
M2C_UNK func_00973460(s32);                         /* extern */
M2C_UNK func_00B0EE70();                            /* extern */

void func_00B107A0(void) {
    s32 temp_a0;
    s32 var_s1;
    u32 temp_v0;
    u32 var_s0;

    temp_v0 = func_00B15370();
    if (temp_v0 != 0) {
        var_s1 = 0;
        var_s0 = temp_v0;
        do {
            func_00973460(M2C_FIELD(var_s0, s32 *, 0x294));
            var_s1 += 1;
            var_s0 += 4;
        } while (var_s1 < 0x20);
        func_00973460(M2C_FIELD(temp_v0, s32 *, 0x328));
        temp_a0 = M2C_FIELD(temp_v0, s32 *, 0x344);
        if (temp_a0 != 0) {
            func_00971E30(temp_a0);
        }
        func_00972290(M2C_FIELD(temp_v0, s32 *, 0x330));
        func_00971E30(M2C_FIELD(temp_v0, s32 *, 0x348));
        func_00971E30(M2C_FIELD(temp_v0, s32 *, 0x578));
        func_002E4F00(M2C_FIELD(temp_v0, s32 *, 0x57C));
        func_00957070(M2C_FIELD(temp_v0, s32 *, 0x338));
        func_00957070(M2C_FIELD(temp_v0, s32 *, 0x608));
        func_00957070(M2C_FIELD(temp_v0, s32 *, 0x60C));
        func_00957070(M2C_FIELD(temp_v0, s32 *, 0x668));
        func_00957070(M2C_FIELD(temp_v0, s32 *, 0x66C));
        func_00957070(M2C_FIELD(temp_v0, s32 *, 0x670));
        func_00957070(M2C_FIELD(temp_v0, s32 *, 0x674));
        func_001D67B0(M2C_FIELD(temp_v0, void **, 0x7A4));
        func_001B9C60(M2C_FIELD(temp_v0, void **, 0x34C));
        func_001F2810(M2C_FIELD(temp_v0, void **, 0x350));
        func_00957070(M2C_FIELD(temp_v0, s32 *, 0x338));
        func_001D4E00(M2C_FIELD(temp_v0, void **, 0));
        func_001D4E00(M2C_FIELD(temp_v0, void **, 4));
        func_00B0EE70();
        func_00958000(1);
    }
}
