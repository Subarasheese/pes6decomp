/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00292D80(s32 arg0) {
    s32 temp_a2;
    s32 var_a0;
    s32 var_v0;

    temp_a2 = arg0 & 0xFF;
    if (temp_a2 != 0) {
        var_a0 = 5;
        if (temp_a2 != 5) {
            var_v0 = 4;
            if (temp_a2 != 4) {
                if (temp_a2 >= 8) {
                    if (temp_a2 != 8) {
                        if (temp_a2 != 9) {
                            if (temp_a2 >= 0xF) {
                                var_a0 = 0xF;
                                if (temp_a2 != 0xF) {
                                    if (temp_a2 != 0x10) {
                                        if (temp_a2 >= 0x16) {
                                            if (temp_a2 != 0x16) {
                                                if (temp_a2 != 0x17) {
                                                    if (temp_a2 >= 0x1D) {
                                                        switch (temp_a2) { /* irregular */
                                                        case 29:
                                                            return 0xD;
                                                        case 30:
                                                            return 0xE;
                                                        default:
                                                            return (temp_a2 >= 0x29) ? 0 : 0x10;
                                                        }
                                                    } else {
                                                        return 0xC;
                                                    }
                                                } else {
                                                    return 0xB;
                                                }
                                            } else {
                                                return 0xA;
                                            }
                                        } else {
                                            return 9;
                                        }
                                    } else {
                                        return 8;
                                    }
                                } else {
                                    return 7;
                                }
                            } else {
                                return 6;
                            }
                        } else {
                            var_v0 = var_a0;
                            /* Duplicate return node #32. Try simplifying control flow for better match */
                            return var_v0;
                        }
                    } else {
                        return var_v0;
                    }
                } else {
                    return 1;
                }
            } else {
                return 2;
            }
        } else {
            return 3;
        }
    } else {
        return 0;
    }
}
