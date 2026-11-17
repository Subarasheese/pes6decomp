/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern void func_00B2A6E0(s32, f32 *, u16 *, s32);
extern void func_00B84790(s32, s32, s32, s32, s32, f32);
extern char D_00591E6C[];
extern char D_00591E70[];
extern char D_00591E74[];
extern char D_00CBCC70[];
extern char D_00CBCC90[];
extern char D_00CBCCB0[];
void func_00B84580(s32 *obj, s32 idx, s32 a2) {
    f32 buf[2];
    u16 h;
    f32 s21 = *(f32 *)(*(u8 **)obj + 0xE0);
    u16 s0 = *(u16 *)(*(u8 **)obj + 0x26);
    f32 s20 = *(f32 *)(*(u8 **)obj + 0xE8);
    u8 *p;
    func_00B2A6E0((s32)obj, buf, &h, a2);
    *(f32 *)(*(u8 **)obj + 0xE0) = buf[0];
    *(f32 *)(*(u8 **)obj + 0xE8) = buf[1];
    *(u16 *)(*(u8 **)obj + 0x26) = h;
    p = *(u8 **)obj;
    func_00B84790((s32)obj, *(u16 *)(*(u8 **)(p + 4) + 0x30), *(u16 *)(p + 0x26), *(u8 *)(*(u8 **)(p + 4) + 0x2D), 1, (f32)(idx * 2));
    *(f32 *)(D_00CBCC70 + idx * 4) = *(f32 *)D_00591E6C;
    *(f32 *)(D_00CBCC90 + idx * 4) = *(f32 *)D_00591E70;
    *(f32 *)(D_00CBCCB0 + idx * 4) = *(f32 *)D_00591E74;
    *(f32 *)(*(u8 **)obj + 0xE0) = s21;
    *(f32 *)(*(u8 **)obj + 0xE8) = s20;
    *(u16 *)(*(u8 **)obj + 0x26) = s0;
}
