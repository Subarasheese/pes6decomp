/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void func_001C48E8(void *, s32, s32);
void func_001D5F80(s32);
void *func_0096DB90(s32);
void func_00B080C0(void);
extern u8 *D_003EAD5C;


void func_00B08420(void) {
    u8 *t;
    u8 *p;

    if (D_003EAD5C == NULL) {
        if (D_003EAD5C == NULL) {
            t = func_0096DB90(0xCE8);
            D_003EAD5C = t;
            func_001C48E8(t, 0, 0xCE8);
        }
        p = D_003EAD5C;
        if (p != NULL) {
            *(s8 *)(p + 0xCE2) = 0;
            *(s8 *)(p + 0xCE3) = 0;
            *(s8 *)(p + 0xCE4) = 0;
            *(s8 *)(p + 0xCC4) = 0;
            func_00B080C0();
        }
        func_001D5F80(0x102B2);
    }
}
