/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void func_001C48E8(void *, s32, s32);
void func_001D5F80(s32);
void *func_0096DB90(s32);
void func_00B272C0(void);
void func_00B279E0(void);
extern u8 *D_003EAD94;


void func_00B27C40(void) {
    u8 *t;
    u8 *p;

    if (D_003EAD94 == NULL) {
        if (D_003EAD94 == NULL) {
            t = func_0096DB90(0xDA0);
            D_003EAD94 = t;
            func_001C48E8(t, 0, 0xDA0);
        }
        p = D_003EAD94;
        if (p != NULL) {
            *(s8 *)(p + 0xD9A) = 0;
            *(s8 *)(p + 0xD9B) = 0;
            *(s8 *)(p + 0xD9C) = 0;
            *(s8 *)(p + 0xD7C) = 0;
            func_00B279E0();
            func_00B272C0();
        }
        func_001D5F80(0x10313);
    }
}
