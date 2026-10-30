/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_003631C0(s32);
extern s32 func_00363220(s32);
extern u16 D_003EB370;

s32 func_00D1E9C0(s32 arg0) {
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_s1;

    var_s1 = arg0;
    temp_s0 = func_003631C0(0);
    temp_v0 = func_00363220(0x10);
    temp_v1 = var_s1 & 0xFFFF;
    switch (D_003EB370) {                           /* switch 1; irregular */
    case 0xA8:                                      /* switch 1 */
        switch (temp_v1) {                          /* switch 5; irregular */
        case 0x55:                                  /* switch 5 */
            var_s1 = 0xDC;
            break;
        case 0x4F:                                  /* switch 5 */
            var_s1 = 0xD6;
            break;
        case 0x49:                                  /* switch 5 */
            var_s1 = 0xCF;
            break;
        case 0x45:                                  /* switch 5 */
            var_s1 = 0xCB;
            break;
        case 0x41:                                  /* switch 5 */
            var_s1 = 0xC4;
            break;
        case 0x59:                                  /* switch 5 */
            if ((temp_s0 == 0) || (temp_v0 != 0)) {
                if (temp_s0 != 0) {
                    var_s1 = 0xFF;
                } else if (temp_v0 == 0) {
                    var_s1 = 0xFF;
                }
            }
            break;
        }
        break;
    case 0x60:                                      /* switch 1 */
        switch (temp_v1) {                          /* switch 4; irregular */
        case 0x55:                                  /* switch 4 */
            var_s1 = 0xD9;
            break;
        case 0x4F:                                  /* switch 4 */
            var_s1 = 0xD2;
            break;
        case 0x49:                                  /* switch 4 */
            var_s1 = 0xCC;
            break;
        case 0x45:                                  /* switch 4 */
            var_s1 = 0xC8;
            break;
        case 0x41:                                  /* switch 4 */
            var_s1 = 0xC0;
            break;
        }
        break;
    case 0x5E:                                      /* switch 1 */
        switch (temp_v1) {                          /* switch 3; irregular */
        case 0x55:                                  /* switch 3 */
            var_s1 = 0xDB;
            break;
        case 0x4F:                                  /* switch 3 */
            var_s1 = 0xD4;
            break;
        case 0x49:                                  /* switch 3 */
            var_s1 = 0xCE;
            break;
        case 0x45:                                  /* switch 3 */
            var_s1 = 0xCA;
            break;
        case 0x41:                                  /* switch 3 */
            var_s1 = 0xC2;
            break;
        }
        break;
    case 0x7E:                                      /* switch 1 */
        switch (temp_v1) {                          /* switch 2; irregular */
        case 0x4E:                                  /* switch 2 */
            var_s1 = 0xD1;
            break;
        case 0x4F:                                  /* switch 2 */
            var_s1 = 0xD5;
            break;
        case 0x41:                                  /* switch 2 */
            var_s1 = 0xC3;
            break;
        }
        break;
    case 0xB4:                                      /* switch 1 */
        switch (temp_v1) {                          /* switch 6; irregular */
        case 0x59:                                  /* switch 6 */
            var_s1 = 0xDD;
            break;
        case 0x55:                                  /* switch 6 */
            var_s1 = 0xDA;
            break;
        case 0x4F:                                  /* switch 6 */
            var_s1 = 0xD3;
            break;
        case 0x49:                                  /* switch 6 */
            var_s1 = 0xCD;
            break;
        case 0x45:                                  /* switch 6 */
            var_s1 = 0xC9;
            break;
        case 0x41:                                  /* switch 6 */
            var_s1 = 0xC1;
            break;
        }
        break;
    }
    temp_a0 = var_s1 & 0xFFFF;
    if ((temp_v1 & 0xFFFF) != temp_a0) {
        D_003EB370 = 0;
    }
    if ((temp_a0 >= 0xC0) && (temp_a0 < 0xDF) && (((temp_s0 != 0) && (temp_v0 != 0)) || ((temp_s0 == 0) && (temp_v0 == 0)))) {
        var_s1 = (var_s1 + 0x20) & 0xFFFF;
    }
    return var_s1 & 0xFF;
}
