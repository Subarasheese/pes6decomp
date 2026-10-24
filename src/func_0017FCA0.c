/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0xC];
    s32 busy;
    u8 pad10[0x10];
} Status20;

extern s32 D_00519E48[];
void func_0012A740(s32, Status20 *);
void func_0012ADB0(s32);

void func_0017FCA0(s32 index) {
    s32 *handle = &D_00519E48[index];
    Status20 status;

    func_0012A740(*handle, &status);
    if (status.busy != 0) {
        func_0012ADB0(*handle);
    }
}
