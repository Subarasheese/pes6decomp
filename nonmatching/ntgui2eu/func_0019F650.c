/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0019F560(void);
M2C_UNK func_0019B140(s32, M2C_UNK);                /* extern */
M2C_UNK func_0019B160(s32);                         /* extern */
extern char D_005CABF0[];
extern char D_01204840[];

M2C_UNK *func_0019F650(void) {
    M2C_UNK *var_s0;
    s32 var_v0;
    void *temp_v1;

    func_0019F560();
    func_0019B160(M2C_FIELD(((void *)D_005CABF0), s32 *, 0));
    var_s0 = ((void *)D_01204840);
    temp_v1 = ((void *)D_01204840) + 0x200;
    if ((u32) ((void *)D_01204840) < (u32) temp_v1) {
        var_v0 = M2C_FIELD(((void *)D_01204840), s32 *, 4);
loop_2:
        if (var_v0 != 0) {
            var_s0 += 0x10;
            if ((u32) var_s0 < (u32) temp_v1) {
                var_v0 = M2C_FIELD(var_s0, s32 *, 4);
                goto loop_2;
            }
            goto block_9;
        }
        M2C_FIELD(var_s0, s32 *, 4) = 0x10000000;
        func_0019B140(M2C_FIELD(((void *)D_005CABF0), s32 *, -0x5410), 0x10000000);
        return var_s0;
    }
block_9:
    func_0019B140(M2C_FIELD(((void *)D_005CABF0), s32 *, -0x5410), 0x10000000);
    return NULL;
}
