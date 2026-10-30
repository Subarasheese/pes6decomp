/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00182B30(int);
extern void func_001AAF40(void *, signed char);
extern void func_002D86A0(void);
extern void func_00207360(int);
extern void func_001AFD70(int);
extern void func_002727C0(s32);
extern void func_009B4450(u32);
M2C_UNK func_00209A00(s32, M2C_UNK, M2C_UNK);       /* extern */
extern char Pes6MatchPlayers[];
extern char D_00591DB4[];
extern char D_00591DCF[];
extern char D_00591F14[];
extern char D_00CCD964[];
extern char D_00CCD971[];

void func_00C94FE0(void) {
    s32 temp_a0;
    s32 var_a0;
    s32 var_s0;
    void *temp_s1;

    (*(s8 *)D_00591DCF) = 1;
    func_009B4450(0U);
    (*(s8 *)D_00591DB4) = 0;
    (*(s8 *)D_00591F14) = 0;
    func_00182B30(1);
    if ((*(s32 *)D_00CCD964) == 0) {
        func_002727C0(9);
        func_002D86A0();
    } else {
        (*(s8 *)D_00CCD971) = *(u8 *)0xCCD971 | 1;
    }
    var_s0 = 0;
    do {
        if (var_s0 == 0xFF) {
            var_a0 = 1;
        } else {
            var_a0 = var_s0 % 23;
        }
        temp_s1 = ((void *)Pes6MatchPlayers) + (var_a0 * 0x240);
        func_00209A00(M2C_FIELD(temp_s1, s32 *, 4), 0, 0);
        func_00207360(M2C_FIELD(temp_s1, s32 *, 4));
        temp_a0 = M2C_FIELD(temp_s1, s32 *, 4);
        if (M2C_FIELD(temp_a0, u8 *, 0x2C) != 0) {
            func_001AAF40(M2C_FIELD(temp_a0, void **, 0), 0);
            func_001AFD70((s32) M2C_FIELD(M2C_FIELD(temp_s1, s32 *, 4), void **, 0));
        }
        var_s0 += 1;
    } while (var_s0 < 0x17);
}
