/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

M2C_UNK Pes6Heap_Free(s32);                         /* extern */
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0025E130(M2C_UNK, M2C_UNK);            /* extern */
extern char D_0058D280[];

void func_0025F700(void) {
    s32 var_s1;
    u8 *var_s0;

    var_s1 = 0;
    var_s0 = ((void *)D_0058D280);
    do {
        Pes6Heap_Free(M2C_FIELD(var_s0, s32 *, 0));
        Pes6Heap_Free(M2C_FIELD(var_s0, s32 *, 4));
        var_s1 += 1;
        var_s0 += 8;
    } while (var_s1 < 2);
    func_0025E130(0, 0);
    func_001C48E8(((void *)D_0058D280), 0, 0x24);
}
