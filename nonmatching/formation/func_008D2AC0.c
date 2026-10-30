/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7F10(void *);
extern void func_001B9C60(void *);
extern void func_001F1EA0(void *);
M2C_UNK func_002DC1D0(s32);                         /* extern */
M2C_UNK func_002DF960(s32);                         /* extern */
M2C_UNK func_008C5D70(void *);                      /* extern */
M2C_UNK func_008D02E0(void *);                      /* extern */
M2C_UNK func_008D2950(void *);                      /* extern */

void func_008D2AC0(void *arg0) {
    s32 var_s1;
    void *temp_a0;
    void *var_s0;

    func_002DC1D0(M2C_FIELD(arg0, s32 *, 0x1D4));
    func_002DF960(M2C_FIELD(arg0, s32 *, 0x1D8));
    func_008D02E0(arg0);
    temp_a0 = M2C_FIELD(arg0, void **, 0x1E0);
    if (temp_a0 != NULL) {
        func_001B9C60(temp_a0);
    }
    func_001F1EA0(M2C_FIELD(arg0, void **, 0x3C));
    func_008C5D70(arg0 + 0x214);
    func_001D7F10(M2C_FIELD(arg0, void **, 0x1E4));
    func_001D7F10(M2C_FIELD(arg0, void **, 0x1E8));
    func_001D7F10(M2C_FIELD(arg0, void **, 0x1EC));
    func_001D7F10(M2C_FIELD(arg0, void **, 0x1F0));
    func_001D7F10(M2C_FIELD(arg0, void **, 0x1F4));
    func_001D7F10(M2C_FIELD(arg0, void **, 0x1F8));
    func_001D7F10(M2C_FIELD(arg0, void **, 0x1FC));
    func_001D7F10(M2C_FIELD(arg0, void **, 0x200));
    func_001D7F10(M2C_FIELD(arg0, void **, 0x204));
    func_001D7F10(M2C_FIELD(arg0, void **, 0x208));
    var_s1 = 0;
    var_s0 = arg0;
    do {
        func_001D7F10(M2C_FIELD(var_s0, void **, 0x20C));
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 2);
    func_008D2950(arg0);
}
