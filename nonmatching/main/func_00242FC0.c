/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u8 D_003E9E88[2];
extern u16 D_00591BB0[];
extern char D_00591DE1[];
extern char D_00591DE5[];
typedef struct { s8 b[292]; } Tbl;
extern Tbl D_003A9FB0;
void func_00241660(s32 *out, u32 a1, u32 a2, u32 a3);
s32 func_00242C60(s32 a);
s32 func_00241C30(s32 a, s32 b, s32 c, s32 d, s32 e);
void func_001C4730(void *dst, void *src, s32 n);

void func_00242FC0(void) {
    Tbl tbl;
    Tbl tbl2;
    Tbl tbl3;
    u8 k1[4];
    u8 k2[4];
    s32 p[2];
    s32 q[2];
    s32 r[2];
    s32 ta, tb, tc, td, te, tf;
    s32 i;
    s32 s;
    s32 v;
    for (i = 0; i < 2; i++) {
        if (D_003E9E88[i] & 1) {
            func_00241660(&tf, D_00591BB0[i], 0, 1);
            r[i] = func_00242C60(tf);
            func_00241660(&te, D_00591BB0[i], 1, 1);
            q[i] = func_00242C60(te);
        } else {
            func_00241660(&td, D_00591BB0[i], 0, 0);
            r[i] = func_00242C60(td);
            func_00241660(&tc, D_00591BB0[i], 1, 0);
            q[i] = func_00242C60(tc);
        }
        if (D_003E9E88[i] & 2) {
            func_00241660(&tb, D_00591BB0[i], 2, 1);
            p[i] = func_00242C60(tb);
        } else {
            func_00241660(&ta, D_00591BB0[i], 2, 0);
            p[i] = func_00242C60(ta);
        }
    }
    s = r[0];
    v = func_00241C30(s, r[1], q[1], p[1], 1);
    if (v != r[1]) {
        v = func_00241C30(r[1], s, q[0], p[0], 1);
        if (s != v) {
            v = func_00241C30(r[1], q[0], s, p[0], 0);
            s = q[0];
            if (s != v) {
                s = r[0];
                v = func_00241C30(s, r[1], q[1], p[1], 1);
            } else {
                v = r[1];
            }
        } else {
            v = r[1];
        }
    }
    tbl = D_003A9FB0;
    tbl2 = tbl;
    k1[0] = tbl2.b[s * 4];
    k1[1] = tbl2.b[s * 4 + 1];
    k1[2] = tbl2.b[s * 4 + 2];
    k1[3] = tbl2.b[s * 4 + 3];
    tbl3 = tbl;
    k2[0] = tbl3.b[v * 4];
    k2[1] = tbl3.b[v * 4 + 1];
    k2[2] = tbl3.b[v * 4 + 2];
    k2[3] = tbl3.b[v * 4 + 3];
    func_001C4730(D_00591DE1, k1, 4);
    func_001C4730(D_00591DE5, k2, 4);
}
