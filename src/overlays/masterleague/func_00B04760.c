/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern u8 *func_00223C10(void);
s32 func_00B04760(void) {
    u8 *p = func_00223C10();
    s32 t;
    if (p == NULL) return 0;
    t = *p & 0xF;
    switch (t) {
    case 5: case 6: case 7:
        return 1;
    }
    return 0;
}
