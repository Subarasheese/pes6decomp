/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7F10(void *);
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_0099A2F0(s32);                         /* extern */
M2C_UNK func_0099D280(s32);                         /* extern */
M2C_UNK func_0099D530(s32);                         /* extern */

void func_009DC190(void *arg0) {
    s32 var_s1;
    s32 var_s2;
    void *temp_s4;

    func_001D7F10(M2C_FIELD(arg0, void **, 0));
    func_001D7F10(M2C_FIELD(arg0, void **, 4));
    func_001D7F10(M2C_FIELD(arg0, void **, 8));
    func_001D7F10(M2C_FIELD(arg0, void **, 0xC));
    var_s2 = 0;
    do {
        func_0099A2F0(M2C_FIELD((arg0 + (var_s2 * 4)), s32 *, 0x10));
        var_s1 = 0;
loop_2:
        temp_s4 = arg0 + (var_s2 * 0x50) + (var_s1 * 0x14);
        func_001D7F10(M2C_FIELD(temp_s4, void **, 0x18));
        func_0099D280(M2C_FIELD(temp_s4, s32 *, 0x1C));
        func_0099D530(M2C_FIELD(temp_s4, s32 *, 0x20));
        func_001C48E8(temp_s4 + 0x18, 0, 0x14);
        var_s1 += 1;
        if (var_s1 < 4) {
            goto loop_2;
        }
        var_s2 += 1;
    } while (var_s2 < 2);
    func_001C48E8(arg0, 0, 0x128);
}
