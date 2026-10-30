/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001034D0(void *, int);
extern int Pes6PacketStream_AppendWord(int, int);
M2C_UNK func_00103538(M2C_UNK *, M2C_UNK);          /* extern */
s64 func_001391A0(s32);                             /* extern */
extern char D_0052AB10[];
extern char D_0052AB30[];

void func_001CECC0(s32 arg0) {
    s32 var_a0;
    s64 temp_v0;

    var_a0 = arg0;
    if (var_a0 == 0) {
        var_a0 = 0x1000;
    }
    temp_v0 = func_001391A0(var_a0);
    (*(s32 *)D_0052AB30) = (s32) temp_v0;
    func_001034D0(((void *)D_0052AB10), ((u64) (temp_v0 << 0x24) >> 0x24) | 0x20000000);
    func_00103538(((void *)D_0052AB10), 0);
    Pes6PacketStream_AppendWord((s32) ((void *)D_0052AB10), 0x13000000);
}
