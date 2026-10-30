/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_002260A0(void);
s32 func_00277360(u8 *, void *);                    /* extern */

s32 func_00930A70(s32 arg0) {
    u8 sp48;
    u8 sp49;
    u8 sp4A;
    s8 sp4B;
    s32 temp_s1;
    s32 temp_v0_2;
    s32 temp_v1;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a1;
    void *temp_s0;
    void *temp_v0;

    temp_v0 = func_002260A0();
    if (temp_v0 != NULL) {
        temp_v1 = arg0 & 0xFFFF;
        if (temp_v1 < 0x400) {
            temp_s1 = temp_v1 * 0x1A;
            temp_a1 = temp_v0 + temp_s1;
            temp_s0 = temp_a1 + 0x19B24;
            if ((temp_s0 != NULL) && (&sp48 != NULL)) {
                sp48 = M2C_FIELD(temp_a1, u8 *, 0x19B24);
                sp49 = M2C_FIELD(temp_a1, u8 *, 0x19B25);
                sp4A = M2C_FIELD(temp_a1, u8 *, 0x19B26);
                sp4B = 0;
            }
            temp_v0_2 = func_00277360(&sp48, temp_a1);
            switch (temp_v0_2) {                    /* irregular */
            case 2:
                if (&sp48 == NULL) {
                    return 0;
                }
                if (temp_s0 != NULL) {
                    temp_a0 = temp_s1 + temp_v0;
                    M2C_FIELD(temp_a1, u8 *, 0x19B24) = sp48;
                    M2C_FIELD(temp_a0, u8 *, 0x19B25) = sp49;
                    M2C_FIELD(temp_a0, u8 *, 0x19B26) = sp4A;
                }
                return 0;
            case 1:
                if (&sp48 != NULL) {
                    if (temp_s0 != NULL) {
                        temp_a0_2 = temp_s1 + temp_v0;
                        M2C_FIELD(temp_a1, u8 *, 0x19B24) = sp48;
                        M2C_FIELD(temp_a0_2, u8 *, 0x19B25) = sp49;
                        M2C_FIELD(temp_a0_2, u8 *, 0x19B26) = sp4A;
                    }
                    return 1;
                }
                goto block_29;
            default:
                if ((&sp48 != NULL) && (temp_s0 != NULL)) {
                    temp_a0_3 = temp_s1 + temp_v0;
                    M2C_FIELD(temp_a1, u8 *, 0x19B24) = sp48;
                    M2C_FIELD(temp_a0_3, u8 *, 0x19B25) = sp49;
                    M2C_FIELD(temp_a0_3, u8 *, 0x19B26) = sp4A;
                }
                goto block_29;
            }
        } else {
            goto block_29;
        }
    } else {
block_29:
        return 1;
    }
}
