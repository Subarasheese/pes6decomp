/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001090D0(s32, s32, s32);
M2C_UNK func_00107678(s32);                         /* extern */
M2C_UNK func_00108450(M2C_UNK);                     /* extern */
M2C_UNK func_00110428(M2C_UNK *);                   /* extern */
M2C_UNK func_00114590(void *, s32);                 /* extern */
M2C_UNK func_00114940(void *, s32);                 /* extern */
extern char D_002CA1C0[];
extern char D_0044A540[];
extern char D_0044A640[];

void func_00109FB0(void) {
    s32 temp_a0;
    s32 var_a1;
    s32 var_s0;
    void *temp_s0;

    var_s0 = 0;
    func_00108450(1);
    var_a1 = 0;
    do {
        var_s0 += 1;
        func_001090D0((s32) ((void *)D_0044A540), var_a1, 0x2BA0C0);
        var_a1 = var_s0;
    } while (var_s0 < 6);
    temp_s0 = (M2C_FIELD((void *)0x2BA0C0, s32 *, 0x5BD0) * 0xE90) + ((void *)0x2BA0C0 + 0x470);
    func_00114940(temp_s0, var_a1);
    func_00114590(temp_s0, M2C_FIELD(temp_s0, s32 *, 0x54));
    if (((void *)D_0044A640) != NULL) {
        func_00110428(((void *)D_0044A640));
    }
    temp_a0 = (s32) M2C_FIELD((void *)0x2BA0C0, u8 *, 0x5C58);
    (*(u8 *)D_002CA1C0) = M2C_FIELD((void *)0x2BA0C0, u8 *, 0x5C58);
    if (temp_a0 == 0) {
        func_00107678(temp_a0);
        M2C_FIELD((void *)0x2BA0C0, M2C_UNK (**)(M2C_UNK, M2C_UNK), 0x5C68)(1, 0);
    }
    M2C_FIELD((void *)0x2BA0C0, s32 *, 0x5C60) = 1;
    M2C_FIELD((void *)0x2BA0C0, s32 *, 0x5C50) = -1;
}
