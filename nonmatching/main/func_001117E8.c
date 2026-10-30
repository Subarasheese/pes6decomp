/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int EIntr(void);
extern int sceSifCallRpc(void *, int, unsigned int, void *, int, void *, int, void *, void *);
M2C_UNK func_001084A8(M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
s32 DIntr();                                /* extern */
extern char D_003729DC[];
extern char D_003F3200[];
extern char D_003F3250[];
extern M2C_UNK func_001117A0;

s32 func_001117E8(void) {
    s32 temp_s0;
    s32 var_v1;
    void *var_v0;

    var_v0 = ((void *)D_003F3250) + 0x84;
    var_v1 = 3;
    do {
        M2C_FIELD(var_v0, s32 *, -0x74) = 0;
        var_v1 -= 1;
        M2C_FIELD(var_v0, s32 *, -0x6C) = 0;
        M2C_FIELD(var_v0, s32 *, -0x70) = 0;
        M2C_FIELD(var_v0, s32 *, -4) = 0;
        M2C_FIELD(var_v0, s32 *, 4) = 0;
        M2C_FIELD(var_v0, s32 *, 0) = 0;
        var_v0 += 0x1C;
    } while (var_v1 >= 0);
    M2C_FIELD((void *)0x3F3440, s32 *, 0x10) = 0;
    M2C_FIELD((void *)0x3F3440, s32 *, 0) = 0x10;
    M2C_FIELD((void *)0x3F3440, s32 *, 0x14) = (s32) (*(s32 *)D_003729DC);
    if (sceSifCallRpc(((void *)D_003F3200), 1, 0U, (void *)0x3F3440, 0x80, (void *)0x3F3440, 0x80, NULL, NULL) < 0) {
        return 0;
    }
    *(s32 *)0x3729D8 = 0;
    temp_s0 = DIntr();
    func_001084A8(0x80000019, &func_001117A0, 0);
    if (temp_s0 == 1) {
        EIntr();
    }
    return M2C_FIELD((void *)0x3F3440, s32 *, 0xC);
}
