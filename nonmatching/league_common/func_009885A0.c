/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_001D5A10(M2C_UNK);                         /* extern */
s32 func_00230410();                                /* extern */
s32 func_0094C730();                                /* extern */
s32 func_0094C7B0();                                /* extern */
M2C_UNK func_00958000(M2C_UNK);                     /* extern */
M2C_UNK func_00986EB0(u8, s32);                     /* extern */
M2C_UNK func_00987140(u8);                          /* extern */
M2C_UNK func_00987510(s32);                         /* extern */
M2C_UNK func_00987840(s32);                         /* extern */
M2C_UNK func_00987CE0(s32);                         /* extern */
M2C_UNK func_009880C0();                            /* extern */
M2C_UNK func_009883D0();                            /* extern */
void *func_00989410();                              /* extern */

void func_009885A0(void) {
    s32 temp_a0;
    s32 temp_a0_2;
    void *temp_v0;

    temp_v0 = func_00989410();
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s32 *, 0) = func_001D5A10(0x102A3);
        func_009883D0();
        func_009880C0();
        if (M2C_FIELD(temp_v0, s32 *, 0x48C) != 2) {
            func_00987CE0(M2C_FIELD(temp_v0, s32 *, 0x488));
        } else if (func_00230410() != 1) {
            func_00987510(M2C_FIELD(temp_v0, s32 *, 0x488));
        } else {
            func_00987840(M2C_FIELD(temp_v0, s32 *, 0x488));
        }
        func_00987140((u8) M2C_FIELD(temp_v0, s32 *, 0x488));
        func_00986EB0(M2C_FIELD(temp_v0, u8 *, 0x472), M2C_FIELD(temp_v0, s32 *, 0x488));
        if (func_0094C7B0() == 0x38) {
            temp_a0 = func_0094C730() & 0xFF;
            switch (temp_a0) {                      /* switch 1; irregular */
            case 14:                                /* switch 1 */
                func_00958000(0x15);
                return;
            case 17:                                /* switch 1 */
                func_00958000(0x18);
                return;
            case 10:                                /* switch 1 */
                func_00958000(0x12);
                return;
            }
        } else if (func_0094C7B0() == 0x36) {
            temp_a0_2 = func_0094C730() & 0xFF;
            switch (temp_a0_2) {                    /* switch 2; irregular */
            case 14:                                /* switch 2 */
                func_00958000(0x65);
                return;
            case 13:                                /* switch 2 */
            case 12:                                /* switch 2 */
                func_00958000(0x64);
                return;
            }
        } else {
            if (func_0094C7B0() == 0x37) {
                func_00958000(0x6D);
                return;
            }
            if (func_0094C7B0() == 0x39) {
                func_00958000(0x75);
                return;
            }
            if (func_0094C7B0() == 0x3A) {
                func_00958000(0x9D);
            }
        }
    }
}
