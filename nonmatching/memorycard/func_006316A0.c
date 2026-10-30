/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D80(void *, s16);
extern char D_0065C2B0[];
extern char D_0065C2C0[];

void func_006316A0(void *arg0) {
    s64 temp_s2;
    s64 var_s0;

    var_s0 = 3;
    if ((*(u8 *)D_0065C2C0) != 3) {
        if ((*(u8 *)D_0065C2C0) != 1) {
            var_s0 = 2;
            if ((*(u8 *)D_0065C2C0) != 2) {
                var_s0 = 0;
            }
        }
    } else {
        var_s0 = 1;
    }
    temp_s2 = M2C_FIELD(((void *)D_0065C2B0), u8 *, 0x10) != 0;
    func_001D7D80(M2C_FIELD(arg0, void **, 0x18), (s16) ((s64) (var_s0 << 0x30) >> 0x30));
    func_001D7D80(M2C_FIELD(arg0, void **, 0x1C), (s16) ((s64) (var_s0 << 0x30) >> 0x30));
    func_001D7D80(M2C_FIELD(arg0, void **, 0), (s16) ((s64) (var_s0 << 0x30) >> 0x30));
    func_001D7D80(M2C_FIELD(arg0, void **, 0xC), (s16) ((s64) (temp_s2 << 0x30) >> 0x30));
    func_001D7D80(M2C_FIELD(arg0, void **, 8), (s16) ((s64) (temp_s2 << 0x30) >> 0x30));
}
