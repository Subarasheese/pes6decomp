/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00CCCE30[];
extern char D_00CCBD30[];
extern char D_00CA8608[];
extern char D_00CA860C[];
extern s32 D_003EA820;
void func_001F6E40(s32, u8 *, s32, s32);
void func_001EEF60(s32, u8 *);

void func_00C74270(s32 a0) {
    f32 tbl[2];
    u8 col[16];
    f32 scale;
    s32 i;
    s32 *p;
    s32 obj;
    s32 k;
    tbl[0] = *(f32 *)D_00CA8608;
    tbl[1] = *(f32 *)D_00CA860C;
    scale = (f32)a0 / 255.0f;
    obj = *(s32 *)(D_00CCBD30 + D_003EA820 * 80);
    p = (s32 *)(D_00CCCE30 + ((s32 *)tbl)[D_003EA820] * 4 + 0x1C);
    for (i = 0; i < 6; i++) {
        func_001F6E40(obj, col, i & 0xFFFF, 0);
        for (k = 3; k < 16; k += 4) {
            col[k] = (u8)(u32)(scale * (f32)col[k]);
        }
        func_001EEF60(*p, col);
        p++;
    }
}
