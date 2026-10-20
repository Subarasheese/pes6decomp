/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
void *func_001FC920(s32);                           /* extern */
M2C_UNK func_001FCEE0(void *, s32);                 /* extern */
extern char D_00533038[];

void func_001FCDE0(void *arg0) {
    s32 temp_s1;
    void *temp_a0;
    void *temp_v0;

    temp_s1 = M2C_FIELD(arg0, s32 *, 0);
    temp_v0 = func_001FC920(M2C_FIELD(((*(s32 *)D_00533038) + (temp_s1 * 8)), s32 *, 4));
    M2C_FIELD(temp_v0, s32 *, 8) = temp_s1;
    M2C_FIELD(temp_v0, s8 *, 0xC) = 2;
    temp_a0 = M2C_FIELD(arg0, void **, 0x44);
    func_001FCEE0(temp_a0, M2C_FIELD(temp_a0, s32 *, 0xC) + M2C_FIELD(temp_a0, s32 *, 0x10) + 0x40);
}
