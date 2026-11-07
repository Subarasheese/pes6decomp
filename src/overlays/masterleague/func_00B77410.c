/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void func_001C48E8(void *, s32, s32);
void func_001D5F80(s32);
void *func_0096DB90(s32);

extern u8 *D_003EAF0C;
extern u8 D_003EAF10;

void func_00B77410(void) {
    u8 *t;
    u8 *p;

    if (D_003EAF0C == NULL) {
        if (D_003EAF0C == NULL) {
            t = func_0096DB90(0x48);
            D_003EAF0C = t;
            func_001C48E8(t, 0, 0x48);
        }
        p = D_003EAF0C;
        if (p != NULL) {
            *(u8 *)(p + 0x40) = D_003EAF10;
            *(s32 *)(p + 0x44) = 0;
        }
        func_001D5F80(0x1033A);
    }
}
