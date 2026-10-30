/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_001633E8(int);
extern int func_00163160(int);
M2C_UNK func_0015B8B8(M2C_UNK, M2C_UNK, void *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0015D738(void *);                      /* extern */
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */

void func_0015D0E8(void *arg0) {
    s32 temp_s0;

    func_0015B8B8(3, 0, arg0, -1, -1);
    if (arg0 != NULL) {
        if (M2C_FIELD(arg0, s8 *, 1) == 2) {
            func_0015D738(arg0);
        }
        temp_s0 = M2C_FIELD(arg0, s32 *, 4);
        if (temp_s0 != 0) {
            M2C_FIELD(arg0, s8 *, 0) = 0;
            M2C_FIELD(arg0, s32 *, 4) = 0;
            func_001633E8(temp_s0);
            func_00163160(temp_s0);
        }
        func_001C48E8(arg0, 0, 0x44);
        func_0015B8B8(3, 1, arg0, -1, -1);
    }
}
