/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

s32 func_00277220(void *, M2C_UNK);
s32 func_0028F230(s32, void *, u8, s32, s32);
s32 func_009A0270();
s32 func_00C32010(u8 *, s32);
extern char Pes6MatchSquads[];

void func_00C31960(u8 *arg0, s32 arg1, s32 *arg2, s32 arg3, s32 arg4) {
    s32 i;
    s32 off;
    s32 a4;
    s32 s3;
    s32 a0;
    u8 s7;
    char *sq;
    char *s0;
    char *base0;

    off = 0;
    base0 = Pes6MatchSquads + *arg0 * 0x6900;
    for (i = 0; i < 0x20; i++) {
        sq = base0 + off;
        if ((func_00C32010(arg0, i) != 0) && (*(u8 *)(sq + 0xD4) != 0) && (*(u8 *)(sq + 0x14) == 0)) {
            a4 = *(s32 *)(sq + 0xD8) / (*(s32 *)(sq + 0x18) / 100);
            if (a4 >= 0x3D) {
                a4 = 0x64;
            }
            s0 = Pes6MatchSquads + *arg0 * 0x6900 + off;
            s3 = func_0028F230(arg1, s0 + 0x68, (u8)arg4, arg3, a4);
            a0 = 0;
            if (func_00C32010(arg0, i) != 0) {
                if ((*(u8 *)(s0 + 0xF8) == 0) && (*(u8 *)(s0 + 0xF9) == 0)) {
                    s7 = *(u8 *)(s0 + 0x102);
                    if (((func_009A0270() & 0xFF) - 5) >= (s32)s7) {
                        a0 = func_00277220(s0 + 0xF0, 1);
                    }
                }
            }
            if (a0 == 2) {
                s3 = s3 / 2;
            }
            arg2[i] = s3;
        } else {
            arg2[i] = 0;
        }
        off += 0x348;
    }
}
