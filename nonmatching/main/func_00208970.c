/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern u32 func_00208310(s32);
extern s32 func_002082F0(s32);
extern void func_00207390(void *, s32);
extern s32 func_002082C0(u16);
extern u8 *D_003E74CC;

void func_00208970(u8 *arg0, u16 arg1, f32 fparg0) {
    s32 id;
    s32 cur;
    s32 s0;
    s32 s5, s6, s7, fp, v, a0;
    s32 mode;
    f32 f20;
    f32 f6;
    f32 val;
    u32 u;
    u16 a30;

    id = arg1 & 0xFFFF;
    f20 = fparg0;
    if (*(u16 *)(arg0 + 0x30) == id) {
        return;
    }
    func_00207390(arg0, 3);
    s0 = *(u8 *)(D_003E74CC + id * 4 + 0x2FD8);
    s6 = func_002082F0(*(u16 *)(arg0 + 0x30));
    s7 = func_002082C0(*(u16 *)(arg0 + 0x30));
    fp = s7 - s6;
    s5 = func_002082F0(id);
    v = func_002082C0((u16)id);
    a0 = v - s5;
    mode = 0;
    f6 = 0.0f;
    if (id == 0x40C || id == 0x40B || id == 0x40A || id == 0x409 || id == 0x486 || id == 0x487 || id == 0x408 || id == 0x38C || id == 0x393 || id == 0xBF || id == 0x2B8 || id == 0x2BF || id == 0x2BE || id == 0x2BD || id == 0x2C0 || id == 0x22 || id == 0x23 || id == 0x21 || id == 0x16 || id == 0x17 || id == 0x15 || id == 0xBE || id == 0x14 || id == 0x27 || id == 0x2A || id == 0x232 || id == 0x22B || id == 0x22A || id == 0x28A || id == 0x11 || id == 0xC5 || id == 0xC4 || id == 0xC3 || id == 0xC2 || id == 0xC6 || id == 0xC7 || id == 0xB6 || id == 0x2D || id == 0x2B || id == 0x2B4 || id == 0x26 || id == 0x34 || id == 0x33) {
        cur = *(u16 *)(arg0 + 0x30);
        if (cur == 0x40C || cur == 0x40B || cur == 0x40A || cur == 0x409 || cur == 0x486 || cur == 0x487 || cur == 0x408 || cur == 0x38C || cur == 0x393 || cur == 0xBF || cur == 0x2B8 || cur == 0x2BF || cur == 0x2BE || cur == 0x2BD || cur == 0x2C0 || cur == 0x22 || cur == 0x23 || cur == 0x21 || cur == 0x16 || cur == 0x17 || cur == 0x15 || cur == 0xBE || cur == 0x14 || cur == 0x27 || cur == 0x2A || cur == 0x232 || cur == 0x22B || cur == 0x22A || cur == 0x28A || cur == 0x11 || cur == 0xC5 || cur == 0xC4 || cur == 0xC3 || cur == 0xC2 || cur == 0xC6 || cur == 0xC7 || cur == 0xB6 || cur == 0x2D || cur == 0x2B || cur == 0x2B4 || cur == 0x26 || cur == 0x34 || cur == 0x33) {
            f6 = (f32)s6;
            if (f20 < f6) {
                mode = 1;
            } else if (f20 <= (f32)s7) {
                mode = 3;
            } else {
                mode = 2;
            }
        } else {
            mode = 4;
        }
    } else {
        mode = 4;
    }
    if (mode == 3) {
        f20 = (((f32)a0 * ((100.0f * (*(f32 *)(arg0 + 0x38) - f6)) / (f32)fp)) / 100.0f) + (0.5f + (f32)s5);
        if (!(f20 < (f32)s0)) {
            f20 = (f20 - (f32)s0) + (f32)s5;
        }
        val = 0.0f;
    } else if (mode == 1) {
        val = (f32)(u32)(u16)s5;
    } else if (mode == 2) {
        val = (f32)(u32)(u16)v;
    } else {
        u = (u32)(f32)s5;
        val = (f32)(u32)(u16)u;
    }
    if (*(u16 *)(arg0 + 0x30) != id) {
        *(s8 *)(arg0 + 0x50) = 1;
    }
    *(f32 *)(arg0 + 0x28) = *(f32 *)D_003E74CC;
    *(u16 *)(arg0 + 0x30) = arg1;
    *(f32 *)(arg0 + 0x38) = val;
    *(s16 *)(arg0 + 0x34) = 0;
    *(u32 *)(arg0 + 4) = func_00208310(arg1 & 0xFFFF);
    a30 = *(u16 *)(arg0 + 0x30);
    if (a30 < 0x59A || *(s32 *)(D_003E74CC + id * 4 + 0x178C) != 0) {
        f6 = *(f32 *)(arg0 + 0x38);
        if (!(f6 <= (f32)*(s32 *)(D_003E74CC + a30 * 4 + 0x2FD8)) || f6 < 0.0f) {
            *(f32 *)(arg0 + 0x38) = 0.0f;
        }
        if (mode == 3) {
            *(f32 *)(arg0 + 0x38) = f20;
        }
    } else if (mode == 3) {
        *(f32 *)(arg0 + 0x38) = f20;
    }
}
