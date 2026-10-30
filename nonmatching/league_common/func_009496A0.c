/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_0022F190(void);
void func_009496A0(void) {
    s32 temp_a4;
    s32 temp_a5;
    s32 temp_a6;
    s32 var_a0;
    s32 var_t1;
    s32 var_t2;
    s32 var_t3;
    s32 var_t8;
    u16 temp_a0;
    u16 temp_a1;
    u16 temp_s1;
    u8 temp_s0;
    void *temp_a2;
    void *temp_a3;
    void *temp_a7;
    void *temp_v0;

    temp_v0 = func_0022F190();
    if (temp_v0 != NULL) {
        var_t2 = 0;
loop_2:
        temp_a7 = temp_v0 + ((var_t2 & 0xFF) * 0xC82);
        temp_a6 = M2C_FIELD(temp_a7, u8 *, 0x4778) - 1;
        var_t8 = 0;
        if (temp_a6 > 0) {
            temp_a5 = temp_a6 & 0xFF;
loop_4:
            temp_a4 = var_t8 & 0xFF;
            var_t1 = 0;
            var_t3 = temp_a5;
            var_a0 = temp_a5;
            if (temp_a4 < temp_a5) {
                do {
                    temp_a2 = temp_a7 + (var_a0 * 8);
                    temp_a1 = M2C_FIELD(temp_a2, u16 *, 0x4778);
                    temp_a3 = temp_a7 + ((var_t3 & 0xFF) * 8);
                    temp_a0 = M2C_FIELD(temp_a2, u16 *, 0x4776);
                    if ((temp_a0 + temp_a1) < (M2C_FIELD(temp_a3, u16 *, 0x477E) + M2C_FIELD(temp_a3, u16 *, 0x4780))) {
                        temp_s1 = M2C_FIELD(temp_a2, u16 *, 0x4772);
                        var_t1 = 1;
                        temp_s0 = M2C_FIELD(temp_a2, u8 *, 0x4774);
                        M2C_FIELD(temp_a2, u16 *, 0x4772) = (u16) M2C_FIELD(temp_a3, u16 *, 0x477A);
                        M2C_FIELD(temp_a2, u8 *, 0x4774) = (u8) M2C_FIELD(temp_a3, u8 *, 0x477C);
                        M2C_FIELD(temp_a2, u16 *, 0x4776) = (u16) M2C_FIELD(temp_a3, u16 *, 0x477E);
                        M2C_FIELD(temp_a2, u16 *, 0x4778) = (u16) M2C_FIELD(temp_a3, u16 *, 0x4780);
                        M2C_FIELD(temp_a3, u16 *, 0x477A) = temp_s1;
                        M2C_FIELD(temp_a3, u8 *, 0x477C) = temp_s0;
                        M2C_FIELD(temp_a3, u16 *, 0x477E) = temp_a0;
                        M2C_FIELD(temp_a3, u16 *, 0x4780) = temp_a1;
                    }
                    var_t3 = (var_t3 - 1) & 0xFF;
                    var_a0 = var_t3;
                } while (temp_a4 < var_t3);
            }
            if (var_t1 & 0xFF) {
                var_t8 = (var_t8 + 1) & 0xFF;
                if (var_t8 >= temp_a6) {
                    goto block_11;
                }
                goto loop_4;
            }
        } else {
block_11:
            var_t2 = (var_t2 + 1) & 0xFF;
            if (var_t2 < 4) {
                goto loop_2;
            }
        }
    }
}
