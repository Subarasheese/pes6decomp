/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_00147F00(s32, s32, s32 *, void (*)(void), u8 **, s32);
extern void func_00147ED0(s32);
extern void func_001A9680(void);
extern char D_003B0FF0[];
extern char D_00521DE0[];

void func_001A95C0(void) {
    s32 sp38;
    u8 *sp3C;
    u8 *p;
    s32 i;

    if (*(s32 *)D_003B0FF0 != 0) {
        p = (u8 *)D_00521DE0;
        for (i = 0; i < 0x17; i++, p += 0x18) {
            if (p[8] == 2) {
                sp3C = p;
                if (*(s32 *)(p + 0x14) != 0) {
                    sp38 = p[0xA] + 0x5AA;
                    func_00147ED0(sp38);
                    func_00147F00(1, 1, &sp38, func_001A9680, &sp3C, 4);
                }
            }
        }
    }
}
