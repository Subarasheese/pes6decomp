/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003EAD88;

void func_00B1DB40(s32 arg0) {
    s32 temp_a0;

    if (D_003EAD88 != 0) {
        temp_a0 = arg0 & 0xFF;
        switch (temp_a0) {                          /* irregular */
        case 21:
            return;
        case 15:
            return;
        case 12:
            return;
        case 0:
            return;
        }
    }
}
