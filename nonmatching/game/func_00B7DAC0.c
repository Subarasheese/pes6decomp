/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_002B9780(s64, s32, s32, u8 *, u8 *, s8 *, s8 *, char *);
extern char D_00C9A710[];

struct Frame {
    u8 b18;
    s8 b19;
    u8 b1A;
    s8 b1B;
    u8 b1C;
    s8 b1D;
    u8 b1E;
    u8 b1F;
};

void func_00B7DAC0(void) {
    struct Frame f;
    char *var_a7;
    char *var_t0;
    char *var_t1;
    s32 var_t2;
    u8 temp_v0;
    u8 temp_v1;

    f.b1B = 2;
    var_t1 = D_00C9A710;
    f.b19 = 0;
    var_t2 = 0;
    f.b1A = 0;
    var_t0 = D_00C9A710;
    f.b1C = 0xFF;
    var_a7 = D_00C9A710;
    f.b1D = -1;
    do {
        temp_v1 = *(u8 *)(var_t1 + 0x12);
        if (temp_v1 != 0xFF) {
            temp_v0 = *(u8 *)(var_t0 + 0x24);
            if (temp_v0 == 0) {
                f.b1A = temp_v1;
                f.b18 = *(u8 *)(var_t1 + 0x13);
                f.b19 = (s8) *(s32 *)(var_a7 + 8);
                f.b1B = (s8) *(s32 *)(var_t0 + 0x2C);
            } else if (temp_v0 == 1) {
                f.b1C = temp_v1;
            }
        }
        var_t2 += 1;
        var_t1 += 8;
        var_t0 += 0xC;
        var_a7 += 4;
    } while (var_t2 < 2);
    func_002B9780(*(s64 *)&f, 1, 0xFF, &f.b1C, &f.b1A, &f.b1B, &f.b19, var_a7);
}
