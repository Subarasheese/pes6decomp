/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void func_001886B0(u8 *, u8 *);
void func_0019E8A0(u8 *);
extern char D_005200D0[];

void func_00189610(void) {
    u8 out[4];
    u8 in[4];

    func_001886B0(&out[3], out);
    *(f32 *)D_005200D0 = (f32) out[3] / 100.0f;
    if (out[0] != 0 || out[1] != 0 || out[2] != 0) {
        in[3] = 0x80;
        in[0] = out[0];
        in[1] = out[1];
        in[2] = out[2];
        func_0019E8A0(in);
    }
}
