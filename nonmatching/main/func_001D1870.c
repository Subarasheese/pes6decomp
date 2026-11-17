/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"
extern void func_001038E8(s32 a, s32 b, s64 c);
extern s32 func_001D2F90(s32 a, void **b, s32 *c, f32 *d);
extern s32 func_001D4B30(s32 *a, s32 b);
extern char D_0052AB40[];
extern char D_0052AB38[];
extern char D_0052AB01[];

void func_001D1870(void *arg0, s32 arg1) {
    u16 *s1;
    s32 i, k, mask, st, m0, m1;
    s32 out[16];
    f32 sc[4];
    void *pts[4];
    f32 f1, f2;
    u8 col[8];
    u8 *p;
    s32 *o;
    s32 n;

    s1 = *(u16 **)((u8 *)arg0 + 0xC);
    func_001038E8(arg1, 8, 5);
    func_001038E8(arg1, 0x14, *(s64 *)D_0052AB40);
    func_001038E8(arg1, 6, *(s64 *)D_0052AB38);
    n = 0;
    if (*(u16 *)((u8 *)arg0 + 2) > 0) {
        i = 0;
        do {
            if (s1 != 0) {
                pts[0] = *(u8 **)((u8 *)arg0 + 8) + s1[0] * 0x18;
                pts[1] = *(u8 **)((u8 *)arg0 + 8) + s1[1] * 0x18;
                pts[2] = *(u8 **)((u8 *)arg0 + 8) + s1[2] * 0x18;
                pts[3] = *(u8 **)((u8 *)arg0 + 8) + s1[3] * 0x18;
                s1 += 4;
            } else {
                pts[0] = *(u8 **)((u8 *)arg0 + 8) + i * 0x18;
                pts[1] = *(u8 **)((u8 *)arg0 + 8) + (i + 1) * 0x18;
                pts[2] = *(u8 **)((u8 *)arg0 + 8) + (i + 2) * 0x18;
                pts[3] = *(u8 **)((u8 *)arg0 + 8) + (i + 3) * 0x18;
            }
            if (func_001D2F90(4, pts, out, sc) == 0) {
                st = 0;
            } else if (*(u8 *)D_0052AB01 != 1) {
                st = 3;
            } else {
                st = 0;
                if (func_001D4B30(out, 0) == 1) st |= 1;
                if (func_001D4B30(out + 4, 1) == 1) st |= 2;
            }
            if (st != 0) {
                m0 = st & 1;
                m1 = st & 2;
                for (k = 0; k < 4; k++) {
                    s32 t;
                    u32 a, b;
                    p = (u8 *)pts[k];
                    o = out + k * 4;
                    f2 = sc[k];
                    f1 = *(f32 *)(p + 0x14) * f2;
                    f2 = *(f32 *)(p + 0x10) * f2;
                    a = *(u32 *)&f1;
                    b = *(u32 *)&f2;
                    func_001038E8(arg1, 2, (s64)b | ((s64)a << 32));
                    if ((k == 2 && m0) || (k == 3 && m1)) t = 4; else t = 0xC;
                    col[0] = (p[0xC] == 0xFF) ? 0x80 : (p[0xC] >> 1);
                    col[1] = (p[0xD] == 0xFF) ? 0x80 : (p[0xD] >> 1);
                    col[2] = (p[0xE] == 0xFF) ? 0x80 : (p[0xE] >> 1);
                    col[3] = (p[0xF] == 0xFF) ? 0x80 : (p[0xF] >> 1);
                    f1 = sc[k];
                    *(f32 *)(col + 4) = f1;
                    func_001038E8(arg1, 1, *(s64 *)col);
                    func_001038E8(arg1, t, (s64)o[0] | ((s64)o[1] << 16) | ((s64)o[2] << 32) | ((s64)o[3] << 56));
                }
            }
            n++;
            i += 4;
        } while (n < *(u16 *)((u8 *)arg0 + 2));
    }
}
