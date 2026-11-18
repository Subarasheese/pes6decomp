/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x5C4];
    u8 x5C4, x5C5, x5C6, x5C7;
    u8 pad5C8[4];
    s16 x5CC;
    u8 pad5CE[2];
    u8 x5D0;
    u8 pad5D1[3];
    s16 x5D4;
    u8 pad5D6[0xE];
    s32 x5E4;
    s32 x5E8;
    u8 pad5EC[0x29A50 - 0x5EC];
    u8 x29A50;
    u8 pad29A51[0x29DF0 - 0x29A51];
    s32 x29DF0;
    u8 pad29DF4[0x29F98 - 0x29DF4];
    s32 x29F98;
    u8 x29F9C;
} Cup;

extern void SD_call(s32);
extern void func_00AF81F0(void);
extern void func_00AF84F0(void);
extern void func_00AF8E60(void);
extern void func_00AF9010(void);
extern void func_00AF91C0(void);
extern void func_00AF99A0(u8, s32, u16, s32);
extern void func_00AFAF60(void);
extern void func_00AFDFC0(s32);
extern s32 func_00B013F0(u8, u8);
extern void func_00B01470(u8);
extern Cup *func_00B035D0(void);

s32 func_00AFDB80(void) {
    Cup *c = func_00B035D0();
    s32 st;

    if (c == NULL)
        return 0;
    st = c->x5E4;
    if (st == 5)
        return 0;
    if (c->x29F9C == 1)
        return 0;
    if (st == 7)
        return 0;
    if (st == 6 && c->x29F98 == 1)
        return 0;
    if (st == 3 || st == 4) {
        func_00AFDFC0(-1);
        return 0;
    }
    if (c->x5CC != 0)
        return 0;
    if (c->x5C4 == 0)
        c->x5C4 = c->x29A50 - 1;
    else
        c->x5C4 = c->x5C4 - 1;
    SD_call(0x8400F803);
    func_00AFAF60();
    func_00B01470(c->x5C4);
    func_00AF99A0(c->x5C5, (u16)func_00B013F0(c->x5C4, c->x5C7 + c->x5D0), c->x5D4, c->x5E8);
    func_00AF9010();
    func_00AF8E60();
    if (c->x29DF0 == 0)
        func_00AF84F0();
    else
        func_00AF81F0();
    func_00AF91C0();
    if (c->x29F98 == 2 && c->x5C4 == 0)
        c->x29F98 = 0;
    return 0;
}
