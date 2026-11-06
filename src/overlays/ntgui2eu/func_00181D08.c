/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"


void func_00181D68();                            /* extern */
void func_001821C0(void *);                      /* extern */
void func_001823D8(void *);                      /* extern */
void func_00183058(void *);                      /* extern */
void func_00183178(void *);                      /* extern */
void func_00183A38(void *);                      /* extern */

void func_00181D08(void *arg0) {
    func_00181D68();
    func_00183A38(arg0);
    if (M2C_FIELD(arg0, s32 *, 0x5E90) != 0) {
        func_001823D8(arg0);
        func_00183178(arg0);
        return;
    }
    func_001821C0(arg0);
    func_00183058(arg0);
}
