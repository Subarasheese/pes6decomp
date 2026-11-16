/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_00270500(char *);
M2C_UNK func_00270530(char *, f32 *);
M2C_UNK func_009A6DC0(f32, f32, f32);
M2C_UNK func_009A7000(s32, f32, f32, f32);
s32 func_009A70B0(s32, f32, f32);
M2C_UNK func_00A08ED0(char *, s32, f32 *);
extern f32 D_00C9A5A0[];

void func_00ACBF70(char *arg0) {
    f32 spA0[4];
    f32 sp90[4];
    f32 sp80[4];
    f32 sp70[4];
    s32 temp_s4;
    s32 i;
    s32 *p;
    u16 temp_a1;

    temp_a1 = M2C_FIELD(M2C_FIELD(arg0, char **, 4), u16 *, 0x30);
    sp80[0] = D_00C9A5A0[0];
    sp80[1] = D_00C9A5A0[1];
    sp80[2] = D_00C9A5A0[2];
    sp80[3] = D_00C9A5A0[3];
    sp70[0] = D_00C9A5A0[4];
    sp70[1] = D_00C9A5A0[5];
    sp70[2] = D_00C9A5A0[6];
    sp70[3] = D_00C9A5A0[7];
    if (temp_a1 == 0x123 || temp_a1 == 0x24E) {
        p = (s32 *)sp70;
        for (i = 0; i < 4; i++, p++) {
            func_00A08ED0(arg0, *p, spA0);
            func_009A6DC0(spA0[0], spA0[1], spA0[2]);
        }
        return;
    }
    if (temp_a1 == 0x2C6) {
        func_00270530(arg0, sp90);
        temp_s4 = func_009A70B0(func_00270500(arg0), sp90[0], sp90[2]);
        p = (s32 *)sp80;
        for (i = 0; i < 4; i++, p++) {
            func_00A08ED0(arg0, *p, spA0);
            func_009A7000(temp_s4, spA0[0], spA0[1], spA0[2]);
        }
    }
}
