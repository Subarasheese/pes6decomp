/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

void func_001C6158(s32 **, u32, s32, void (*)(void));
extern char D_003FB790[];
extern char D_003FB9AC[];
void func_001331D0(void);

void func_00132AE0(void) {
    s32 *sp20[4];
    s32 **var_a2;
    u8 *ent;
    s32 i;
    u32 cnt;
    s32 t;

    i = 0;
    cnt = 0;
    (*(s32 *)D_003FB9AC) = 0;
    ent = (u8 *)D_003FB790;
    var_a2 = sp20;
    do {
        t = M2C_FIELD(ent, s32 *, 0);
        if ((t == 6) || (t == 5)) {
            if (!(M2C_FIELD(ent, f32 *, 0x1C) <= 0.0f)) {
                *var_a2 = (s32 *)ent;
                cnt += 1;
                var_a2 += 1;
            }
        }
        i += 1;
        ent += 0xB0;
    } while (i < 3);
    if (cnt != 0) {
        func_001C6158(sp20, cnt, 4, func_001331D0);
        if (cnt >= 8U) {
            cnt = 8;
        }
        i = 0;
        (*(s32 *)D_003FB9AC) = (s32) cnt;
        if ((s32) cnt > 0) {
            s32 **src = sp20;
            u8 *dst = (u8 *)D_003FB790;
            do {
                s32 *p = *src;
                s32 k = *p;
                if ((k == 6) || (k == 5)) {
                    M2C_FIELD(dst, s32 **, 0x3B0) = p;
                }
                i += 1;
                src += 1;
                dst += 4;
            } while (i < *(s32 *)D_003FB9AC);
        }
    }
}
