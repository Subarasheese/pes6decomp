/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_003119B0(void *, s32);
extern s32 func_0030D990(s32);
s32 func_00341B10(void *arg0, s32 arg1) {
    u8 sp3F;
    s32 temp_v0;
    s32 var_a4;
    s32 var_s0;
    u8 temp_a0;
    u8 temp_v0_2;
    u8 temp_v1;
    u8 temp_v1_2;

    M2C_FIELD(arg0, u8 *, 1) = 0U;
    M2C_FIELD(arg0, u8 *, 2) = 0U;
    func_003119B0(&sp3F, arg1);
    var_s0 = 0;
    do {
        temp_v0 = func_0030D990((s32) sp3F);
        switch (temp_v0) {                          /* switch 1; irregular */
        case 1:                                     /* switch 1 */
            M2C_FIELD(arg0, u8 *, 2) = (u8) (M2C_FIELD(arg0, u8 *, 2) + 1);
            break;
        case 2:                                     /* switch 1 */
            M2C_FIELD(arg0, u8 *, 1) = (u8) (M2C_FIELD(arg0, u8 *, 1) + 1);
            break;
        }
        var_s0 += 1;
        sp3F += 1;
    } while (var_s0 < 0xB);
    M2C_FIELD(arg0, s8 *, 0) = (s8) ((0xA - M2C_FIELD(arg0, u8 *, 1)) - M2C_FIELD(arg0, u8 *, 2));
    temp_v1 = M2C_FIELD(arg0, u8 *, 2);
    var_a4 = 0;
    switch (temp_v1) {                              /* switch 2; irregular */
    case 3:                                         /* switch 2 */
        temp_a0 = M2C_FIELD(arg0, u8 *, 1);
        switch (temp_a0) {                          /* switch 5; irregular */
        case 4:                                     /* switch 5 */
            var_a4 = 2;
            break;
        case 5:                                     /* switch 5 */
            var_a4 = 3;
            break;
        case 6:                                     /* switch 5 */
            var_a4 = 4;
            break;
        case 2:                                     /* switch 2 */
        case 3:                                     /* switch 5 */
            var_a4 = 1;
            break;
        }
        break;
    case 4:                                         /* switch 2 */
        temp_v1_2 = M2C_FIELD(arg0, u8 *, 1);
        switch (temp_v1_2) {                        /* switch 4; irregular */
        case 2:                                     /* switch 4 */
            var_a4 = 5;
            break;
        case 3:                                     /* switch 4 */
            var_a4 = 6;
            break;
        case 4:                                     /* switch 4 */
            var_a4 = 7;
            break;
        case 5:                                     /* switch 4 */
            var_a4 = 8;
            break;
        }
        break;
    case 5:                                         /* switch 2 */
        temp_v0_2 = M2C_FIELD(arg0, u8 *, 1);
        switch (temp_v0_2) {                        /* switch 3; irregular */
        case 2:                                     /* switch 3 */
            var_a4 = 9;
            break;
        case 3:                                     /* switch 3 */
            var_a4 = 0xA;
            break;
        case 4:                                     /* switch 3 */
            var_a4 = 0xB;
            break;
        }
        break;
    }
    M2C_FIELD(arg0, s32 *, 4) = var_a4;
    return 1;
}
