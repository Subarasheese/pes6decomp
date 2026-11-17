/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern void func_001038E8(void *a, s32 b, u64 c);
extern s32 func_001D2F90(s32 a, void *b, void *c, void *d);
extern s32 func_001D4B30(void *a, s32 b);
extern char D_0052AB40[];
extern char D_0052AB38[];
extern char D_0052AB01[];

void func_001D1CB0(u8 *self, void *out)
{
    u16 *idx = *(u16 **)(self + 0xC);
    s32 i, k, j;
    s32 n;
    u8 *vp[3];
    u8 buf[0x30];
    f32 sc[3];
    u8 col[8];
    s32 flag;

    func_001038E8(out, 8, 5);
    func_001038E8(out, 0x14, *(u64 *)D_0052AB40);
    func_001038E8(out, 6, *(u64 *)D_0052AB38);

    i = 0;
    if (*(u16 *)(self + 2) > 0) {
        k = 0;
        do {
            if (idx != 0) {
                vp[0] = *(u8 **)(self + 8) + idx[0] * 24;
                vp[1] = *(u8 **)(self + 8) + idx[1] * 24;
                vp[2] = *(u8 **)(self + 8) + idx[2] * 24;
                idx += 3;
            } else {
                vp[0] = *(u8 **)(self + 8) + k * 24;
                vp[1] = *(u8 **)(self + 8) + (k + 1) * 24;
                vp[2] = *(u8 **)(self + 8) + (k + 2) * 24;
            }
            if (func_001D2F90(3, vp, buf, sc) == 0) {
                flag = 0;
            } else if (*(u8 *)D_0052AB01 == 1) {
                flag = 0;
                if (func_001D4B30(buf, 0) == 1)
                    flag |= 1;
            } else {
                flag = 3;
            }
            if (flag != 0) {
                for (j = 0; j < 3; j++) {
                    u8 *v = vp[j];
                    f32 f = sc[j];
                    f32 a = *(f32 *)(v + 0x14) * f;
                    f32 b = *(f32 *)(v + 0x10) * f;
                    func_001038E8(out, 2, ((u64)*(u32 *)&a << 32) | *(u32 *)&b);
                    col[0] = v[0xC] == 0xFF ? 0x80 : v[0xC] >> 1;
                    col[1] = v[0xD] == 0xFF ? 0x80 : v[0xD] >> 1;
                    col[2] = v[0xE] == 0xFF ? 0x80 : v[0xE] >> 1;
                    col[3] = v[0xF] == 0xFF ? 0x80 : v[0xF] >> 1;
                    *(f32 *)(col + 4) = f;
                    func_001038E8(out, 1, *(u64 *)col);
                    {
                        s32 *w = (s32 *)(buf + j * 0x10);
                        func_001038E8(out, 4, (s64)w[0] | ((s64)w[1] << 16) | ((s64)w[2] << 32) | ((s64)w[3] << 56));
                    }
                }
            }
            i++;
            k += 3;
        } while (i < *(u16 *)(self + 2));
    }
}
