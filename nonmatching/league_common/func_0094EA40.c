/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_0022F150(void);
extern s32 func_00226710(void);
void func_0094EA40(void) {
    s32 temp_a0;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a1;
    void *temp_t0;
    void *temp_t2;
    void *temp_v0;

    temp_v0 = func_0022F150();
    if (temp_v0 != NULL) {
        temp_a0 = func_00226710() & 0xFF;
        if ((temp_a0 != 0x1B) && (temp_a0 != 0x19) && (temp_a0 != 0x17) && (temp_a0 != 0x15) && (temp_a0 != 0x13) && (temp_a0 != 0x11) && (temp_a0 != 0xE) && (temp_a0 != 0xC) && (temp_a0 != 0x25) && (temp_a0 != 0x24) && (temp_a0 != 0x27) && (temp_a0 != 0x26) && (temp_a0 != 0x21) && (temp_a0 != 0x1D)) {
            if (M2C_FIELD(temp_v0, u8 *, 0x1540) == 0) {
                var_a0 = 1;
                M2C_FIELD(temp_v0, u8 *, 0x1540) = 1U;
            } else {
                M2C_FIELD(temp_v0, u8 *, 0x1540) = 0U;
                var_a0 = 0;
            }
            var_a1 = 0;
            do {
                var_a0_2 = 0;
                temp_t2 = temp_v0 + ((var_a0 & 0xFF) * 0x558) + ((var_a1 & 0xFF) * 0x4C);
                M2C_FIELD(temp_t2, s8 *, 0xA90) = 0xFF;
                M2C_FIELD(temp_t2, s8 *, 0xA91) = 0xFF;
loop_20:
                temp_t0 = temp_t2 + ((var_a0_2 & 0xFF) * 4);
                var_a0_2 = (var_a0_2 + 1) & 0xFF;
                M2C_FIELD(temp_t0, s16 *, 0xA94) = 0;
                M2C_FIELD(temp_t0, s8 *, 0xA96) = 0;
                M2C_FIELD(temp_t0, u8 *, 0xA97) = (u8) ((M2C_FIELD(temp_t0, u8 *, 0xA97) & ~0x7F) | (0 & 0x7F));
                M2C_FIELD(temp_t0, u8 *, 0xA97) = (u8) ((M2C_FIELD(temp_t0, u8 *, 0xA97) & ~0x80) | ((0 & 1) << 7));
                if (var_a0_2 < 0x12) {
                    goto loop_20;
                }
                var_a1 = (var_a1 + 1) & 0xFF;
            } while (var_a1 < 0x12);
        }
    }
}
