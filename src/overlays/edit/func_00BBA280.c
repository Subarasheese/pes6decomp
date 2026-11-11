/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_00BCF390(void);
void func_0025E150(s32, s32);
void func_0025F3B0(s32);
void SD_call(s32);
void func_00BB76A0(void *);
void func_00BBC050(void);

s32 func_00BBA280(void *arg0) {
    if (!(func_00BCF390() & 0x4000)) {
        return 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0x60) >= 2) {
        func_00BB76A0(arg0);
    }
    func_0025E150(0, 1);
    func_0025F3B0(3);
    func_00BBC050();
    SD_call(0x84008401);
    return 1;
}
