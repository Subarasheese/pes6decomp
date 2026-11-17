/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_00305E60(void *, void (*)(void));
extern s32 func_00992220(u8 *);
extern char Pes6MatchPlayers[];
extern char D_00CB5F28[];
extern void func_003032A0(void);

s32 func_00303500(void *arg0) {
    s32 idx;
    u8 *p;
    u8 v;
    u8 *obj;
    u32 g;

    obj = *(u8 **)((char *)arg0 + 0x18);
    g = *(u8 *)D_00CB5F28;
    if (g == 0) {
        v = 0;
    } else {
        if (g == 0xFF) {
            idx = 1;
        } else {
            idx = g % 23;
        }
        p = (u8 *)Pes6MatchPlayers + idx * 0x240;
        if (func_00992220(p) == 0) {
            v = 0;
        } else {
            v = *p;
        }
    }
    obj[0x2C] = v;
    if (obj[0x2C] == 0) {
        return 0;
    }
    func_00305E60(arg0, func_003032A0);
    return 1;
}
