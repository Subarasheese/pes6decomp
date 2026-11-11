/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void *Pes6Heap_Alloc(M2C_UNK, M2C_UNK);              /* extern */
M2C_UNK func_001F77A0(s32, void *);                 /* extern */
M2C_UNK func_001F7F50(void *);                      /* extern */

void *func_001F70D0(s32 arg0) {
    void *temp_v0;
    void *var_s0;

    if (arg0 == 0) goto null;
    temp_v0 = Pes6Heap_Alloc(1, 0x1C);
    var_s0 = temp_v0;
    M2C_FIELD(temp_v0, s32 *, 0x18) = arg0;
    func_001F7F50(var_s0);
    func_001F77A0(arg0, var_s0);
ret:
    return var_s0;
null:
    var_s0 = NULL;
    goto ret;
}
