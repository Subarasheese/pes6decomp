/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u16 func_009B4580(void);
extern void func_0017E120(int);
extern void func_002D8420(int, int);
extern u16 func_009B44E0(void);
extern void func_00270580(int);
extern int func_002727B0(void);
extern u16 func_009B4390(void);
M2C_UNK func_002D7B20();                            /* extern */
M2C_UNK func_002D8440(u8, u8);                      /* extern */
M2C_UNK func_009B5D20();                            /* extern */
extern s32 *D_00CCD960;
extern char D_00CCD964[];
extern M2C_UNK (*D_00CCD96C)(u8, s32, s32, s32);
extern char D_00CCD970[];

void func_00C94CA0(void) {
    s32 temp_s0_2;
    s32 temp_s1;
    u8 var_a0;
    u8 var_a1;
    void *temp_s0;

    temp_s0 = *D_00CCD960 + ((*(u8 *)D_00CCD970) * 0xC);
    func_0017E120(1);
    func_009B5D20();
    func_00270580(0);
    if ((func_002727B0() & 0xFF) == 9) {
        if ((*(s32 *)D_00CCD964) == 0) {
            var_a0 = M2C_FIELD(temp_s0, u8 *, 0xA);
            var_a1 = M2C_FIELD(temp_s0, u8 *, 0xB);
        } else {
            var_a0 = 0;
            var_a1 = 0;
        }
        func_002D8440(var_a0, var_a1);
        func_002D8420((s32) M2C_FIELD(temp_s0, u8 *, 8), (s32) M2C_FIELD(temp_s0, u8 *, 9));
        func_002D7B20();
    }
    if (D_00CCD96C != NULL) {
        temp_s1 = func_009B4390() & 0xFFFF;
        temp_s0_2 = func_009B4580() & 0xFFFF;
        D_00CCD96C((*(u8 *)D_00CCD970), temp_s1, temp_s0_2, func_009B44E0() & 0xFFFF);
    }
}
