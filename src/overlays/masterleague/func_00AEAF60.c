/* compiler: mwcc-3.0.1b210 */
#pragma opt_common_subs off
#include "types.h"
extern s32 D_003EADB4, D_003E7CEC, D_003E7CE8;
extern void *D_003EADB8, *D_003EADC0;
extern u8 func_00225820(void);
extern s32 func_00B223F0(s32), func_00994A10(s32);
extern void func_001D7D80(void *, s16), func_009737E0(void *, s32, s32);
void func_00AEAF60(void) {
    if (D_003EADB4) {
        s32 id = (u8)func_00225820();
        s32 value = func_00B223F0(id);
        s32 frame = (u8)func_00994A10(id);
        if (D_003EADB4 && frame >= 0 && frame < 6 && D_003E7CEC != frame) {
            func_001D7D80(D_003EADB8, 5 - frame);
            D_003E7CEC = frame;
        }
        if (D_003EADB4 && D_003E7CE8 != value) {
            func_009737E0(D_003EADC0, 1, value);
            D_003E7CE8 = value;
        }
    }
}
