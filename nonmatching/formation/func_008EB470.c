/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7F10(void *);
extern void func_002E4570(void *);
extern void func_001F1EA0(void *);
M2C_UNK func_002DF960(s32);                         /* extern */
M2C_UNK func_008C5D70(void *);                      /* extern */
M2C_UNK func_008EB400(void *);                      /* extern */

void func_008EB470(void *arg0) {
    s32 var_s1;
    void *var_s0;

    func_002DF960(M2C_FIELD(arg0, s32 *, 0x2C));
    var_s1 = 0;
    var_s0 = arg0;
    do {
        func_002E4570(M2C_FIELD(var_s0, void **, 0x34));
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 2);
    func_001F1EA0(M2C_FIELD(arg0, void **, 0x24));
    func_001D7F10(M2C_FIELD(arg0, void **, 0x3C));
    func_008C5D70(arg0 + 4);
    func_008EB400(arg0);
}
