/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s64 func_00832DD0();                                /* extern */
s32 func_0095AF60();                                /* extern */
s64 func_0095DBF0();                                /* extern */
s32 func_009602B0();                                /* extern */
s32 func_009605A0(s32);                             /* extern */
M2C_UNK func_009A50E0(void *);                      /* extern */
s32 func_009A8F10(s32, s64);                        /* extern */

void func_009A6100(void *arg0) {
    s32 temp_a0;
    s32 temp_s1_2;
    s32 temp_s2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v0;
    s64 temp_s1;
    s8 var_v1;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x374);
    if (temp_a0 == 0) {
        func_0026E840(0x8C008005);
        M2C_FIELD(arg0, s32 *, 0x394) = 0x01FB003E;
        var_v1 = 0x20;
        M2C_FIELD(arg0, s32 *, 0x398) = 0x18;
        goto block_42;
    }
    temp_s2 = func_009605A0(temp_a0);
    temp_s1 = (s64) (func_0095DBF0() << 0x38) >> 0x38;
    temp_s1_2 = func_009602B0();
    temp_v0 = func_009A8F10(temp_s2, temp_s1);
    if (temp_v0 == 3) {
        func_0026E840(0x8C008005);
        M2C_FIELD(arg0, s32 *, 0x394) = 0x0201001D;
        var_v1 = 0x20;
        M2C_FIELD(arg0, s32 *, 0x398) = 9;
        goto block_42;
    }
    if ((temp_s1_2 != 0) && (temp_s1_2 != M2C_FIELD(arg0, s32 *, 0x374))) {
        func_0026E840(0x8C008005);
        M2C_FIELD(arg0, s32 *, 0x394) = 0x02010010;
        var_v1 = 0x20;
        M2C_FIELD(arg0, s32 *, 0x398) = 0xC;
        goto block_42;
    }
    switch (temp_v0) {                              /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        func_0026E840(0x84028400);
        var_v1 = 0x15;
block_42:
        M2C_FIELD(arg0, s8 *, 0x378) = var_v1;
        return;
    case 2:                                         /* switch 1 */
        if (((s64) (func_00832DD0() << 0x38) >> 0x38) != 1) {
            func_0026E840(0x8C008005);
            M2C_FIELD(arg0, s32 *, 0x394) = 0x0201000F;
            var_v1 = 0x20;
            M2C_FIELD(arg0, s32 *, 0x398) = 0xC;
        } else {
            func_0026E840(0x84028400);
            M2C_FIELD(arg0, s32 *, 0x3A0) = 0x0201000D;
            var_v1 = 0xE;
            M2C_FIELD(arg0, s32 *, 0x39C) = 0x15;
        }
        goto block_42;
    case 1:                                         /* switch 1 */
        temp_v0_2 = func_0095AF60();
        switch (temp_v0_2) {                        /* switch 2; irregular */
        case 1:                                     /* switch 2 */
            var_v0 = 0x02010032;
block_35:
            M2C_FIELD(arg0, s32 *, 0x394) = var_v0;
            break;
        case 2:                                     /* switch 2 */
            var_v0 = 0x02010033;
            goto block_35;
        case 3:                                     /* switch 2 */
        case 0:                                     /* switch 2 */
        case 4:                                     /* switch 2 */
            var_v0 = 0x02010048;
            goto block_35;
        }
        func_0026E840(0x8C008005);
        var_v1 = 0x20;
        M2C_FIELD(arg0, s32 *, 0x398) = 0xC;
        goto block_42;
    case 4:                                         /* switch 1 */
        func_009A50E0(arg0);
        return;
    default:                                        /* switch 1 */
        func_0026E840(0x8C008005);
        M2C_FIELD(arg0, s32 *, 0x394) = 0x01FB003E;
        var_v1 = 0x20;
        M2C_FIELD(arg0, s32 *, 0x398) = 0x18;
        goto block_42;
    }
}
