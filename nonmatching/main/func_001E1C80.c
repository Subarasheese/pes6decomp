/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_001E62C0(void);
M2C_UNK func_001E1DC0(void *);                      /* extern */
M2C_UNK func_001E1F00(void *);                      /* extern */
M2C_UNK func_001E1FB0(void *);                      /* extern */
M2C_UNK func_001E4640(void *);                      /* extern */
M2C_UNK func_001E4720(void *);                      /* extern */
s32 func_001F5140(M2C_UNK, u16, u16);               /* extern */

void func_001E1C80(void *arg0) {
    u8 temp_a0;
    u8 var_v1;

    if ((func_001E62C0() & 2) == 2) {
        temp_a0 = M2C_FIELD(arg0, u8 *, 0x74);
        if (!(temp_a0 & 1)) {
            if (((s32) temp_a0 >> 1) & 1) {
                func_001E1F00(arg0);
                var_v1 = M2C_FIELD(arg0, u8 *, 0x74) & 0xFD;
                goto block_4;
            }
        } else {
            func_001E1FB0(arg0);
            M2C_FIELD(arg0, u8 *, 0x74) = (u8) (M2C_FIELD(arg0, u8 *, 0x74) & 0xFE);
            var_v1 = M2C_FIELD(arg0, u8 *, 0x74) & 0xFD;
block_4:
            M2C_FIELD(arg0, u8 *, 0x74) = var_v1;
        }
        if (((s32) M2C_FIELD(arg0, u8 *, 0x74) >> 2) & 1) {
            func_001E4720(arg0);
            M2C_FIELD(arg0, u8 *, 0x74) = (u8) (M2C_FIELD(arg0, u8 *, 0x74) & 0xFB);
        }
        if (((s32) M2C_FIELD(arg0, u8 *, 0x74) >> 3) & 1) {
            func_001E1DC0(arg0);
            M2C_FIELD(arg0, u8 *, 0x74) = (u8) (M2C_FIELD(arg0, u8 *, 0x74) & 0xF7);
        }
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x58), s32 *, 0x18) = 0;
        if (M2C_FIELD(arg0, u16 *, 0x46) == 0) {
            M2C_FIELD(arg0, s8 *, 0x79) = 0;
        } else {
            M2C_FIELD(arg0, s8 *, 0x79) = 1;
            M2C_FIELD(arg0, s32 *, 0x50) = func_001F5140(1, M2C_FIELD(arg0, u16 *, 0x40), M2C_FIELD(arg0, u16 *, 0x46));
        }
        if (M2C_FIELD(arg0, u8 *, 0x6C) == 1) {
            func_001E4640(arg0);
        }
        M2C_FIELD(arg0, u8 *, 0x74) = 0U;
    }
}
