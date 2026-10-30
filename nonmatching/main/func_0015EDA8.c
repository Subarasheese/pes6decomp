/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0015B478(void *);
extern void func_00172790(void *, s32);
M2C_UNK ADXT_EntryAfs(void *, s32, u32);            /* extern */
M2C_UNK ADXT_StartSeamless(void *);                      /* extern */
M2C_UNK func_001722A0(void *);                      /* extern */

void func_0015EDA8(void *arg0, s32 arg1, u32 arg2) {
    void *temp_s0;

    if ((arg0 != NULL) && (arg1 <= 0)) {
        if (arg2 <= 0x10000U) {
            temp_s0 = M2C_FIELD(arg0, void **, 0x94);
            func_001722A0(temp_s0);
            ADXT_EntryAfs(arg0, arg1, arg2);
            func_00172790(temp_s0, 1);
            ADXT_StartSeamless(arg0);
            return;
        }
        /* Duplicate return node #5. Try simplifying control flow for better match */
        func_0015B478((void *)0x3C85F0);
        return;
    }
    func_0015B478((void *)0x3C85F0);
}
