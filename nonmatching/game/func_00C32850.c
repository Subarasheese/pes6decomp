/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern u32 func_00C137C0(u32);
extern s32 func_00C132C0(void *);
void *func_00C13280(void *);
u32 func_00C137F0();
u32 func_00C13840();
s32 func_00C18DC0(u8);
extern char D_00CCB350[];

void func_00C32850(void) {
    char *p;
    s32 i;
    u32 cur;
    u32 end;
    u8 a;
    u8 b;
    u16 *cnt;
    u16 v;

    cur = func_00C13840();
    end = func_00C137F0();
    p = D_00CCB350;
    for (i = 0; i < 0x71; i += 8) {
        *(s32 *)(p + 4) = -1;
        *(s32 *)(p + 8) = -1;
        *(s32 *)(p + 0xC) = -1;
        *(s32 *)(p + 0x10) = -1;
        *(s32 *)(p + 0x14) = -1;
        *(s32 *)(p + 0x18) = -1;
        *(s32 *)(p + 0x1C) = -1;
        *(s32 *)(p + 0x20) = -1;
        p += 0x20;
    }
    *(s32 *)(D_00CCB350 + 0x1E4) = -1;
    *(s32 *)(D_00CCB350 + 0x1E8) = -1;
    *(s32 *)(D_00CCB350 + 0x1EC) = -1;
    *(s32 *)(D_00CCB350 + 0x1F0) = -1;
    *(s32 *)(D_00CCB350 + 0x1F4) = -1;
    p = D_00CCB350;
    for (i = 0; i < 0x20; i += 8) {
        *(s32 *)(p + 0x1F8) = -1;
        *(s32 *)(p + 0x278) = -1;
        *(s32 *)(p + 0x1FC) = -1;
        *(s32 *)(p + 0x27C) = -1;
        *(s32 *)(p + 0x200) = -1;
        *(s32 *)(p + 0x280) = -1;
        *(s32 *)(p + 0x204) = -1;
        *(s32 *)(p + 0x284) = -1;
        *(s32 *)(p + 0x208) = -1;
        *(s32 *)(p + 0x288) = -1;
        *(s32 *)(p + 0x20C) = -1;
        *(s32 *)(p + 0x28C) = -1;
        *(s32 *)(p + 0x210) = -1;
        *(s32 *)(p + 0x290) = -1;
        *(s32 *)(p + 0x214) = -1;
        *(s32 *)(p + 0x294) = -1;
        p += 0x20;
    }
    *(s16 *)(D_00CCB350 + 0) = 0;
    *(s16 *)(D_00CCB350 + 2) = 0;
    if (cur < end) {
        do {
            if ((func_00C132C0((void *)cur) & 0xFF) == 1) {
                if (cur != -1U) {
                    a = *((u8 *)func_00C13280((void *)cur) + 1);
                    if (((s32)a >> 7) == 0) {
                        *(u32 *)(D_00CCB350 + (a & 0x7F) * 4 + 4) = cur;
                    } else {
                        *(u32 *)(D_00CCB350 + (func_00C18DC0(a) & 0xFF) * 4 + 0x1E8) = cur;
                    }
                }
            } else if ((func_00C132C0((void *)cur) & 0xFF) == 0x1E && cur != -1U) {
                b = *((u8 *)func_00C13280((void *)cur) + 1);
                cnt = (u16 *)(D_00CCB350 + b * 2);
                v = *cnt;
                if ((s32)v < 0x20) {
                    *(u32 *)(D_00CCB350 + (b << 7) + v * 4 + 0x1F8) = cur;
                    *cnt += 1;
                }
            }
            cur = func_00C137C0(cur);
        } while (cur < end);
    }
}
