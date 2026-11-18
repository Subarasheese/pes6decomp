/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u64 x0 : 12;
    u64 x1_hi : 4;
    u64 x2 : 48;
    u8 pad08[0x18];
    u64 x20 : 32;
    u64 x24 : 6;
    u64 x24_hi : 26;
    u8 pad28[0x10];
    u64 x38 : 32;
    u64 team : 9;
    u64 x3D : 5;
    u64 x3E : 18;
} Info;

typedef struct {
    s32 x0, x4, x8, xC, x10, x14, x18;
    u8 pad1C[0x28];
    s32 x44, x48, x4C, x50, x54;
    u8 pad58[0x22];
    u16 x7A;
} Panel;

extern void func_001D7840(s32, s32);
extern void func_001D7D60(s32, s32);
extern u8 func_00221D10(s32, u8, s32);
extern s32 Pes6Team_GetPlayerId(s32, u8, s32);
extern s32 func_0095C390(u16);
extern Info *func_00970870(u16);
extern void func_00973480(s32, s32);
extern void func_009737C0(s32, s32);
extern void func_009737E0(s32, s32, s32);
extern Panel *D_003EA9CC;

void func_009BE770(void) {
    Panel *p = D_003EA9CC;
    u16 id;
    Info *info;
    u8 i;
    u8 num = 0;

    if (p != NULL) {
        func_001D7D60(p->x4, 1);
        func_001D7D60(p->x8, 1);
        func_001D7D60(p->xC, 1);
        func_001D7840(p->x8, 2);
        id = p->x7A;
        info = func_00970870(id);
        func_009737E0(p->x44, 3, info->x24 + 0x94);
        func_009737E0(p->x48, 6, info->x3D + 0xF);
        if (info->team < 0xDD) {
            num = 0xFF;
            for (i = 0; i < 0x20 && num == 0xFF; i++) {
                if (id == (u16)Pes6Team_GetPlayerId(info->team, i, 0))
                    num = func_00221D10(info->team, i, 0) + 1;
            }
        }
        if (num == 0) {
            func_009737C0(p->x50, 0);
        } else {
            func_009737C0(p->x50, 1);
            func_009737E0(p->x50, 0, num);
        }
        func_00973480(p->x18, info->x1_hi);
        func_009737E0(p->x54, 1, func_0095C390(id));
    }
}
