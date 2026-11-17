/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

void func_001C48E8(void *, s32, s32);
extern char D_003FAE50[];
extern void *D_003FAE54;
extern s32 D_003E9780;

void func_00120D00(s32 arg0) {
    void *n;

    if (arg0 != 0) {
        n = D_003FAE54;
        while (M2C_FIELD(n, s32 *, 8) != arg0) {
            n = M2C_FIELD(n, void **, 4);
            if (n == (void *)D_003FAE50) {
                break;
            }
        }
        if (n != (void *)D_003FAE50) {
            M2C_FIELD(M2C_FIELD(n, void **, 0), void **, 4) = M2C_FIELD(n, void **, 4);
            M2C_FIELD(M2C_FIELD(n, void **, 4), void **, 0) = M2C_FIELD(n, void **, 0);
            func_001C48E8(n, 0, 0x10);
            D_003E9780 -= 1;
        }
    }
}
