/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0015B478(void *);
extern int func_001636A8(int);
M2C_UNK func_0015B8B8(M2C_UNK, M2C_UNK, void *, M2C_UNK, M2C_UNK); /* extern */
extern char D_003C8220[];
extern char D_003C8248[];

s32 func_0015D860(void *arg0) {
    s32 temp_a0;
    s8 temp_v1;

    func_0015B8B8(7, 0, arg0, -1, -1);
    if (arg0 == NULL) {
        func_0015B478(((void *)D_003C8220));
        return -3;
    }
    temp_v1 = M2C_FIELD(arg0, s8 *, 1);
    if (temp_v1 != 1) {
        if (temp_v1 != 3) {
            temp_a0 = M2C_FIELD(arg0, s32 *, 4);
            if (temp_a0 == 0) {
                func_0015B478(((void *)D_003C8248));
                return -1;
            }
            func_001636A8(temp_a0);
            M2C_FIELD(arg0, s8 *, 3) = 1;
            func_0015B8B8(7, 1, arg0, -1, -1);
            goto block_11;
        }
        M2C_FIELD(arg0, s8 *, 1) = 1;
        goto block_11;
    }
block_11:
    return M2C_FIELD(arg0, s32 *, 0x14);
}
