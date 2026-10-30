/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7F10(void *);
extern void func_001F1EA0(void *);
M2C_UNK func_002DC1D0(s32);                         /* extern */
M2C_UNK func_002DF960(s32);                         /* extern */
M2C_UNK func_008D4D10(void *);                      /* extern */

void func_008D4D50(void *arg0) {
    s32 var_s1_2;
    s32 var_s2;
    void *var_s1;
    void *var_s2_2;

    func_002DF960(M2C_FIELD(arg0, s32 *, 0x10));
    func_002DC1D0(M2C_FIELD(arg0, s32 *, 0xC));
    var_s2 = 0;
    var_s1 = arg0;
    do {
        func_001D7F10(M2C_FIELD(var_s1, void **, 0x1C));
        var_s2 += 1;
        var_s1 += 4;
    } while (var_s2 < 2);
    var_s1_2 = 0;
    var_s2_2 = arg0;
    do {
        func_001D7F10(M2C_FIELD(var_s2_2, void **, 0x14));
        var_s1_2 += 1;
        var_s2_2 += 4;
    } while (var_s1_2 < 2);
    func_001F1EA0(M2C_FIELD(arg0, void **, 4));
    func_008D4D10(arg0);
}
