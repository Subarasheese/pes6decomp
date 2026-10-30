/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00152C10(void *arg0, void *arg1, void *arg2, s32 arg3) {
    s32 var_a5;
    s32 var_t2;
    s32 var_t9;
    u16 temp_t2;
    u32 var_a6;
    u32 var_a7;
    void *temp_a7;
    void *var_a4;
    void *var_a6_2;
    void *var_t0;
    void *var_t1;
    void *var_t3;
    void *var_t8;
    void *var_v1;

    if (arg1 != arg2) {
        var_a6 = 0;
        var_a4 = arg0 + M2C_FIELD(arg0, s32 *, 0x24);
        if (M2C_FIELD(arg0, u32 *, 0x20) != 0) {
            do {
                var_a5 = 0;
                temp_a7 = var_a4 + M2C_FIELD(var_a4, s32 *, 8);
                temp_t2 = M2C_FIELD(temp_a7, u16 *, 0x58);
                var_a4 += M2C_FIELD(var_a4, s32 *, 0);
                var_v1 = temp_a7 + 0x64;
                if ((s32) temp_t2 > 0) {
                    do {
                        var_t9 = 0;
                        if (arg3 > 0) {
                            var_t8 = arg1;
                            var_t3 = arg2;
                            do {
                                if ((M2C_FIELD(var_v1, s16 *, 0) == M2C_FIELD(var_t8, s16 *, 0)) && (M2C_FIELD(var_v1, s16 *, 2) == M2C_FIELD(var_t8, s16 *, 2)) && (M2C_FIELD(var_v1, s16 *, 4) == M2C_FIELD(var_t8, s16 *, 4))) {
                                    M2C_FIELD(var_v1, s16 *, 0) = (s16) M2C_FIELD(var_t3, s16 *, 0);
                                    M2C_FIELD(var_v1, s16 *, 2) = (s16) M2C_FIELD(var_t3, s16 *, 2);
                                    M2C_FIELD(var_v1, s16 *, 4) = (s16) M2C_FIELD(var_t3, s16 *, 4);
                                }
                                var_t9 += 1;
                                var_t8 += 6;
                                var_t3 += 6;
                            } while (var_t9 < arg3);
                        }
                        var_a5 += 1;
                        var_v1 += 6;
                    } while (var_a5 < (s32) temp_t2);
                }
                var_a6 += 1;
            } while (var_a6 < (u32) M2C_FIELD(arg0, u32 *, 0x20));
        }
        var_a7 = 0;
        var_a6_2 = arg0 + M2C_FIELD(arg0, s32 *, 0x48);
        if (M2C_FIELD(arg0, u32 *, 0x44) != 0) {
            do {
                var_t2 = 0;
                if (arg3 > 0) {
                    var_t1 = arg1;
                    var_t0 = arg2;
                    do {
                        if ((M2C_FIELD(var_a6_2, s16 *, 0) == M2C_FIELD(var_t1, s16 *, 0)) && (M2C_FIELD(var_a6_2, s16 *, 2) == M2C_FIELD(var_t1, s16 *, 2)) && (M2C_FIELD(var_a6_2, s16 *, 4) == M2C_FIELD(var_t1, s16 *, 4))) {
                            M2C_FIELD(var_a6_2, s16 *, 0) = (s16) M2C_FIELD(var_t0, s16 *, 0);
                            M2C_FIELD(var_a6_2, s16 *, 2) = (s16) M2C_FIELD(var_t0, s16 *, 2);
                            M2C_FIELD(var_a6_2, s16 *, 4) = (s16) M2C_FIELD(var_t0, s16 *, 4);
                        }
                        var_t2 += 1;
                        var_t1 += 6;
                        var_t0 += 6;
                    } while (var_t2 < arg3);
                }
                var_a7 += 1;
                var_a6_2 += 6;
            } while (var_a7 < (u32) M2C_FIELD(arg0, u32 *, 0x44));
        }
    }
}
