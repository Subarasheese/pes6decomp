/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00153FA0(s32);                         /* extern */
M2C_UNK func_001A2650(M2C_UNK, s32, u8);            /* extern */
M2C_UNK func_001CDAD0(s32);                         /* extern */
extern char D_0051FF43[];
extern char D_0051FF44[];

void func_001A25E0(void *arg0) {
    s32 temp_s0;

    temp_s0 = M2C_FIELD(arg0, s32 *, 0x44);
    func_001CDAD0(temp_s0);
    func_001A2650(0, temp_s0, (*(u8 *)D_0051FF43));
    func_001A2650(1, temp_s0, (*(u8 *)D_0051FF44));
    func_00153FA0(M2C_FIELD(arg0, s32 *, 0x44));
}
