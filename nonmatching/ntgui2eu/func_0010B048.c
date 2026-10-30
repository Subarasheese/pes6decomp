/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0010CFE0(void);
M2C_UNK func_0010C568();                            /* extern */
M2C_UNK func_0010CF28();                            /* extern */
M2C_UNK func_0010F8DC();                            /* extern */
M2C_UNK func_00114DC4();                            /* extern */
M2C_UNK func_0011500C(s32);                         /* extern */
M2C_UNK func_00115154(s32);                         /* extern */
M2C_UNK func_0019AF30(s32);                         /* extern */
M2C_UNK func_0019AF70(s32);                         /* extern */
extern char D_002BA0A8[];

void func_0010B048(void) {
    s32 temp_a0;
    s32 var_s0;

    if ((*(s32 *)D_002BA0A8) != -1) {
        func_0019AF70((*(s32 *)D_002BA0A8));
        func_0019AF30((*(s32 *)D_002BA0A8));
        (*(s32 *)D_002BA0A8) = -1;
    }
    var_s0 = 0x2BA530;
    do {
        func_00115154(var_s0);
        temp_a0 = var_s0;
        var_s0 += 0xE90;
        func_0011500C(temp_a0);
    } while (var_s0 < 0x2BFC90);
    func_00114DC4();
    func_0010CFE0();
    func_0010CF28();
    func_0010F8DC();
    func_0010C568();
}
