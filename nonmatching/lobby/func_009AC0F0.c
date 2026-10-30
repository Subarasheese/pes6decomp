/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D4E00(void *);
extern void func_001D7F10(void *);
M2C_UNK func_002DF960(s32);                         /* extern */
M2C_UNK func_002E33D0(s32);                         /* extern */
M2C_UNK func_002ED130(s32);                         /* extern */
M2C_UNK func_008CA7A0(s32);                         /* extern */

void func_009AC0F0(void *arg0) {
    s32 var_s1;
    void *temp_a0;
    void *var_s0;

    func_002ED130(M2C_FIELD(arg0, s32 *, 4));
    func_008CA7A0(M2C_FIELD(arg0, s32 *, 8));
    func_001D7F10(M2C_FIELD(arg0, void **, 0x1C));
    func_001D7F10(M2C_FIELD(arg0, void **, 0xC));
    func_002E33D0(M2C_FIELD(arg0, s32 *, 0x18));
    var_s1 = 0;
    var_s0 = arg0;
    do {
        func_002E33D0(M2C_FIELD(var_s0, s32 *, 0x44));
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 3);
    func_002DF960(M2C_FIELD(arg0, s32 *, 0x50));
    func_002DF960(M2C_FIELD(arg0, s32 *, 0x58));
    func_002DF960(M2C_FIELD(arg0, s32 *, 0x54));
    temp_a0 = M2C_FIELD(arg0, void **, 0);
    if (temp_a0 != NULL) {
        func_001D4E00(temp_a0);
        M2C_FIELD(arg0, void **, 0) = NULL;
    }
}
