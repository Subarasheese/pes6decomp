/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0019F560(void);
M2C_UNK func_0019B140(s32, M2C_UNK *, void *);      /* extern */
M2C_UNK func_0019B160(s32);                         /* extern */
extern char D_005CABF0[];
extern char D_01204840[];

s32 func_0019F5D0(void) {
    M2C_UNK *var_a1;
    s32 temp_a0;
    s32 var_s0;
    void *temp_v1;

    var_s0 = 0;
    func_0019F560();
    func_0019B160(M2C_FIELD(((void *)D_005CABF0), s32 *, 0));
    var_a1 = ((void *)D_01204840);
    temp_v1 = ((void *)D_01204840) + 0x200;
    if ((u32) ((void *)D_01204840) < (u32) temp_v1) {
        do {
            temp_a0 = M2C_FIELD(var_a1, s32 *, 4);
            var_a1 += 0x10;
            var_s0 = (temp_a0 != 0) ? (var_s0 + 1) : var_s0;
        } while ((u32) var_a1 < (u32) temp_v1);
    }
    func_0019B140(M2C_FIELD(((void *)D_005CABF0), s32 *, -0x5410), var_a1, temp_v1);
    return var_s0;
}
