/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00229DF0(void);
extern void func_00229C70(s32);
extern void func_00229AF0(s32);
extern void func_00229BF0(s32);
extern void func_00229CF0(s32);
M2C_UNK func_0099A710();                            /* extern */
M2C_UNK func_0099A890();                            /* extern */

void func_0099AF10(void) {
    s8 *temp_v0;

    func_0099A890();
    func_0099A710();
    temp_v0 = func_00229DF0();
    if (temp_v0 != NULL) {
        *temp_v0 = 0;
    }
    func_00229CF0(0);
    func_00229C70(0);
    func_00229BF0(0);
    func_00229AF0(1);
}
