/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00229DF0(void);
extern void * func_00229460(void);
void func_0099A710(void) {
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v1;
    void *temp_s0;
    void *temp_s1;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;

    temp_s0 = func_00229460();
    temp_s1 = func_00229DF0();
    if ((temp_s0 != NULL) && (temp_s1 != NULL)) {
        temp_v0 = func_00229DF0();
        if (temp_v0 != NULL) {
            if (!(M2C_FIELD(temp_v0, s32 *, 8) & 1)) {
                var_v0 = 0;
            } else {
                var_v0 = 1;
            }
        } else {
            var_v0 = 0;
        }
        if ((var_v0 & 0xFF) == 1) {
            M2C_FIELD(((M2C_FIELD(temp_s1, u8 *, 6) * 0xC) + temp_s0), s8 *, 0x4ABF) = 1;
        }
        temp_v0_2 = func_00229DF0();
        if (temp_v0_2 != NULL) {
            if (!(M2C_FIELD(temp_v0_2, s32 *, 8) & 4)) {
                var_v0_2 = 0;
            } else {
                var_v0_2 = 1;
            }
        } else {
            var_v0_2 = 0;
        }
        if ((var_v0_2 & 0xFF) == 1) {
            M2C_FIELD(temp_s0, s8 *, 0x4AEF) = 1;
        }
        temp_v0_3 = func_00229DF0();
        if (temp_v0_3 != NULL) {
            if (!(M2C_FIELD(temp_v0_3, s32 *, 8) & 0x40)) {
                var_v0_3 = 0;
            } else {
                var_v0_3 = 1;
            }
        } else {
            var_v0_3 = 0;
        }
        if ((var_v0_3 & 0xFF) == 1) {
            M2C_FIELD(temp_s0, s8 *, 0x4AFB) = 1;
        }
        temp_v0_4 = func_00229DF0();
        if (temp_v0_4 != NULL) {
            if (!(M2C_FIELD(temp_v0_4, s32 *, 8) & 0x80)) {
                var_v0_4 = 0;
            } else {
                var_v0_4 = 1;
            }
        } else {
            var_v0_4 = 0;
        }
        if ((var_v0_4 & 0xFF) == 1) {
            M2C_FIELD(temp_s0, s8 *, 0x4B2B) = 1;
        }
        temp_v0_5 = func_00229DF0();
        if (temp_v0_5 != NULL) {
            if (!(M2C_FIELD(temp_v0_5, s32 *, 8) & 0x20)) {
                var_v1 = 0;
            } else {
                var_v1 = 1;
            }
        } else {
            var_v1 = 0;
        }
        if ((var_v1 & 0xFF) == 1) {
            M2C_FIELD(temp_s0, s8 *, 0x4B5B) = 1;
        }
    }
}
