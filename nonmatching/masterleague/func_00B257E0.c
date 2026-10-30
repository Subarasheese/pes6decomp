/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00228960(void);
void *func_00970870(s32);                           /* extern */
s32 func_00B275D0(M2C_UNK);                         /* extern */

s32 func_00B257E0(s32 arg0) {
    s32 temp_v0_3;
    s32 temp_v1;
    s32 temp_v1_10;
    s32 temp_v1_11;
    s32 temp_v1_12;
    s32 temp_v1_13;
    s32 temp_v1_14;
    s32 temp_v1_15;
    s32 temp_v1_16;
    s32 temp_v1_17;
    s32 temp_v1_18;
    s32 temp_v1_19;
    s32 temp_v1_20;
    s32 temp_v1_21;
    s32 temp_v1_22;
    s32 temp_v1_23;
    s32 temp_v1_24;
    s32 temp_v1_25;
    s32 temp_v1_26;
    s32 temp_v1_27;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 temp_v1_5;
    s32 temp_v1_6;
    s32 temp_v1_7;
    s32 temp_v1_8;
    s32 temp_v1_9;
    s32 var_a0_27;
    s32 var_a0_28;
    s32 var_a0_29;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a1_3;
    u64 temp_v1_28;
    u64 temp_v1_29;
    u8 var_a0;
    u8 var_a0_10;
    u8 var_a0_11;
    u8 var_a0_12;
    u8 var_a0_13;
    u8 var_a0_14;
    u8 var_a0_15;
    u8 var_a0_16;
    u8 var_a0_17;
    u8 var_a0_18;
    u8 var_a0_19;
    u8 var_a0_20;
    u8 var_a0_21;
    u8 var_a0_22;
    u8 var_a0_23;
    u8 var_a0_24;
    u8 var_a0_25;
    u8 var_a0_26;
    u8 var_a0_2;
    u8 var_a0_3;
    u8 var_a0_4;
    u8 var_a0_5;
    u8 var_a0_6;
    u8 var_a0_7;
    u8 var_a0_8;
    u8 var_a0_9;
    u8 var_v1;
    u8 var_v1_10;
    u8 var_v1_11;
    u8 var_v1_12;
    u8 var_v1_13;
    u8 var_v1_14;
    u8 var_v1_15;
    u8 var_v1_16;
    u8 var_v1_17;
    u8 var_v1_18;
    u8 var_v1_19;
    u8 var_v1_20;
    u8 var_v1_21;
    u8 var_v1_22;
    u8 var_v1_23;
    u8 var_v1_24;
    u8 var_v1_25;
    u8 var_v1_26;
    u8 var_v1_2;
    u8 var_v1_3;
    u8 var_v1_4;
    u8 var_v1_5;
    u8 var_v1_6;
    u8 var_v1_7;
    u8 var_v1_8;
    u8 var_v1_9;
    void *temp_v0;
    void *temp_v0_2;

    temp_v0 = func_00228960();
    if (temp_v0 != NULL) {
        temp_v0_2 = func_00970870(arg0);
        if (temp_v0_2 != NULL) {
            temp_v0_3 = func_00B275D0(5);
            switch (temp_v0_3) {                    /* irregular */
            case 3:
                if (M2C_FIELD(temp_v0, u8 *, 0x63) != 0) {
                    var_a0 = M2C_FIELD(temp_v0, u8 *, 0x60);
                    var_v1 = M2C_FIELD(temp_v0, u8 *, 0x61);
                    if (M2C_FIELD(temp_v0, u8 *, 0x62) != 0) {
                        var_v1 = (var_v1 + 5) & 0xFFFF;
                        if ((var_a0 & 0xFFFF) >= 6) {
                            var_a0 = (var_a0 - 5) & 0xFFFF;
                        } else {
                            var_a0 = 0;
                        }
                    }
                    temp_v1 = M2C_FIELD(temp_v0_2, u8 *, 2) & 0x7F;
                    if ((var_v1 & 0xFFFF) < temp_v1) {
                        return 0;
                    }
                    if (temp_v1 < (var_a0 & 0xFFFF)) {
                        return 0;
                    }
                    goto block_23;
                }
block_23:
                if (M2C_FIELD(temp_v0, u8 *, 0x67) != 0) {
                    var_a0_2 = M2C_FIELD(temp_v0, u8 *, 0x64);
                    var_v1_2 = M2C_FIELD(temp_v0, u8 *, 0x65);
                    if (M2C_FIELD(temp_v0, u8 *, 0x66) != 0) {
                        var_v1_2 = (var_v1_2 + 5) & 0xFFFF;
                        if ((var_a0_2 & 0xFFFF) >= 6) {
                            var_a0_2 = (var_a0_2 - 5) & 0xFFFF;
                        } else {
                            var_a0_2 = 0;
                        }
                    }
                    temp_v1_2 = M2C_FIELD(temp_v0_2, u8 *, 3) & 0x7F;
                    if ((var_v1_2 & 0xFFFF) < temp_v1_2) {
                        return 0;
                    }
                    if (temp_v1_2 < (var_a0_2 & 0xFFFF)) {
                        return 0;
                    }
                    goto block_33;
                }
block_33:
                if (M2C_FIELD(temp_v0, u8 *, 0x6B) != 0) {
                    var_a0_3 = M2C_FIELD(temp_v0, u8 *, 0x68);
                    var_v1_3 = M2C_FIELD(temp_v0, u8 *, 0x69);
                    if (M2C_FIELD(temp_v0, u8 *, 0x6A) != 0) {
                        var_v1_3 = (var_v1_3 + 5) & 0xFFFF;
                        if ((var_a0_3 & 0xFFFF) >= 6) {
                            var_a0_3 = (var_a0_3 - 5) & 0xFFFF;
                        } else {
                            var_a0_3 = 0;
                        }
                    }
                    temp_v1_3 = M2C_FIELD(temp_v0_2, u8 *, 4) & 0x7F;
                    if ((var_v1_3 & 0xFFFF) < temp_v1_3) {
                        return 0;
                    }
                    if (temp_v1_3 < (var_a0_3 & 0xFFFF)) {
                        return 0;
                    }
                    goto block_43;
                }
block_43:
                if (M2C_FIELD(temp_v0, u8 *, 0x6F) != 0) {
                    var_a0_4 = M2C_FIELD(temp_v0, u8 *, 0x6C);
                    var_v1_4 = M2C_FIELD(temp_v0, u8 *, 0x6D);
                    if (M2C_FIELD(temp_v0, u8 *, 0x6E) != 0) {
                        var_v1_4 = (var_v1_4 + 5) & 0xFFFF;
                        if ((var_a0_4 & 0xFFFF) >= 6) {
                            var_a0_4 = (var_a0_4 - 5) & 0xFFFF;
                        } else {
                            var_a0_4 = 0;
                        }
                    }
                    temp_v1_4 = M2C_FIELD(temp_v0_2, u8 *, 5) & 0x7F;
                    if ((var_v1_4 & 0xFFFF) < temp_v1_4) {
                        return 0;
                    }
                    if (temp_v1_4 < (var_a0_4 & 0xFFFF)) {
                        return 0;
                    }
                    goto block_53;
                }
block_53:
                if (M2C_FIELD(temp_v0, u8 *, 0x73) != 0) {
                    var_a0_5 = M2C_FIELD(temp_v0, u8 *, 0x70);
                    var_v1_5 = M2C_FIELD(temp_v0, u8 *, 0x71);
                    if (M2C_FIELD(temp_v0, u8 *, 0x72) != 0) {
                        var_v1_5 = (var_v1_5 + 5) & 0xFFFF;
                        if ((var_a0_5 & 0xFFFF) >= 6) {
                            var_a0_5 = (var_a0_5 - 5) & 0xFFFF;
                        } else {
                            var_a0_5 = 0;
                        }
                    }
                    temp_v1_5 = M2C_FIELD(temp_v0_2, u8 *, 6) & 0x7F;
                    if ((var_v1_5 & 0xFFFF) < temp_v1_5) {
                        return 0;
                    }
                    if (temp_v1_5 < (var_a0_5 & 0xFFFF)) {
                        return 0;
                    }
                    goto block_63;
                }
block_63:
                if (M2C_FIELD(temp_v0, u8 *, 0x77) != 0) {
                    var_a0_6 = M2C_FIELD(temp_v0, u8 *, 0x74);
                    var_v1_6 = M2C_FIELD(temp_v0, u8 *, 0x75);
                    if (M2C_FIELD(temp_v0, u8 *, 0x76) != 0) {
                        var_v1_6 = (var_v1_6 + 5) & 0xFFFF;
                        if ((var_a0_6 & 0xFFFF) >= 6) {
                            var_a0_6 = (var_a0_6 - 5) & 0xFFFF;
                        } else {
                            var_a0_6 = 0;
                        }
                    }
                    temp_v1_6 = M2C_FIELD(temp_v0_2, u8 *, 7) & 0x7F;
                    if ((var_v1_6 & 0xFFFF) < temp_v1_6) {
                        return 0;
                    }
                    if (temp_v1_6 < (var_a0_6 & 0xFFFF)) {
                        return 0;
                    }
                    goto block_73;
                }
block_73:
                if (M2C_FIELD(temp_v0, u8 *, 0x7B) != 0) {
                    var_a0_7 = M2C_FIELD(temp_v0, u8 *, 0x78);
                    var_v1_7 = M2C_FIELD(temp_v0, u8 *, 0x79);
                    if (M2C_FIELD(temp_v0, u8 *, 0x7A) != 0) {
                        var_v1_7 = (var_v1_7 + 5) & 0xFFFF;
                        if ((var_a0_7 & 0xFFFF) >= 6) {
                            var_a0_7 = (var_a0_7 - 5) & 0xFFFF;
                        } else {
                            var_a0_7 = 0;
                        }
                    }
                    temp_v1_7 = M2C_FIELD(temp_v0_2, u8 *, 8) & 0x7F;
                    if ((var_v1_7 & 0xFFFF) < temp_v1_7) {
                        return 0;
                    }
                    if (temp_v1_7 < (var_a0_7 & 0xFFFF)) {
                        return 0;
                    }
                    goto block_83;
                }
block_83:
                if (M2C_FIELD(temp_v0, u8 *, 0x7F) != 0) {
                    var_a0_8 = M2C_FIELD(temp_v0, u8 *, 0x7C);
                    var_v1_8 = M2C_FIELD(temp_v0, u8 *, 0x7D);
                    if (M2C_FIELD(temp_v0, u8 *, 0x7E) != 0) {
                        var_v1_8 = (var_v1_8 + 5) & 0xFFFF;
                        if ((var_a0_8 & 0xFFFF) >= 6) {
                            var_a0_8 = (var_a0_8 - 5) & 0xFFFF;
                        } else {
                            var_a0_8 = 0;
                        }
                    }
                    temp_v1_8 = M2C_FIELD(temp_v0_2, u8 *, 9) & 0x7F;
                    if ((var_v1_8 & 0xFFFF) < temp_v1_8) {
                        return 0;
                    }
                    if (temp_v1_8 < (var_a0_8 & 0xFFFF)) {
                        return 0;
                    }
                    goto block_93;
                }
block_93:
                if (M2C_FIELD(temp_v0, u8 *, 0x83) != 0) {
                    var_a0_9 = M2C_FIELD(temp_v0, u8 *, 0x80);
                    var_v1_9 = M2C_FIELD(temp_v0, u8 *, 0x81);
                    if (M2C_FIELD(temp_v0, u8 *, 0x82) != 0) {
                        var_v1_9 = (var_v1_9 + 5) & 0xFFFF;
                        if ((var_a0_9 & 0xFFFF) >= 6) {
                            var_a0_9 = (var_a0_9 - 5) & 0xFFFF;
                        } else {
                            var_a0_9 = 0;
                        }
                    }
                    temp_v1_9 = M2C_FIELD(temp_v0_2, u8 *, 0xA) & 0x7F;
                    if ((var_v1_9 & 0xFFFF) < temp_v1_9) {
                        return 0;
                    }
                    if (temp_v1_9 < (var_a0_9 & 0xFFFF)) {
                        return 0;
                    }
                    goto block_103;
                }
block_103:
                if (M2C_FIELD(temp_v0, u8 *, 0x87) != 0) {
                    var_a0_10 = M2C_FIELD(temp_v0, u8 *, 0x84);
                    var_v1_10 = M2C_FIELD(temp_v0, u8 *, 0x85);
                    if (M2C_FIELD(temp_v0, u8 *, 0x86) != 0) {
                        var_v1_10 = (var_v1_10 + 5) & 0xFFFF;
                        if ((var_a0_10 & 0xFFFF) >= 6) {
                            var_a0_10 = (var_a0_10 - 5) & 0xFFFF;
                        } else {
                            var_a0_10 = 0;
                        }
                    }
                    temp_v1_10 = M2C_FIELD(temp_v0_2, u8 *, 0xB) & 0x7F;
                    if ((var_v1_10 & 0xFFFF) < temp_v1_10) {
                        return 0;
                    }
                    if (temp_v1_10 < (var_a0_10 & 0xFFFF)) {
                        return 0;
                    }
                    goto block_113;
                }
block_113:
                if (M2C_FIELD(temp_v0, u8 *, 0x8B) != 0) {
                    var_a0_11 = M2C_FIELD(temp_v0, u8 *, 0x88);
                    var_v1_11 = M2C_FIELD(temp_v0, u8 *, 0x89);
                    if (M2C_FIELD(temp_v0, u8 *, 0x8A) != 0) {
                        var_v1_11 = (var_v1_11 + 5) & 0xFFFF;
                        if ((var_a0_11 & 0xFFFF) >= 6) {
                            var_a0_11 = (var_a0_11 - 5) & 0xFFFF;
                        } else {
                            var_a0_11 = 0;
                        }
                    }
                    temp_v1_11 = M2C_FIELD(temp_v0_2, u8 *, 0xC) & 0x7F;
                    if ((var_v1_11 & 0xFFFF) < temp_v1_11) {
                        return 0;
                    }
                    if (temp_v1_11 < (var_a0_11 & 0xFFFF)) {
                        return 0;
                    }
                    goto block_123;
                }
block_123:
                if (M2C_FIELD(temp_v0, u8 *, 0x8F) != 0) {
                    var_a0_12 = M2C_FIELD(temp_v0, u8 *, 0x8C);
                    var_v1_12 = M2C_FIELD(temp_v0, u8 *, 0x8D);
                    if (M2C_FIELD(temp_v0, u8 *, 0x8E) != 0) {
                        var_v1_12 = (var_v1_12 + 5) & 0xFFFF;
                        if ((var_a0_12 & 0xFFFF) >= 6) {
                            var_a0_12 = (var_a0_12 - 5) & 0xFFFF;
                        } else {
                            var_a0_12 = 0;
                        }
                    }
                    temp_v1_12 = M2C_FIELD(temp_v0_2, u8 *, 0xD) & 0x7F;
                    if ((var_v1_12 & 0xFFFF) < temp_v1_12) {
                        return 0;
                    }
                    if (temp_v1_12 < (var_a0_12 & 0xFFFF)) {
                        return 0;
                    }
                    goto block_133;
                }
block_133:
                if (M2C_FIELD(temp_v0, u8 *, 0x93) != 0) {
                    var_a0_13 = M2C_FIELD(temp_v0, u8 *, 0x90);
                    var_v1_13 = M2C_FIELD(temp_v0, u8 *, 0x91);
                    if (M2C_FIELD(temp_v0, u8 *, 0x92) != 0) {
                        var_v1_13 = (var_v1_13 + 5) & 0xFFFF;
                        if ((var_a0_13 & 0xFFFF) >= 6) {
                            var_a0_13 = (var_a0_13 - 5) & 0xFFFF;
                        } else {
                            var_a0_13 = 0;
                        }
                    }
                    temp_v1_13 = M2C_FIELD(temp_v0_2, u8 *, 0xE) & 0x7F;
                    if ((var_v1_13 & 0xFFFF) < temp_v1_13) {
                        return 0;
                    }
                    if (temp_v1_13 < (var_a0_13 & 0xFFFF)) {
                        return 0;
                    }
                    goto block_143;
                }
block_143:
                if (M2C_FIELD(temp_v0, u8 *, 0x97) != 0) {
                    var_a0_14 = M2C_FIELD(temp_v0, u8 *, 0x94);
                    var_v1_14 = M2C_FIELD(temp_v0, u8 *, 0x95);
                    if (M2C_FIELD(temp_v0, u8 *, 0x96) != 0) {
                        var_v1_14 = (var_v1_14 + 5) & 0xFFFF;
                        if ((var_a0_14 & 0xFFFF) >= 6) {
                            var_a0_14 = (var_a0_14 - 5) & 0xFFFF;
                        } else {
                            var_a0_14 = 0;
                        }
                    }
                    temp_v1_14 = M2C_FIELD(temp_v0_2, u8 *, 0xF) & 0x7F;
                    if ((var_v1_14 & 0xFFFF) < temp_v1_14) {
                        return 0;
                    }
                    if (temp_v1_14 < (var_a0_14 & 0xFFFF)) {
                        return 0;
                    }
                    goto block_153;
                }
block_153:
                if (M2C_FIELD(temp_v0, u8 *, 0x9B) != 0) {
                    var_a0_15 = M2C_FIELD(temp_v0, u8 *, 0x98);
                    var_v1_15 = M2C_FIELD(temp_v0, u8 *, 0x99);
                    if (M2C_FIELD(temp_v0, u8 *, 0x9A) != 0) {
                        var_v1_15 = (var_v1_15 + 5) & 0xFFFF;
                        if ((var_a0_15 & 0xFFFF) >= 6) {
                            var_a0_15 = (var_a0_15 - 5) & 0xFFFF;
                        } else {
                            var_a0_15 = 0;
                        }
                    }
                    temp_v1_15 = M2C_FIELD(temp_v0_2, u8 *, 0x10) & 0x7F;
                    if ((var_v1_15 & 0xFFFF) < temp_v1_15) {
                        return 0;
                    }
                    if (temp_v1_15 < (var_a0_15 & 0xFFFF)) {
                        return 0;
                    }
                    goto block_163;
                }
block_163:
                if (M2C_FIELD(temp_v0, u8 *, 0x9F) != 0) {
                    var_a0_16 = M2C_FIELD(temp_v0, u8 *, 0x9C);
                    var_v1_16 = M2C_FIELD(temp_v0, u8 *, 0x9D);
                    if (M2C_FIELD(temp_v0, u8 *, 0x9E) != 0) {
                        var_v1_16 = (var_v1_16 + 5) & 0xFFFF;
                        if ((var_a0_16 & 0xFFFF) >= 6) {
                            var_a0_16 = (var_a0_16 - 5) & 0xFFFF;
                        } else {
                            var_a0_16 = 0;
                        }
                    }
                    temp_v1_16 = M2C_FIELD(temp_v0_2, u8 *, 0x11) & 0x7F;
                    if ((var_v1_16 & 0xFFFF) < temp_v1_16) {
                        return 0;
                    }
                    if (temp_v1_16 < (var_a0_16 & 0xFFFF)) {
                        return 0;
                    }
                    goto block_173;
                }
block_173:
                if (M2C_FIELD(temp_v0, u8 *, 0xA3) != 0) {
                    var_a0_17 = M2C_FIELD(temp_v0, u8 *, 0xA0);
                    var_v1_17 = M2C_FIELD(temp_v0, u8 *, 0xA1);
                    if (M2C_FIELD(temp_v0, u8 *, 0xA2) != 0) {
                        var_v1_17 = (var_v1_17 + 5) & 0xFFFF;
                        if ((var_a0_17 & 0xFFFF) >= 6) {
                            var_a0_17 = (var_a0_17 - 5) & 0xFFFF;
                        } else {
                            var_a0_17 = 0;
                        }
                    }
                    temp_v1_17 = M2C_FIELD(temp_v0_2, u8 *, 0x12) & 0x7F;
                    if ((var_v1_17 & 0xFFFF) < temp_v1_17) {
                        return 0;
                    }
                    if (temp_v1_17 < (var_a0_17 & 0xFFFF)) {
                        return 0;
                    }
                    goto block_183;
                }
block_183:
                if (M2C_FIELD(temp_v0, u8 *, 0xA7) != 0) {
                    var_a0_18 = M2C_FIELD(temp_v0, u8 *, 0xA4);
                    var_v1_18 = M2C_FIELD(temp_v0, u8 *, 0xA5);
                    if (M2C_FIELD(temp_v0, u8 *, 0xA6) != 0) {
                        var_v1_18 = (var_v1_18 + 5) & 0xFFFF;
                        if ((var_a0_18 & 0xFFFF) >= 6) {
                            var_a0_18 = (var_a0_18 - 5) & 0xFFFF;
                        } else {
                            var_a0_18 = 0;
                        }
                    }
                    temp_v1_18 = M2C_FIELD(temp_v0_2, u8 *, 0x13) & 0x7F;
                    if ((var_v1_18 & 0xFFFF) < temp_v1_18) {
                        return 0;
                    }
                    if (temp_v1_18 < (var_a0_18 & 0xFFFF)) {
                        return 0;
                    }
                    goto block_193;
                }
block_193:
                if (M2C_FIELD(temp_v0, u8 *, 0xAB) != 0) {
                    var_a0_19 = M2C_FIELD(temp_v0, u8 *, 0xA8);
                    var_v1_19 = M2C_FIELD(temp_v0, u8 *, 0xA9);
                    if (M2C_FIELD(temp_v0, u8 *, 0xAA) != 0) {
                        var_v1_19 = (var_v1_19 + 5) & 0xFFFF;
                        if ((var_a0_19 & 0xFFFF) >= 6) {
                            var_a0_19 = (var_a0_19 - 5) & 0xFFFF;
                        } else {
                            var_a0_19 = 0;
                        }
                    }
                    temp_v1_19 = M2C_FIELD(temp_v0_2, u8 *, 0x14) & 0x7F;
                    if ((var_v1_19 & 0xFFFF) < temp_v1_19) {
                        return 0;
                    }
                    if (temp_v1_19 < (var_a0_19 & 0xFFFF)) {
                        return 0;
                    }
                    goto block_203;
                }
block_203:
                if (M2C_FIELD(temp_v0, u8 *, 0xAF) != 0) {
                    var_a0_20 = M2C_FIELD(temp_v0, u8 *, 0xAC);
                    var_v1_20 = M2C_FIELD(temp_v0, u8 *, 0xAD);
                    if (M2C_FIELD(temp_v0, u8 *, 0xAE) != 0) {
                        var_v1_20 = (var_v1_20 + 5) & 0xFFFF;
                        if ((var_a0_20 & 0xFFFF) >= 6) {
                            var_a0_20 = (var_a0_20 - 5) & 0xFFFF;
                        } else {
                            var_a0_20 = 0;
                        }
                    }
                    temp_v1_20 = M2C_FIELD(temp_v0_2, u8 *, 0x15) & 0x7F;
                    if ((var_v1_20 & 0xFFFF) < temp_v1_20) {
                        return 0;
                    }
                    if (temp_v1_20 < (var_a0_20 & 0xFFFF)) {
                        return 0;
                    }
                    goto block_213;
                }
block_213:
                if (M2C_FIELD(temp_v0, u8 *, 0xB3) != 0) {
                    var_a0_21 = M2C_FIELD(temp_v0, u8 *, 0xB0);
                    var_v1_21 = M2C_FIELD(temp_v0, u8 *, 0xB1);
                    if (M2C_FIELD(temp_v0, u8 *, 0xB2) != 0) {
                        var_v1_21 = (var_v1_21 + 5) & 0xFFFF;
                        if ((var_a0_21 & 0xFFFF) >= 6) {
                            var_a0_21 = (var_a0_21 - 5) & 0xFFFF;
                        } else {
                            var_a0_21 = 0;
                        }
                    }
                    temp_v1_21 = M2C_FIELD(temp_v0_2, u8 *, 0x16) & 0x7F;
                    if ((var_v1_21 & 0xFFFF) < temp_v1_21) {
                        return 0;
                    }
                    if (temp_v1_21 < (var_a0_21 & 0xFFFF)) {
                        return 0;
                    }
                    goto block_223;
                }
block_223:
                if (M2C_FIELD(temp_v0, u8 *, 0xB7) != 0) {
                    var_a0_22 = M2C_FIELD(temp_v0, u8 *, 0xB4);
                    var_v1_22 = M2C_FIELD(temp_v0, u8 *, 0xB5);
                    if (M2C_FIELD(temp_v0, u8 *, 0xB6) != 0) {
                        var_v1_22 = (var_v1_22 + 5) & 0xFFFF;
                        if ((var_a0_22 & 0xFFFF) >= 6) {
                            var_a0_22 = (var_a0_22 - 5) & 0xFFFF;
                        } else {
                            var_a0_22 = 0;
                        }
                    }
                    temp_v1_22 = M2C_FIELD(temp_v0_2, u8 *, 0x18) & 0x7F;
                    if ((var_v1_22 & 0xFFFF) < temp_v1_22) {
                        return 0;
                    }
                    if (temp_v1_22 < (var_a0_22 & 0xFFFF)) {
                        return 0;
                    }
                    goto block_233;
                }
block_233:
                if (M2C_FIELD(temp_v0, u8 *, 0xBB) != 0) {
                    var_a0_23 = M2C_FIELD(temp_v0, u8 *, 0xB8);
                    var_v1_23 = M2C_FIELD(temp_v0, u8 *, 0xB9);
                    if (M2C_FIELD(temp_v0, u8 *, 0xBA) != 0) {
                        var_v1_23 = (var_v1_23 + 5) & 0xFFFF;
                        if ((var_a0_23 & 0xFFFF) >= 6) {
                            var_a0_23 = (var_a0_23 - 5) & 0xFFFF;
                        } else {
                            var_a0_23 = 0;
                        }
                    }
                    temp_v1_23 = M2C_FIELD(temp_v0_2, u8 *, 0x19) & 0x7F;
                    if ((var_v1_23 & 0xFFFF) < temp_v1_23) {
                        return 0;
                    }
                    if (temp_v1_23 < (var_a0_23 & 0xFFFF)) {
                        return 0;
                    }
                    goto block_243;
                }
block_243:
                if (M2C_FIELD(temp_v0, u8 *, 0xBF) != 0) {
                    var_a0_24 = M2C_FIELD(temp_v0, u8 *, 0xBC);
                    var_v1_24 = M2C_FIELD(temp_v0, u8 *, 0xBD);
                    if (M2C_FIELD(temp_v0, u8 *, 0xBE) != 0) {
                        var_v1_24 = (var_v1_24 + 5) & 0xFFFF;
                        if ((var_a0_24 & 0xFFFF) >= 6) {
                            var_a0_24 = (var_a0_24 - 5) & 0xFFFF;
                        } else {
                            var_a0_24 = 0;
                        }
                    }
                    temp_v1_24 = M2C_FIELD(temp_v0_2, u8 *, 0x1A) & 0x7F;
                    if ((var_v1_24 & 0xFFFF) < temp_v1_24) {
                        return 0;
                    }
                    if (temp_v1_24 < (var_a0_24 & 0xFFFF)) {
                        return 0;
                    }
                    goto block_253;
                }
block_253:
                if (M2C_FIELD(temp_v0, u8 *, 0xC3) != 0) {
                    var_a0_25 = M2C_FIELD(temp_v0, u8 *, 0xC0);
                    var_v1_25 = M2C_FIELD(temp_v0, u8 *, 0xC1);
                    if (M2C_FIELD(temp_v0, u8 *, 0xC2) != 0) {
                        var_v1_25 = (var_v1_25 + 5) & 0xFFFF;
                        if ((var_a0_25 & 0xFFFF) >= 6) {
                            var_a0_25 = (var_a0_25 - 5) & 0xFFFF;
                        } else {
                            var_a0_25 = 0;
                        }
                    }
                    temp_v1_25 = M2C_FIELD(temp_v0_2, u8 *, 0x1B) & 0x7F;
                    if ((var_v1_25 & 0xFFFF) < temp_v1_25) {
                        return 0;
                    }
                    if (temp_v1_25 < (var_a0_25 & 0xFFFF)) {
                        return 0;
                    }
                    goto block_263;
                }
block_263:
                if (M2C_FIELD(temp_v0, u8 *, 0xC7) != 0) {
                    var_a0_26 = M2C_FIELD(temp_v0, u8 *, 0xC4);
                    var_v1_26 = M2C_FIELD(temp_v0, u8 *, 0xC5);
                    if (M2C_FIELD(temp_v0, u8 *, 0xC6) != 0) {
                        var_v1_26 = (var_v1_26 + 5) & 0xFFFF;
                        if ((var_a0_26 & 0xFFFF) >= 6) {
                            var_a0_26 = (var_a0_26 - 5) & 0xFFFF;
                        } else {
                            var_a0_26 = 0;
                        }
                    }
                    temp_v1_26 = M2C_FIELD(temp_v0_2, u8 *, 0x17) & 0x7F;
                    if ((var_v1_26 & 0xFFFF) < temp_v1_26) {
                        return 0;
                    }
                    if (temp_v1_26 < (var_a0_26 & 0xFFFF)) {
                        return 0;
                    }
                    goto block_273;
                }
block_273:
                if (M2C_FIELD(temp_v0, u8 *, 0xCB) != 0) {
                    var_a1 = (M2C_FIELD(temp_v0, u8 *, 0xC9) - 1) & 0xFFFF;
                    var_a0_27 = (M2C_FIELD(temp_v0, u8 *, 0xC8) - 1) & 0xFFFF;
                    if (M2C_FIELD(temp_v0, u8 *, 0xCA) != 0) {
                        var_a1 = (var_a1 + 2) & 0xFFFF;
                        if ((var_a0_27 & 0xFFFF) >= 3) {
                            var_a0_27 = (var_a0_27 - 2) & 0xFFFF;
                        } else {
                            var_a0_27 = 0;
                        }
                    }
                    temp_v1_27 = M2C_FIELD(temp_v0_2, u8 *, 0x1D) & 7;
                    if ((var_a1 & 0xFFFF) < temp_v1_27) {
                        return 0;
                    }
                    if (temp_v1_27 < (var_a0_27 & 0xFFFF)) {
                        return 0;
                    }
                    goto block_283;
                }
block_283:
                if (M2C_FIELD(temp_v0, u8 *, 0xCF) != 0) {
                    var_a1_2 = (M2C_FIELD(temp_v0, u8 *, 0xCD) - 1) & 0xFFFF;
                    var_a0_28 = (M2C_FIELD(temp_v0, u8 *, 0xCC) - 1) & 0xFFFF;
                    if (M2C_FIELD(temp_v0, u8 *, 0xCE) != 0) {
                        var_a1_2 = (var_a1_2 + 2) & 0xFFFF;
                        if ((var_a0_28 & 0xFFFF) >= 3) {
                            var_a0_28 = (var_a0_28 - 2) & 0xFFFF;
                        } else {
                            var_a0_28 = 0;
                        }
                    }
                    temp_v1_28 = (u64) ((s64) M2C_FIELD(temp_v0_2, u8 *, 0x1D) << 0x3A) >> 0x3D;
                    if ((var_a1_2 & 0xFFFF) < (s32) temp_v1_28) {
                        return 0;
                    }
                    if ((s32) temp_v1_28 < (var_a0_28 & 0xFFFF)) {
                        return 0;
                    }
                    goto block_293;
                }
block_293:
                if (M2C_FIELD(temp_v0, u8 *, 0xD3) != 0) {
                    var_a1_3 = (M2C_FIELD(temp_v0, u8 *, 0xD1) - 1) & 0xFFFF;
                    var_a0_29 = (M2C_FIELD(temp_v0, u8 *, 0xD0) - 1) & 0xFFFF;
                    if (M2C_FIELD(temp_v0, u8 *, 0xD2) != 0) {
                        var_a1_3 = (var_a1_3 + 2) & 0xFFFF;
                        if ((var_a0_29 & 0xFFFF) >= 3) {
                            var_a0_29 = (var_a0_29 - 2) & 0xFFFF;
                        } else {
                            var_a0_29 = 0;
                        }
                    }
                    temp_v1_29 = (u64) ((s64) M2C_FIELD(temp_v0_2, u8 *, 0x1C) << 0x3A) >> 0x3D;
                    if ((var_a1_3 & 0xFFFF) < (s32) temp_v1_29) {
                        return 0;
                    }
                    if ((s32) temp_v1_29 < (var_a0_29 & 0xFFFF)) {
                        return 0;
                    }
                    goto block_303;
                }
block_303:
                if ((M2C_FIELD(temp_v0, u8 *, 0xD7) != 0) && (M2C_FIELD(temp_v0, u8 *, 0xD4) != ((u64) ((s64) M2C_FIELD(temp_v0_2, u8 *, 0x1C) << 0x38) >> 0x3E))) {
                    return 0;
                }
            case 2:
                return 1;
            default:
                return 0;
            }
        } else {
            return 0;
        }
    } else {
        return 0;
    }
}
