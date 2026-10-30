/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F08B0(s32);
extern s32 func_001F8660(s32, s32);
extern u32 func_001CDA50(s32);
M2C_UNK func_001C7F58(s32, void *);                 /* extern */
extern u16 *D_00CE57F0;

void func_00BDD140(s32 arg0, s32 arg1) {
    void *temp_s1;

    if (arg0 < (s32) *D_00CE57F0) {
        temp_s1 = D_00CE57F0 + ((arg0 & 0xFFFF) * 0x30) + 8;
        if (func_001CDA50(1) == 5) {
            func_001F8660((s32) (temp_s1 + 8), arg1);
            return;
        }
        func_001C7F58(arg1, temp_s1 + 8);
        return;
    }
    func_001C7F58(arg1, func_001F08B0(0x2F000B));
}
