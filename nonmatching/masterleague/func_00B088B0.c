/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002F4E10(void *);
extern u32 func_00B0A1E0(void);
extern void func_001D7F10(void *);
extern void func_001F22B0(void *);
extern void func_001B9C60(void *);
extern void func_001F2810(void *);
M2C_UNK func_00971E30(s32);                         /* extern */
M2C_UNK func_00972290(s32);                         /* extern */
M2C_UNK func_00973460(s32);                         /* extern */

void func_00B088B0(void) {
    s32 temp_a0_2;
    s32 var_s2;
    u32 temp_v0;
    u32 var_s0;
    void *temp_a0;
    void *temp_a0_3;

    temp_v0 = func_00B0A1E0();
    if (temp_v0 != 0) {
        func_00973460(M2C_FIELD(temp_v0, s32 *, 0x7AC));
        var_s2 = 0;
        var_s0 = temp_v0;
        do {
            temp_a0 = M2C_FIELD(var_s0, void **, 0x498);
            if (temp_a0 != NULL) {
                func_001D7F10(temp_a0);
            }
            temp_a0_2 = M2C_FIELD(var_s0, s32 *, 0x71C);
            if (temp_a0_2 != 0) {
                func_00973460(temp_a0_2);
            }
            temp_a0_3 = M2C_FIELD(var_s0, void **, 0x698);
            if (temp_a0_3 != NULL) {
                func_001D7F10(temp_a0_3);
            }
            var_s2 += 1;
            var_s0 += 4;
        } while (var_s2 < 0x20);
        func_001D7F10(M2C_FIELD(temp_v0, void **, 0x718));
        func_001D7F10(M2C_FIELD(temp_v0, void **, 0x79C));
        func_001D7F10(M2C_FIELD(temp_v0, void **, 0x7B0));
        func_00971E30(M2C_FIELD(temp_v0, s32 *, 0x6C));
        if ((s32) M2C_FIELD(temp_v0, u8 *, 0x471) >= 0xC) {
            func_001F2810(M2C_FIELD(temp_v0, void **, 0x7D0));
        }
        func_001B9C60(M2C_FIELD(temp_v0, void **, 0x7CC));
        func_00972290(M2C_FIELD(temp_v0, s32 *, 0x7B8));
        func_001F22B0(M2C_FIELD(temp_v0, void **, 0x3C));
        func_001F22B0(M2C_FIELD(temp_v0, void **, 0x40));
        func_002F4E10(M2C_FIELD(temp_v0, void **, 0x34));
        func_002F4E10(M2C_FIELD(temp_v0, void **, 0x44));
    }
}
