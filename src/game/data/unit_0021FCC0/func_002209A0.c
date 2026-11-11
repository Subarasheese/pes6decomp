/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

u8 *Pes6OptionData_GetBase(void);
void func_001F84D0(s32, u8 *);
void func_001C4730(void *, void *, s32);

void func_002209A0(s32 src) {
    u8 *cfg = Pes6OptionData_GetBase();
    u8 buf[0x80];

    func_001F84D0(src, buf);
    func_001C4730(cfg + 0x3CC, buf, 0x20);
}
