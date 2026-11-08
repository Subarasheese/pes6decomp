/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void func_001C48E8(void *, s32, s32);
void func_001D5F80(s32);
void *func_0096DB90(s32);
void func_00B2FEF0(void);
void func_00B30610(void);
extern u8 *D_003EAD9C;


void func_00B30930(void) {
    u8 *t;
    u8 *p;

    if (D_003EAD9C == NULL) {
        if (D_003EAD9C == NULL) {
            t = func_0096DB90(0x2B14);
            D_003EAD9C = t;
            func_001C48E8(t, 0, 0x2B14);
        }
        p = D_003EAD9C;
        if (p != NULL) {
            *(s8 *)(p + 0x2B0E) = 0;
            *(s8 *)(p + 0x2B0F) = 0;
            *(s8 *)(p + 0x2B10) = 0;
            *(s8 *)(p + 0x2AF0) = 0;
            func_00B30610();
            func_00B2FEF0();
        }
        func_001D5F80(0x10315);
    }
}
