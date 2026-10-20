/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001E62E0(s32, M2C_UNK);                /* extern */
M2C_UNK func_001EB320(u64);                         /* extern */
extern s32 D_003E9964;
extern char D_0052B0E8[];

void func_001E5420(void) {
    func_001EB320((u64) ((s64) (*(u8 *)D_0052B0E8) << 0x3A) >> 0x3F);
    func_001E62E0(D_003E9964, 0);
}
