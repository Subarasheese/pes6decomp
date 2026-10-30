/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001EDA30(void *, s32);
extern void func_001ED840(void *, s8);
extern void func_001F4B00(void *, s32);
extern s32 func_001D67E0(void *);
extern void func_001EF900(void *, s8);
void *func_001D6820();                              /* extern */

void *func_002F9AF0(M2C_UNK arg0, M2C_UNK arg1, s32 arg2) {
    s32 var_s0;
    void *temp_v0;

    temp_v0 = func_001D6820();
    func_001F4B00(temp_v0, 1);
    func_001EDA30(M2C_FIELD(temp_v0, void **, 0xC), 1);
    func_001ED840(M2C_FIELD(temp_v0, void **, 0xC), 3);
    var_s0 = 0;
    if (arg2 > 0) {
        do {
            func_001EF900(func_001D67E0(temp_v0), 0);
            var_s0 += 1;
        } while (var_s0 < arg2);
    }
    return temp_v0;
}
