/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_001DCCF0(void *);
extern void func_001DCC70(void *);
extern char D_0052AEE0[];
extern char D_0052AEE8[];
extern char D_0052AF04[];
extern char D_0052AF08[];

void func_001E3B40(char *arg0) {
    char *temp_s2;
    char *temp_a1;
    f32 f0;

    temp_s2 = *(char **)D_0052AEE0;
    *(s8 *)(arg0 + 0x2C) = 0;
    *(s32 *)(arg0 + 0xC) = 0;
    *(s32 *)(arg0 + 8) = 0;
    func_001DCCF0(temp_s2);
    func_001DCC70(D_0052AEE8);
    *(char **)(arg0 + 0) = temp_s2;
    temp_a1 = temp_s2 + *(u8 *)(D_0052AEE8 + 0xC);
    *(char **)(arg0 + 4) = temp_a1;
    *(char **)D_0052AEE0 = temp_a1;
    if (*(s32 *)(D_0052AEE8 + 4) == 2) {
        *(s8 *)(arg0 + 0x2D) = 2;
        *(f32 *)(arg0 + 0x18) = (f32) *(s8 *)(D_0052AEE8 + 0x14);
    } else if (*(s32 *)(D_0052AEE8 + 4) == 6) {
        *(s8 *)(arg0 + 0x2D) = 6;
        f0 = (f32) *(s8 *)(D_0052AEE8 + 0x16);
        *(f32 *)(arg0 + 0x14) = f0;
        *(f32 *)D_0052AF08 = f0;
    } else if (*(s32 *)(D_0052AEE8 + 4) == 5) {
        *(s8 *)(arg0 + 0x2D) = 5;
        f0 = (f32) *(s8 *)(D_0052AEE8 + 0x15);
        *(f32 *)(arg0 + 0x10) = f0;
        *(f32 *)D_0052AF04 = f0;
    } else if (*(s32 *)(D_0052AEE8 + 4) == 1) {
        *(s8 *)(arg0 + 0x2D) = 1;
    } else {
        *(s8 *)(arg0 + 0x2D) = 9;
    }
}
