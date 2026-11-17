/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_003AB6D0[];
extern char D_003AB720[];
void func_00274CE0(void *, s32);

void func_002733F0(u8 *p) {
    s16 ta1[36];
    f32 tf1[31];
    s16 ta2[36];
    f32 tf2[31];
    s32 i;
    u32 v, c;
    for (i = 0; i < 36; i++) ta1[i] = ((s16 *)D_003AB6D0)[i];
    for (i = 0; i < 31; i++) tf1[i] = ((f32 *)D_003AB720)[i];
    v = (u16)(u32)(tf1[p[0]] * (f32)(u16)ta1[p[1] * 6 + p[2]]);
    if (v == 0) c = 0;
    else if (v < 0x15) c = 1;
    else c = 2;
    while (c >= 2) {
        if (p[2] < 4) func_00274CE0(p, 0);
        else p[2] = p[2] - 1;
        for (i = 0; i < 36; i++) ta2[i] = ((s16 *)D_003AB6D0)[i];
        for (i = 0; i < 31; i++) tf2[i] = ((f32 *)D_003AB720)[i];
        v = (u16)(u32)(tf2[p[0]] * (f32)(u16)ta2[p[1] * 6 + p[2]]);
        if (v == 0) c = 0;
        else if (v < 0x15) c = 1;
        else c = 2;
    }
}
