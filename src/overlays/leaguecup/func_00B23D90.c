/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void func_001C48E8(void *, s32, s32);
void func_001D5F80(s32);
void *func_0096DB90(s32);
void func_00B23340(void);
void func_00B23A50(void);
extern u8 *D_003EAD90;


void func_00B23D90(void) {
    u8 *t;
    u8 *p;

    if (D_003EAD90 == NULL) {
        if (D_003EAD90 == NULL) {
            t = func_0096DB90(0xC60);
            D_003EAD90 = t;
            func_001C48E8(t, 0, 0xC60);
        }
        p = D_003EAD90;
        if (p != NULL) {
            *(s8 *)(p + 0xC5A) = 0;
            *(s8 *)(p + 0xC5B) = 0;
            *(s8 *)(p + 0xC5C) = 0;
            *(s8 *)(p + 0xC3C) = 0;
            func_00B23A50();
            func_00B23340();
        }
        func_001D5F80(0x10312);
    }
}
