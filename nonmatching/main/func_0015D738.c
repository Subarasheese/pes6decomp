/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0015B478(void *);
extern void func_00159E88(void);
extern int func_00163740(int);
extern void func_00159EA0(void);
extern int func_00163518(int);
M2C_UNK func_0015B8B8(M2C_UNK, M2C_UNK, void *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0015D048(void *);                      /* extern */
extern char D_003C81C8[];
extern char D_003C81F0[];

s32 func_0015D738(void *arg0) {
    s32 temp_a0;
    s8 temp_v1;

    func_0015B8B8(5, 0, arg0, -1, -1);
    if (arg0 == NULL) {
        func_0015B478(((void *)D_003C81C8));
        return -3;
    }
    temp_v1 = M2C_FIELD(arg0, s8 *, 1);
    if (temp_v1 != 1) {
        if (temp_v1 != 3) {
            temp_a0 = M2C_FIELD(arg0, s32 *, 4);
            if (temp_a0 == 0) {
                func_0015B478(((void *)D_003C81F0));
                return -1;
            }
            func_00163740(temp_a0);
            func_00159E88();
            M2C_FIELD(arg0, s32 *, 0x20) = (s32) (func_00163518(M2C_FIELD(arg0, s32 *, 4)) - M2C_FIELD(arg0, s32 *, 0x14));
            func_0015D048(arg0);
            M2C_FIELD(arg0, s8 *, 1) = 1;
            func_00159EA0();
            func_0015B8B8(5, 1, arg0, -1, -1);
            goto block_11;
        }
        M2C_FIELD(arg0, s8 *, 1) = 1;
        goto block_11;
    }
block_11:
    return M2C_FIELD(arg0, s32 *, 0x14);
}
