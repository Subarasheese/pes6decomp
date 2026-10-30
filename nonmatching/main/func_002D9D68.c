/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002DAC08(s32);
extern int sceSifCallRpc(void *, int, unsigned int, void *, int, void *, int, void *, void *);
M2C_UNK func_001051F0(s32, s32);                    /* extern */
M2C_UNK func_002D9D28();                            /* extern */
s32 func_002DAB58(s32 *, M2C_UNK);                  /* extern */
extern char D_005E5F00[];
extern char D_005E5F40[];

s32 func_002D9D68(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v0;

    if (arg0 == NULL) {
        return -0x65;
    }
    temp_v0_2 = func_002DAB58(arg0, 1);
    var_v0 = -1;
    if (temp_v0_2 >= 0) {
        func_002D9D28();
        M2C_FIELD(((void *)D_005E5F40), s32 *, 8) = (s32) *arg0;
        temp_v0 = sceSifCallRpc(((void *)D_005E5F00), 0xB, 0U, ((void *)D_005E5F40), 0x1000, ((void *)D_005E5F40), 0x1000, NULL, NULL);
        if (temp_v0 < 0) {
            func_002DAC08(temp_v0_2);
            return temp_v0;
        }
        func_001051F0(temp_v0_2, arg3);
        var_v0 = temp_v0_2;
        /* Duplicate return node #6. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
