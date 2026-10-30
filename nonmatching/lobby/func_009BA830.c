/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
extern void func_001D7D80(void *, s16);
s32 func_0093EDB0(s32);                             /* extern */
s32 func_0093EE90(s32);                             /* extern */
s32 func_0093EF70(s32);                             /* extern */
s32 func_0093F040(s32);                             /* extern */
s32 func_0093F1F0(s32);                             /* extern */
s32 func_0093F390(s32);                             /* extern */
M2C_UNK func_0099B470(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_0099B530(s32, s32);                    /* extern */

void func_009BA830(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s0;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;

    temp_s0 = arg1 * 4;
    func_0099B530(M2C_FIELD((temp_s0 + arg0), s32 *, 0x54), func_0093EE90(arg2));
    func_0099B530(M2C_FIELD((temp_s0 + arg0), s32 *, 0x78), func_0093EDB0(arg2));
    func_0099B470(M2C_FIELD((temp_s0 + arg0), s32 *, 0x9C), 1, func_0093F1F0(arg2));
    func_001D7D80(M2C_FIELD((temp_s0 + arg0), void **, 8), (s16) ((s64) ((s64) (arg2 % 2) << 0x30) >> 0x30));
    if (func_0093F390(arg2) == 0) {
        if (func_0093EF70(arg2) == 0) {
            if (func_0093F040(arg2) == 0) {
                func_001D7D60(M2C_FIELD((temp_s0 + arg0), void **, 0x2C), 0);
                return;
            }
            temp_v0 = temp_s0 + arg0;
            func_001D7D80(M2C_FIELD(temp_v0, void **, 0x2C), 0);
            func_001D7D60(M2C_FIELD(temp_v0, void **, 0x2C), 1);
            return;
        }
        temp_v0_2 = temp_s0 + arg0;
        func_001D7D80(M2C_FIELD(temp_v0_2, void **, 0x2C), 2);
        func_001D7D60(M2C_FIELD(temp_v0_2, void **, 0x2C), 1);
        return;
    }
    temp_v0_3 = temp_s0 + arg0;
    func_001D7D80(M2C_FIELD(temp_v0_3, void **, 0x2C), 1);
    func_001D7D60(M2C_FIELD(temp_v0_3, void **, 0x2C), 1);
}
