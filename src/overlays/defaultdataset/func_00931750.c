/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
typedef struct { u8 b[4]; } S4;
typedef struct {
    u8 pad0[0x36];
    u16 id;
    u8 b38;
    u8 pad39[3];
    s32 w3C;
    s32 w40;
    u8 b44;
    u8 b45;
    u8 pad46[2];
    S4 c48;
    S4 c4C;
    u8 b50;
    u8 b51;
    u8 b52;
    u8 b53;
    u8 pad54[4];
} Ent;
typedef struct { u8 pad[0xC]; s16 v; u8 pad2[2]; } Row;
extern void func_001C48E8(void *, s32, s32);
extern void *func_0021E4C0(s32, s32, s32, s32);
extern void func_001C7F58(void *, void *);
extern s32 func_002D7930(s32);
extern S4 *func_0021F500(s32);
extern u8 func_0021EB50(s32, s32);
extern u8 func_0021EE40(s32, s32);
extern void func_001C4730(s32, void *, s32);
extern Ent D_009E0AD0[];
extern char D_009F6040[];
extern char D_00530C78[];
extern char D_00530C7C[];
extern Row D_003DF3A0[];
extern S4 D_003E7BBC;

void func_00931750(void) {
    s32 id;
    s32 i;
    Ent *p;
    S4 *src;
    for (i = 0, p = D_009E0AD0; i < 0x8C; i++, p++) {
        id = (u16)(i + 0x40);
        func_001C48E8(p, 0, 0x58);
        func_001C7F58(p, func_0021E4C0(id, 0, 1, 0xFFFF));
        func_001C7F58((u8 *)p + 0x31, func_0021E4C0(id, 1, 1, 0xFFFF));
        p->id = id;
        p->b38 = 0;
        p->w40 = D_003DF3A0[(u16)id].v + 0x73;
        p->w3C = p->w40;
        p->b44 = 0;
        p->b45 = 0;
        if (func_002D7930(id) == 1) {
            src = func_0021F500(id);
        } else {
            src = &D_003E7BBC;
        }
        p->c4C = *src;
        p->c48 = p->c4C;
        p->b50 = func_0021EB50(id, 1);
        p->b51 = func_0021EE40(id, 1);
        p->b53 = 0;
        p->b52 = 0;
    }
    func_001C4730(*(s32 *)D_00530C78, D_009E0AD0, 0x3020);
    func_001C4730(*(s32 *)D_00530C7C, D_009F6040, 0x203C);
}
