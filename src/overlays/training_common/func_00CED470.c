/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    void *x0;
    s32 x4;
    u8 pad8[8];
    s32 x10;
} ST;

extern void func_00153FA0(void *);
void func_001C48E8(void *, s32, s32);
void func_001DF7B0(s32);
void func_001EDD90(s32);

s32 func_00CED470(ST *arg0) {
    if (arg0 == NULL) {
        return 0;
    }
    func_001EDD90(arg0->x4);
    func_001DF7B0(arg0->x10);
    if (arg0->x0 == NULL) {
        return 0;
    }
    func_00153FA0(arg0->x0);
    func_001C48E8(arg0, 0, 0x1C);
    return 1;
}
