/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u16 Pes6Team_GetPlayerId(s32, s32, s32);
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_001D5F80(M2C_UNK);                     /* extern */
void *func_0096DB90(M2C_UNK);                       /* extern */
M2C_UNK func_00AFCA20();                            /* extern */
extern void *D_003EAED0;

void func_00B65220(void) {
    s32 var_s1;
    void *temp_s0;
    void *temp_v0;

    if (D_003EAED0 == NULL) {
        func_00AFCA20();
        if (D_003EAED0 == NULL) {
            temp_v0 = func_0096DB90(0x6A0);
            D_003EAED0 = temp_v0;
            func_001C48E8(temp_v0, 0, 0x6A0);
        }
        temp_s0 = D_003EAED0;
        if (temp_s0 != NULL) {
            M2C_FIELD(temp_s0, s8 *, 0x69C) = 0;
            var_s1 = 0;
            M2C_FIELD(temp_s0, s16 *, 0x430) = 0;
            M2C_FIELD(temp_s0, s8 *, 0x440) = 0;
            M2C_FIELD(temp_s0, s32 *, 0x5C4) = 0;
            do {
                if (Pes6Team_GetPlayerId(0x127, var_s1 & 0xFF, 0) & 0xFFFF) {
                    M2C_FIELD(temp_s0, s32 *, 0x5C4) = (s32) (M2C_FIELD(temp_s0, s32 *, 0x5C4) + 1);
                }
                var_s1 += 1;
            } while (var_s1 < 0x20);
        }
        func_001D5F80(0x1031E);
    }
}
