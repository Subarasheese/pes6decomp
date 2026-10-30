/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0015B478(void *);
extern void func_00172790(void *, s32);
M2C_UNK func_0015E910(void *, s32, s32, s32);       /* extern */
M2C_UNK ADXT_StartSeamless(void *);                      /* extern */
M2C_UNK func_001722A0(void *);                      /* extern */
extern char D_003C85B8[];

void func_0015ECA8(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *temp_s0;

    if (arg0 != NULL) {
        if (arg1 != 0) {
            temp_s0 = M2C_FIELD(arg0, void **, 0x94);
            func_001722A0(temp_s0);
            func_0015E910(arg0, arg1, arg2, arg3);
            func_00172790(temp_s0, 1);
            ADXT_StartSeamless(arg0);
            return;
        }
        /* Duplicate return node #4. Try simplifying control flow for better match */
        func_0015B478(((void *)D_003C85B8));
        return;
    }
    func_0015B478(((void *)D_003C85B8));
}
