/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad[0x10];
    s32 x10;
    u8 pad14[0xC];
    void *x20;
} SF;

extern void func_001D7D60(void *, u8);
void func_008B9AB0(s32, s32);

void func_008D4A70(SF *arg0, u8 arg1) {
    if (arg0->x20 != NULL) {
        func_001D7D60(arg0->x20, arg1);
    }
    if ((arg0->x10 != 0) && (arg1 == 0)) {
        func_008B9AB0(arg0->x10, 0);
    }
}
