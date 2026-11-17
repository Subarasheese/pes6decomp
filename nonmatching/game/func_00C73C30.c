/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern void func_001F6E40(s32, u8 *, u32, s32);
extern void func_001EEF60(s32, u8 *);
extern char D_00CA86C8[];
extern char D_00CA86CC[];
extern s32 D_003EA820;
extern char D_00CCCE30[];
extern char D_00CCBD30[];

void func_00C73C30(s32 a0) {
    f32 tbl[2];
    u8 buf[16];
    f32 scale;
    s32 *s0;
    s32 s1;
    s32 i, j;
    scale = (f32)a0 / 255.0f;
    tbl[0] = *(f32 *)D_00CA86C8;
    tbl[1] = *(f32 *)D_00CA86CC;
    s1 = *(s32 *)(D_00CCBD30 + D_003EA820 * 80);
    s0 = (s32 *)(D_00CCCE30 + ((s32 *)tbl)[D_003EA820] * 4 + 0x1C);
    for (i = 0; i < 3; i++) {
        func_001F6E40(s1, buf, (u16)(i + 6), 0);
        for (j = 0; j < 4; j++) buf[j * 4 + 3] = (u8)(u32)(scale * (f32)(u32)buf[j * 4 + 3]);
        func_001EEF60(*s0, buf);
        s0++;
    }
}
