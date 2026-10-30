/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D80(void *, s16);
extern u8 func_00225820(void);
M2C_UNK func_009737E0(s32, M2C_UNK, s32);           /* extern */
s32 func_00994A10(s32);                             /* extern */
s32 func_00B223F0(s32);                             /* extern */
extern s32 D_003E7CE8;
extern s32 D_003E7CEC;
extern s32 D_003EADB4;
extern void *D_003EADB8;
extern s32 D_003EADC0;

void func_00AEAF60(void) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s1;

    if (D_003EADB4 != 0) {
        temp_s0 = func_00225820() & 0xFF;
        temp_s1 = func_00B223F0(temp_s0);
        temp_s0_2 = func_00994A10(temp_s0) & 0xFF;
        if ((D_003EADB4 != 0) && (temp_s0_2 >= 0) && (temp_s0_2 < 6) && (D_003E7CEC != temp_s0_2)) {
            func_001D7D80(D_003EADB8, (s16) ((s64) ((5 - temp_s0_2) << 0x30) >> 0x30));
            D_003E7CEC = temp_s0_2;
        }
        if ((D_003EADB4 != 0) && (D_003E7CE8 != temp_s1)) {
            func_009737E0(D_003EADC0, 1, temp_s1);
            D_003E7CE8 = temp_s1;
        }
    }
}
