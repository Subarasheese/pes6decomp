/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

void func_001C48E8(void *, s32, s32);
extern s32 D_003E9780;
extern char D_003FAAD0[];
extern char D_003FAE50[];

void Pes6Task_Add(s32 arg0, u8 arg1, u8 arg2, u8 arg3) {
    u8 pri;
    s32 i;
    char *p;
    char *node;
    char *prev;
    char *cur;

    pri = arg1;
    if (arg0 != 0) {
        if (arg3 == 1) {
            if (pri < 0x2D) {
                if (pri < 3) pri = 3;
            } else {
                pri = 0x2C;
            }
        }
        i = 0;
        p = D_003FAAD0;
        for (;;) {
            if (*(s32 *)(p + 8) == 0) {
                node = D_003FAAD0 + i * 0x10;
                func_001C48E8(node, 0, 0x10);
                break;
            }
            i++;
            p += 0x10;
            if (i >= 0x38) { node = NULL; break; }
        }
        *(s32 *)(node + 8) = arg0;
        *(u8 *)(node + 0xC) = pri;
        *(u8 *)(node + 0xD) = arg2;
        prev = D_003FAE50;
        cur = *(char **)(D_003FAE50 + 4);
        while (pri >= *(u8 *)(cur + 0xC)) {
            prev = cur;
            cur = *(char **)(cur + 4);
            if (cur == D_003FAE50) break;
        }
        *(char **)cur = node;
        *(char **)(node + 4) = cur;
        *(char **)(prev + 4) = node;
        *(char **)node = prev;
        D_003E9780 += 1;
    }
}
