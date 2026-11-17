/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_003AB178[];
extern char D_003AB17C[];
extern char D_003AB180[];
extern char D_003AB158[];
extern char D_003AB168[];
extern char D_0058D460[];
extern char D_0058D488[];
extern char D_0058D48C[];
s32 func_00267110(s32, s32, s32);
s32 func_001454C0(s32);
void func_001509A0(s32, s32, s32, s32, s32);
void func_0014FC20(s32, s32, s32, s32, s32);

void func_00266ED0(s32 a, s32 b, s32 c) {
    f32 t[3];
    s32 q;
    s32 i;
    s32 r;
    t[0] = *(f32 *)D_003AB178;
    t[1] = *(f32 *)D_003AB17C;
    t[2] = *(f32 *)D_003AB180;
    q = func_00267110(b, c, 0);
    D_003AB158[0] = ((s32 *)t)[*(s32 *)D_0058D488];
    D_003AB158[1] = ((s32 *)t)[*(s32 *)D_0058D48C];
    for (i = 0; i < 10; i++) {
        if (*(s32 *)(D_0058D460 + 0xD4 + i * 4) != 0 && *(u8 *)(D_0058D460 + 0xC8 + i) != 0) {
            r = func_001454C0(*(s32 *)(D_0058D460 + 0xD4 + i * 4));
            if (r != 0) {
                func_001509A0(q, *(u8 *)(D_003AB168 + i), r, 0, *(u8 *)(D_003AB158 + i));
                func_0014FC20(q, q, (s32)(D_0058D460 + i * 16 + (b + a * 2) * 4 + 0x124), *(u8 *)(D_003AB168 + i), *(u8 *)(D_003AB158 + i));
            }
        }
    }
    q = func_00267110(b, c, 1);
    for (i = 0; i < 10; i++) {
        if (*(s32 *)(D_0058D460 + 0xD4 + i * 4) != 0 && *(u8 *)(D_0058D460 + 0xC8 + i) != 0) {
            r = func_001454C0(*(s32 *)(D_0058D460 + 0xD4 + i * 4));
            if (r != 0) {
                func_001509A0(q, *(u8 *)(D_003AB168 + i), r, 0, *(u8 *)(D_003AB158 + i));
                func_0014FC20(q, q, (s32)(D_0058D460 + i * 16 + (b + a * 2) * 4 + 0x124), *(u8 *)(D_003AB168 + i), *(u8 *)(D_003AB158 + i));
            }
        }
    }
}
