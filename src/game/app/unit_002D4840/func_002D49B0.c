/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern int func_00256140(void);
extern s32 func_00263070(void);
extern void func_002D33D0(s32, s32);
extern void func_0026DA30(s32);
M2C_UNK func_0026E840(s32);                         /* extern */
s32 func_009B45F0();                                /* extern */
s32 func_009B4650();                                /* extern */
M2C_UNK func_00B29C50();                            /* extern */

typedef struct { s32 a; s32 b; s32 c; s32 d; } Q4;
typedef struct { u8 a; u8 b; } B2;

void func_002D49B0(s32 arg0) {
    s32 temp_s0;
    s32 temp_s0_2;
    B2 *temp_v0;

    temp_v0 = (B2 *)func_00256140();
    {
    Q4 sp20 = {0};
    sp20.a = M2C_FIELD(temp_v0, s32 *, 0x57C);
    sp20.b = M2C_FIELD(temp_v0, s32 *, 0x580);
    sp20.c = M2C_FIELD(temp_v0, s32 *, 0x5D4);
    sp20.d = M2C_FIELD(temp_v0, s32 *, 0x5B0);
    if (arg0 != temp_v0->b) {
        temp_v0->b = arg0;
        if (arg0 == 0) {
            func_0026DA30(1);
            func_0026E840(0x82000117);
            func_002D33D0(3, 0x42);
            return;
        }
        func_0026DA30(0);
        temp_s0 = func_00256140();
        if (func_00263070() != 0) {
            func_00B29C50();
        }
        if (((func_009B45F0() == 0) || ((func_009B4650() & 0xFF) != 4)) && (M2C_FIELD(temp_s0, u8 *, 1) != 0)) {
            func_0026E840(M2C_FIELD(temp_s0, s32 *, 0x568));
        }
        temp_s0_2 = func_00256140();
        if (func_00263070() != 0) {
            func_00B29C50();
        }
        if (((func_009B45F0() == 0) || ((func_009B4650() & 0xFF) != 4)) && (M2C_FIELD(temp_s0_2, u8 *, 1) != 0)) {
            func_0026E840(M2C_FIELD(temp_s0_2, s32 *, 0x56C));
        }
    }
    }
}
