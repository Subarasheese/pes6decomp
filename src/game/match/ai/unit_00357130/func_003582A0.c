/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_003581F0(s32);
void *Pes6Job_Create(s32, s32, s32, void *);
void Pes6Job_SetPayloadWord(void *, s32, s32);
void func_00338720(void *, s32);
void func_00333620(s32, s32);
extern u8 D_003E6490[];

s32 func_003582A0(s32 arg0) {
    void *temp_s0;

    temp_s0 = Pes6Job_Create(0x2B, (s32)func_003581F0, 3, D_003E6490);
    Pes6Job_SetPayloadWord(temp_s0, arg0, 0);
    func_00338720(temp_s0, 0x1E);
    func_00333620(0xD, 1);
    return 1;
}
