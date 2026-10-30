/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_002C9CA0(u8);                              /* extern */
M2C_UNK func_0095AAC0(s32, s32, M2C_UNK);           /* extern */
s32 func_0095AC80(u8);                              /* extern */
M2C_UNK func_00AFA090();                            /* extern */
M2C_UNK func_00B00700();                            /* extern */
extern void *D_003EAD54;

void func_00B00500(void) {
    s32 temp_a1;
    s32 temp_s1;
    void *temp_s0;

    temp_s0 = D_003EAD54;
    if (temp_s0 != NULL) {
        temp_s1 = func_0095AC80(M2C_FIELD(temp_s0, u8 *, 0x810)) & 0xFF;
        temp_a1 = func_002C9CA0(M2C_FIELD(temp_s0, u8 *, 0x810)) & 0xFF;
        if (M2C_FIELD(temp_s0, s32 *, 0x898) == 0) {
            func_0095AAC0(temp_s1, temp_a1, 0);
        } else {
            func_0095AAC0(temp_s1, temp_a1, 1);
        }
        func_00B00700();
        func_00AFA090();
    }
}
