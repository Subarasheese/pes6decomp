/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void func_001C48E8(void *, s32, s32);
void func_001D5F80(s32);
void *func_0096DB90(s32);
void func_009BC760(void);
extern u8 *D_003EA9C0;


void func_009BC990(void) {
    u8 *t;
    u8 *p;

    if (D_003EA9C0 == NULL) {
        if (D_003EA9C0 == NULL) {
            t = func_0096DB90(0x744);
            D_003EA9C0 = t;
            func_001C48E8(t, 0, 0x744);
        }
        p = D_003EA9C0;
        if (p != NULL) {
            *(s8 *)(p + 0xF0) = 0;
            *(s8 *)(p + 0xF1) = 0;
            *(s8 *)(p + 0xF2) = 0;
            *(s8 *)(p + 0x740) = 0;
            func_009BC760();
        }
        func_001D5F80(0x102A7);
    }
}
