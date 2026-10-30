/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_0022F150(void);
void func_0094EBF0(void) {
    s32 var_a2;
    s32 var_a3;
    s32 var_a4;
    void *temp_t3;
    void *temp_t8;
    void *temp_v0;

    temp_v0 = func_0022F150();
    if (temp_v0 != NULL) {
        var_a4 = 0;
        do {
            var_a3 = 0;
loop_3:
            var_a2 = 0;
            temp_t8 = temp_v0 + ((var_a4 & 0xFF) * 0x558) + ((var_a3 & 0xFF) * 0x4C);
            M2C_FIELD(temp_t8, s8 *, 0xA90) = 0xFF;
            M2C_FIELD(temp_t8, s8 *, 0xA91) = 0xFF;
loop_4:
            temp_t3 = temp_t8 + ((var_a2 & 0xFF) * 4);
            var_a2 = (var_a2 + 1) & 0xFF;
            M2C_FIELD(temp_t3, s16 *, 0xA94) = 0;
            M2C_FIELD(temp_t3, s8 *, 0xA96) = 0;
            M2C_FIELD(temp_t3, u8 *, 0xA97) = (u8) ((M2C_FIELD(temp_t3, u8 *, 0xA97) & ~0x7F) | (0 & 0x7F));
            M2C_FIELD(temp_t3, u8 *, 0xA97) = (u8) ((M2C_FIELD(temp_t3, u8 *, 0xA97) & ~0x80) | ((0 & 1) << 7));
            if (var_a2 < 0x12) {
                goto loop_4;
            }
            var_a3 = (var_a3 + 1) & 0xFF;
            if (var_a3 < 0x12) {
                goto loop_3;
            }
            var_a4 = (var_a4 + 1) & 0xFF;
        } while (var_a4 < 2);
    }
}
