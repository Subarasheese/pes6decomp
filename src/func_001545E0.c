/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u8 D_0050D770[];
extern u8 D_0050D774[];
extern u8 D_0050D778[];
extern u8 D_003C7268[];
extern u8 D_003C726C[];
void func_00155510(void);
void func_00155140(void);
void func_001C48E8(void *dst, s32 val, s32 size);

void func_001545E0(void) {
    func_00155510();
    func_001C48E8(D_0050D770, 0, 0x10);
    *(s32 *)D_0050D770 = 1;
    *(s32 *)D_0050D774 = *(s32 *)D_003C7268;
    *(s32 *)D_0050D778 = *(s32 *)D_003C726C;
    func_00155140();
}
