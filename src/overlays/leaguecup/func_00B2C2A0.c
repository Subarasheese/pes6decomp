/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void func_001C48E8(void *, s32, s32);
void func_001D5F80(s32);
void *func_0096DB90(s32);
void func_00B2B860(void);
void func_00B2BF80(void);
extern u8 *D_003EAD98;


void func_00B2C2A0(void) {
    u8 *t;
    u8 *p;

    if (D_003EAD98 == NULL) {
        if (D_003EAD98 == NULL) {
            t = func_0096DB90(0x1384);
            D_003EAD98 = t;
            func_001C48E8(t, 0, 0x1384);
        }
        p = D_003EAD98;
        if (p != NULL) {
            *(s8 *)(p + 0x137E) = 0;
            *(s8 *)(p + 0x137F) = 0;
            *(s8 *)(p + 0x1380) = 0;
            *(s8 *)(p + 0x1360) = 0;
            func_00B2BF80();
            func_00B2B860();
        }
        func_001D5F80(0x10314);
    }
}
