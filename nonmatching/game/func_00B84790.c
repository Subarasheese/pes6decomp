/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 D_003E74CC;
extern char D_00375B30[];
extern char D_00591E6C[];
extern char D_00591E70[];
extern char D_00591E74[];
void func_00103B88(void *, void *, void *);
void func_001040A0(void *, void *, f32);
s16 *func_00B82690(s32, s32, s16 *);

void func_00B84790(s32 *a0, s32 a1, s32 a2, s32 a3, s32 a4, f32 fa12) {
    f32 buf[28];
    s16 idx;
    s32 t, h, n;
    f32 f, c, m;
    s16 *p, *q;

    idx = 0;
    t = (s32)fa12;
    h = t / 2;
    p = func_00B82690(a1, h, &idx);
    f = (fa12 - (f32)(h << 1)) / 2.0f;
    if (f < 0.0f) {
        f = 0.0f;
    } else if (!(f <= 1.0f)) {
        f = 1.0f;
    }
    n = t + 2;
    if (n < *(s32 *)(D_003E74CC + (u16)a1 * 4 + 0x2FD8) && 0.0f != f) {
        q = func_00B82690(a1, n / 2, &idx);
        if (a3 != 0) {
            buf[16] = -((f32)q[0] * f + (f32)p[0] * (1.0f - f));
        } else {
            buf[16] = (f32)q[0] * f + (f32)p[0] * (1.0f - f);
        }
        buf[17] = -((f32)q[1] * f + (f32)p[1] * (1.0f - f));
        buf[18] = -((f32)q[2] * f + (f32)p[2] * (1.0f - f));
    } else {
        if (a3 != 0) {
            buf[16] = (f32)(-p[0]);
        } else {
            buf[16] = (f32)p[0];
        }
        buf[17] = (f32)(-p[1]);
        buf[18] = (f32)(-p[2]);
    }
    func_001040A0(buf, D_00375B30, -(9.58738019e-5f * (f32)(s16)((u16)a2 + 0x4000)));
    c = 0.2f;
    {
        f32 *b = (f32 *)*a0;
        buf[16] = c * -buf[16];
        buf[19] = 1.0f;
        buf[23] = 1.0f;
        buf[12] = c * -b[0x38];
        buf[13] = c * -b[0x39];
        buf[14] = c * b[0x3A];
        buf[17] = buf[17] * c;
        buf[18] = buf[18] * c;
        buf[8] = buf[12];
        buf[9] = buf[13];
        buf[10] = buf[14];
        buf[11] = 1.0f;
        buf[15] = 1.0f;
    }
    if (a4 != 0) {
        m = 8.0f * *(f32 *)(**(s32 **)(*a0 + 4) + 0x8C + (idx << 4));
        buf[16] = buf[16] * m;
        buf[17] = buf[17] * m;
        buf[18] = buf[18] * m;
    }
    buf[19] = 1.0f;
    func_00103B88(&buf[24], buf, &buf[16]);
    *(f32 *)(D_00591E74) = 5.0f * buf[26];
    *(f32 *)D_00591E6C = 5.0f * -buf[24];
    *(f32 *)(D_00591E70) = -(5.0f * buf[25]);
}
