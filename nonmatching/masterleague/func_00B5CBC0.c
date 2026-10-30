/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002F3A00(void *);
extern s32 func_002F39A0(void *);
extern void func_002F4CE0(void *, s8);
extern s32 func_001F08B0(s32);
extern u32 func_00B5B230(void);
M2C_UNK func_002F4130(void *, M2C_UNK, M2C_UNK, s32); /* extern */
u8 *func_00B5ACA0(u8, M2C_UNK);                     /* extern */

void func_00B5CBC0(s32 arg0) {
    s32 temp_a0;
    s32 temp_a1;
    s32 var_a0;
    u32 temp_v0;
    u64 temp_v1;
    u8 *temp_v0_2;
    u8 temp_v0_3;
    void *temp_a0_2;

    temp_v0 = func_00B5B230();
    if (temp_v0 != 0) {
        temp_a0 = arg0 & 0xFF;
        switch (temp_a0) {                          /* irregular */
        case 0:
            temp_a0_2 = M2C_FIELD(temp_v0, void **, 0x624);
            if (temp_a0_2 != NULL) {
                func_002F39A0(temp_a0_2);
                M2C_FIELD(temp_v0, s16 *, 0x628) = 0;
                return;
            }
            break;
        case 1:
            if (M2C_FIELD(temp_v0, void **, 0x624) != NULL) {
                temp_v0_2 = func_00B5ACA0(M2C_FIELD(temp_v0, u8 *, 0x632), 0);
                if (temp_v0_2 != NULL) {
                    func_002F3A00(M2C_FIELD(temp_v0, void **, 0x624));
                    temp_v0_3 = *temp_v0_2;
                    temp_a1 = temp_v0_3 & 1;
                    if (temp_a1 != 1) {
                        temp_v1 = (u64) ((s64) temp_v0_3 << 0x39) >> 0x3A;
                        if (temp_v1 == 6) {
                            var_a0 = 0x1F0036;
                        } else if ((temp_a1 == 1) && (temp_v1 == 8)) {
                            var_a0 = 0x1F0003;
                        } else {
                            var_a0 = 0x1F0014;
                        }
                    } else {
                        var_a0 = 0x1F0035;
                    }
                    func_002F4130(M2C_FIELD(temp_v0, void **, 0x624), 0, 0, func_001F08B0(var_a0));
                    M2C_FIELD(temp_v0, s16 *, 0x628) = 1;
                    func_002F4CE0(M2C_FIELD(temp_v0, void **, 0x624), 1);
                }
            }
            break;
        }
    }
}
