/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00C01090(M2C_UNK);                         /* extern */

s32 func_00BF5C40(s32 arg0) {
    s32 temp_a0;
    s32 var_v0;

    temp_a0 = arg0 & 0xFF;
    var_v0 = 7;
    switch (temp_a0) {                              /* irregular */
    case 6:
        break;
    case 5:
        if (func_00C01090(4) == 0) {
            var_v0 = 7;
        } else {
            var_v0 = 6;
        }
        break;
    case 1:
        if (func_00C01090(2) == 0) {
            if ((func_00C01090(3) == 0) && (func_00C01090(6) == 0) && (func_00C01090(5) == 0) && (func_00C01090(8) == 0) && (func_00C01090(9) == 0) && (func_00C01090(0) == 0) && (func_00C01090(1) == 0) && (func_00C01090(0xA) == 0) && (func_00C01090(0x2D) == 0)) {
                if (func_00C01090(0xB) == 0) {
                    if ((func_00C01090(0xC) == 0) && (func_00C01090(0xD) == 0) && (func_00C01090(0xE) == 0) && (func_00C01090(0xF) == 0) && (func_00C01090(0x10) == 0) && (func_00C01090(0x11) == 0) && (func_00C01090(0x12) == 0) && (func_00C01090(0x14) == 0) && (func_00C01090(0x15) == 0) && (func_00C01090(0x16) == 0) && (func_00C01090(0x17) == 0) && (func_00C01090(0x18) == 0) && (func_00C01090(0x19) == 0) && (func_00C01090(0x1A) == 0) && (func_00C01090(0x1C) == 0) && (func_00C01090(0x1D) == 0) && (func_00C01090(0x1E) == 0) && (func_00C01090(0x1F) == 0) && (func_00C01090(0x20) == 0) && (func_00C01090(7) == 0) && (func_00C01090(0x2C) == 0)) {
                        if (func_00C01090(0x21) == 0) {
                            if ((func_00C01090(0x22) == 0) && (func_00C01090(0x23) == 0) && (func_00C01090(0x24) == 0) && (func_00C01090(0x25) == 0) && (func_00C01090(0x26) == 0) && (func_00C01090(0x27) == 0) && (func_00C01090(0x28) == 0) && (func_00C01090(0x29) == 0) && (func_00C01090(0x2B) == 0)) {
                                var_v0 = 5;
                            } else {
                                goto block_109;
                            }
                        } else {
block_109:
                            var_v0 = 7;
                        }
                    } else {
                        goto block_84;
                    }
                } else {
block_84:
                    var_v0 = 5;
                }
            } else {
                goto block_18;
            }
        } else {
block_18:
            var_v0 = 7;
        }
        break;
    case 0:
        if (func_00C01090(2) == 0) {
            if ((func_00C01090(3) == 0) && (func_00C01090(6) == 0) && (func_00C01090(5) == 0) && (func_00C01090(8) == 0) && (func_00C01090(9) == 0) && (func_00C01090(0) == 0) && (func_00C01090(1) == 0) && (func_00C01090(0xA) == 0) && (func_00C01090(0x2D) == 0)) {
                if (func_00C01090(0xB) == 0) {
                    if ((func_00C01090(0xC) == 0) && (func_00C01090(0xD) == 0) && (func_00C01090(0xE) == 0) && (func_00C01090(0xF) == 0) && (func_00C01090(0x10) == 0) && (func_00C01090(0x11) == 0) && (func_00C01090(0x12) == 0) && (func_00C01090(0x14) == 0) && (func_00C01090(0x15) == 0) && (func_00C01090(0x16) == 0) && (func_00C01090(0x17) == 0) && (func_00C01090(0x18) == 0) && (func_00C01090(0x19) == 0) && (func_00C01090(0x1A) == 0) && (func_00C01090(0x1C) == 0) && (func_00C01090(0x1D) == 0) && (func_00C01090(0x1E) == 0) && (func_00C01090(0x1F) == 0) && (func_00C01090(0x20) == 0) && (func_00C01090(7) == 0) && (func_00C01090(0x2C) == 0)) {
                        if (func_00C01090(0x21) == 0) {
                            if ((func_00C01090(0x22) == 0) && (func_00C01090(0x23) == 0) && (func_00C01090(0x24) == 0) && (func_00C01090(0x25) == 0) && (func_00C01090(0x26) == 0) && (func_00C01090(0x27) == 0) && (func_00C01090(0x28) == 0) && (func_00C01090(0x29) == 0) && (func_00C01090(0x2B) == 0)) {
                                var_v0 = 1;
                            } else {
                                goto block_61;
                            }
                        } else {
block_61:
                            var_v0 = 7;
                        }
                    } else {
                        goto block_36;
                    }
                } else {
block_36:
                    var_v0 = 1;
                }
            } else {
                goto block_14;
            }
        } else {
block_14:
            var_v0 = 7;
        }
        break;
    }
    return var_v0;
}
