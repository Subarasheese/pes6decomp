/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00213800(void *);
M2C_UNK func_00213540(void *, M2C_UNK);             /* extern */
M2C_UNK func_002136B0(void *, u8);                  /* extern */
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_0081EB60(M2C_UNK);                         /* extern */
s32 func_0081EC20(M2C_UNK);                         /* extern */
M2C_UNK func_0099C730(M2C_UNK);                     /* extern */
M2C_UNK func_009DDB00(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_009F29A0();                            /* extern */
extern s8 *D_00A7E238;

u8 func_009F2EE0(void) {
    s8 var_v1;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_3;

    if (M2C_FIELD(D_00A7E238, u8 *, 1) == 0) {
        if (func_0081EC20(0x4000) == 0) {
            if (func_0081EC20(0x1000) == 0) {
                if (func_0081EB60(0x10) == 0) {
                    if (func_0081EB60(0x40) != 0) {
                        temp_v0 = M2C_FIELD(D_00A7E238, u8 *, 2);
                        if ((s32) temp_v0 <= 0) {
                            M2C_FIELD(D_00A7E238, u8 *, 2) = (u8) (temp_v0 + 1);
                            func_002136B0(M2C_FIELD(D_00A7E238, void **, 8), M2C_FIELD(D_00A7E238, u8 *, 2));
                            func_0026E840(0x8400F802);
                        }
                    }
                } else {
                    temp_v0_2 = M2C_FIELD(D_00A7E238, u8 *, 2);
                    if ((s32) temp_v0_2 > 0) {
                        M2C_FIELD(D_00A7E238, u8 *, 2) = (u8) (temp_v0_2 - 1);
                        func_002136B0(M2C_FIELD(D_00A7E238, void **, 8), M2C_FIELD(D_00A7E238, u8 *, 2));
                        func_0026E840(0x8400F802);
                    }
                }
                return 0U;
            }
            func_0026E840(0x84008401);
            M2C_FIELD(D_00A7E238, s8 *, 0) = 0xA;
            M2C_FIELD(D_00A7E238, u8 *, 3) = 1U;
            return M2C_FIELD(D_00A7E238, u8 *, 3);
        }
        func_0026E840(0x84028400);
        temp_v0_3 = M2C_FIELD(D_00A7E238, u8 *, 2);
        switch (temp_v0_3) {                        /* irregular */
        case 1:
            func_009DDB00(0, 1);
            func_00213800(M2C_FIELD(D_00A7E238, void **, 8));
            func_009F29A0();
            func_0099C730(0x01FD001D);
            var_v1 = 6;
block_16:
            M2C_FIELD(D_00A7E238, s8 *, 0) = var_v1;
            break;
        case 0:
            func_00213540(M2C_FIELD(D_00A7E238, void **, 8), 1);
            var_v1 = 1;
            M2C_FIELD(D_00A7E238, s8 *, 4) = 0;
            goto block_16;
        }
        return 0U;
    }
    M2C_FIELD(D_00A7E238, s8 *, 0) = 0xA;
    M2C_FIELD(D_00A7E238, u8 *, 3) = 3U;
    return M2C_FIELD(D_00A7E238, u8 *, 3);
}
