/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001EC520(s32);
extern void func_001ED5B0(void *);
extern void func_001EB170(void *);
extern void func_001EF940(s32);
extern void func_00153FA0(void *);
void func_001EDD90(void *arg0) {
    s32 var_v1_2;
    s32 var_v1_4;
    void **temp_v0;
    void **temp_v0_2;
    void **temp_v0_3;
    void **temp_v0_4;
    void **var_a0;
    void **var_a0_2;
    void **var_s0;
    void **var_s0_2;
    void **var_v1;
    void **var_v1_3;

    if (arg0 != NULL) {
        if (M2C_FIELD(arg0, u16 *, 0x34) != 0) {
            if (M2C_FIELD(arg0, s32 *, 0x10) != 4) {
                var_a0 = M2C_FIELD(arg0, void ***, 0);
                do {
                    if ((arg0 != NULL) && (var_a0 != NULL)) {
                        temp_v0 = M2C_FIELD(arg0, void ***, 0);
                        var_v1 = temp_v0;
loop_7:
                        if (var_v1 == var_a0) {
                            var_v1_2 = 1;
                        } else {
                            var_v1 = M2C_FIELD(var_v1, void ***, 8);
                            if (var_v1 == NULL) {
                                var_v1_2 = 0;
                            } else {
                                goto loop_7;
                            }
                        }
                        if (var_v1_2 == 0) {
                            var_s0 = NULL;
                        } else {
                            var_s0 = M2C_FIELD(var_a0, void ***, 8);
                            if (temp_v0 != var_a0) {
                                if (M2C_FIELD(arg0, void **, 4) != var_a0) {
                                    M2C_FIELD(var_s0, void **, 4) = (void *) M2C_FIELD(var_a0, void **, 4);
                                    M2C_FIELD(M2C_FIELD(var_a0, void **, 4), void ***, 8) = (void **) M2C_FIELD(var_a0, void ***, 8);
                                } else {
                                    M2C_FIELD(arg0, void **, 4) = (void *) M2C_FIELD(var_a0, void **, 4);
                                    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 8) = 0;
                                }
                            } else {
                                M2C_FIELD(arg0, void ***, 0) = var_s0;
                                temp_v0_2 = M2C_FIELD(arg0, void ***, 0);
                                if (temp_v0_2 != NULL) {
                                    M2C_FIELD(temp_v0_2, s32 *, 4) = 0;
                                } else {
                                    M2C_FIELD(arg0, void **, 4) = NULL;
                                }
                            }
                            M2C_FIELD(arg0, u16 *, 0x34) = (u16) (M2C_FIELD(arg0, u16 *, 0x34) - 1);
                            func_001EF940((s32) var_a0);
                            M2C_FIELD(arg0, u8 *, 0x3A) = (u8) (M2C_FIELD(arg0, u8 *, 0x3A) | 2);
                        }
                    } else {
                        var_s0 = NULL;
                    }
                    var_a0 = var_s0;
                } while (var_s0 != NULL);
            } else {
                var_a0_2 = M2C_FIELD(arg0, void ***, 0);
                do {
                    if ((arg0 != NULL) && (var_a0_2 != NULL)) {
                        temp_v0_3 = M2C_FIELD(arg0, void ***, 0);
                        var_v1_3 = temp_v0_3;
loop_23:
                        if (var_v1_3 == var_a0_2) {
                            var_v1_4 = 1;
                        } else {
                            var_v1_3 = M2C_FIELD(var_v1_3, void ***, 4);
                            if (var_v1_3 == NULL) {
                                var_v1_4 = 0;
                            } else {
                                goto loop_23;
                            }
                        }
                        if (var_v1_4 == 0) {
                            var_s0_2 = NULL;
                        } else {
                            var_s0_2 = M2C_FIELD(var_a0_2, void ***, 4);
                            if (temp_v0_3 != var_a0_2) {
                                if (M2C_FIELD(arg0, void **, 4) != var_a0_2) {
                                    *var_s0_2 = M2C_FIELD(var_a0_2, void **, 0);
                                    M2C_FIELD(M2C_FIELD(var_a0_2, void **, 0), void ***, 4) = (void **) M2C_FIELD(var_a0_2, void ***, 4);
                                } else {
                                    M2C_FIELD(arg0, void **, 4) = (void *) M2C_FIELD(var_a0_2, void **, 0);
                                    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 4) = 0;
                                }
                            } else {
                                M2C_FIELD(arg0, void ***, 0) = var_s0_2;
                                temp_v0_4 = M2C_FIELD(arg0, void ***, 0);
                                if (temp_v0_4 != NULL) {
                                    M2C_FIELD(temp_v0_4, void **, 0) = NULL;
                                } else {
                                    M2C_FIELD(arg0, void **, 4) = NULL;
                                }
                            }
                            M2C_FIELD(arg0, u16 *, 0x34) = (u16) (M2C_FIELD(arg0, u16 *, 0x34) - 1);
                            func_001ED5B0(var_a0_2);
                            M2C_FIELD(arg0, u8 *, 0x3A) = (u8) (M2C_FIELD(arg0, u8 *, 0x3A) | 2);
                        }
                    } else {
                        var_s0_2 = NULL;
                    }
                    var_a0_2 = var_s0_2;
                } while (var_s0_2 != NULL);
            }
        }
        func_001EB170(M2C_FIELD(arg0, void **, 8));
        func_001EC520(M2C_FIELD(arg0, s32 *, 0xC));
        func_00153FA0(arg0);
    }
}
