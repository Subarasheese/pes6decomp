/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002F4E10(void *);
extern void func_001D4E00(void *);
extern void func_001F2810(void *);
extern u32 func_00B035D0(void);
extern void func_001B9C60(void *);
M2C_UNK func_002E4F00(s32);                         /* extern */
M2C_UNK func_00957070(s32);                         /* extern */
M2C_UNK func_00971E30(s32);                         /* extern */
M2C_UNK func_00972290(s32);                         /* extern */
M2C_UNK func_00973460(s32);                         /* extern */

void func_00AFD1E0(void) {
    s32 var_s2;
    u32 temp_v0;
    u32 var_s1;

    temp_v0 = func_00B035D0();
    if (temp_v0 != 0) {
        var_s2 = 0;
        var_s1 = temp_v0;
        do {
            func_00973460(M2C_FIELD(var_s1, s32 *, 0x184));
            var_s2 += 1;
            var_s1 += 4;
        } while (var_s2 < 0x17);
        func_00973460(M2C_FIELD(temp_v0, s32 *, 0x24C));
        func_00972290(M2C_FIELD(temp_v0, s32 *, 0x250));
        func_00972290(M2C_FIELD(temp_v0, s32 *, 0x254));
        func_00971E30(M2C_FIELD(temp_v0, s32 *, 0x26C));
        func_00971E30(M2C_FIELD(temp_v0, s32 *, 0x40C));
        func_002E4F00(M2C_FIELD(temp_v0, s32 *, 0x410));
        func_00957070(M2C_FIELD(temp_v0, s32 *, 0x25C));
        func_001B9C60(M2C_FIELD(temp_v0, void **, 0x270));
        func_001F2810(M2C_FIELD(temp_v0, void **, 0x274));
        func_002F4E10(M2C_FIELD(temp_v0, void **, 0x5F0));
        func_001B9C60(M2C_FIELD(temp_v0, void **, 0x29DCC));
        func_001F2810(M2C_FIELD(temp_v0, void **, 0x29DD8));
        func_00972290(M2C_FIELD(temp_v0, s32 *, 0x29DD4));
        func_00971E30(M2C_FIELD(temp_v0, s32 *, 0x29DD0));
        func_00973460(M2C_FIELD(temp_v0, s32 *, 0x29F80));
        func_00971E30(M2C_FIELD(temp_v0, s32 *, 0x29EA8));
        func_00972290(M2C_FIELD(temp_v0, s32 *, 0x29FAC));
        func_001D4E00(M2C_FIELD(temp_v0, void **, 0));
        func_001D4E00(M2C_FIELD(temp_v0, void **, 4));
        func_001D4E00(M2C_FIELD(temp_v0, void **, 8));
        func_001D4E00(M2C_FIELD(temp_v0, void **, 0xC));
        func_001D4E00(M2C_FIELD(temp_v0, void **, 0x29A54));
        func_001D4E00(M2C_FIELD(temp_v0, void **, 0x29FA0));
    }
}
