/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0xC];
    s32 locked;
    u8 pad10[0x10];
} Info;

extern s32 D_003E9E74;
void func_0012A750(s32, Info *);
void func_0012ADE0(s32);

void func_002FB2E0(void) {
    Info info;

    func_0012A750(D_003E9E74, &info);
    if (info.locked != 0) {
        func_0012ADE0(D_003E9E74);
    }
}
