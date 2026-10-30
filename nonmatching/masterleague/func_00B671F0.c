/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D80(void *, s16);
extern u8 func_00225820(void);
extern s32 func_002260F0(s32);
extern u32 func_00B66CA0(void);
extern void * func_001D5A10(s32);
s32 func_00225E10();                                /* extern */
M2C_UNK func_00958000(M2C_UNK);                     /* extern */
M2C_UNK func_009737E0(s32, M2C_UNK, s32);           /* extern */
s32 func_00B04E90();                                /* extern */
M2C_UNK func_00B670A0();                            /* extern */

void func_00B671F0(void) {
    s32 temp_v0_4;
    u32 temp_v0;
    u32 temp_v0_3;
    u32 temp_v0_5;
    u8 temp_a0;
    u8 temp_a0_2;
    void *temp_v0_2;

    temp_v0 = func_00B66CA0();
    if ((temp_v0 != 0) && (temp_v0_2 = func_001D5A10(0x1031C), M2C_FIELD(temp_v0, void **, 0) = temp_v0_2, (temp_v0_2 != NULL))) {
        func_00B670A0();
        temp_a0 = M2C_FIELD(temp_v0, u8 *, 0x1D);
        switch (temp_a0) {                          /* switch 1; irregular */
        case 0:                                     /* switch 1 */
            temp_v0_3 = func_00B66CA0();
            if (temp_v0_3 != 0) {
                temp_v0_4 = func_002260F0(func_00225820() & 0xFF);
                if (temp_v0_4 != 0) {
                    func_001D7D80(M2C_FIELD(temp_v0_3, void **, 4), 0);
                    func_001D7D80(M2C_FIELD(temp_v0_3, void **, 8), 0);
                    func_009737E0(M2C_FIELD(temp_v0_3, s32 *, 0xC), 4, M2C_FIELD(temp_v0_4, s32 *, 0x34));
                    func_009737E0(M2C_FIELD(temp_v0_3, s32 *, 0x10), 2, func_00B04E90());
                }
            }
            break;
        case 1:                                     /* switch 1 */
            temp_v0_5 = func_00B66CA0();
            if (temp_v0_5 != 0) {
                func_001D7D80(M2C_FIELD(temp_v0_5, void **, 4), 1);
                func_001D7D80(M2C_FIELD(temp_v0_5, void **, 8), 1);
                func_009737E0(M2C_FIELD(temp_v0_5, s32 *, 0x14), 9, func_00225E10() & 0xFF);
                func_009737E0(M2C_FIELD(temp_v0_5, s32 *, 0x18), 7, 0x10);
            }
            break;
        }
        temp_a0_2 = M2C_FIELD(temp_v0, u8 *, 0x1D);
        switch (temp_a0_2) {                        /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            func_00958000(0x49);
            return;
        case 1:                                     /* switch 2 */
            func_00958000(0x4A);
            break;
        }
    }
}
