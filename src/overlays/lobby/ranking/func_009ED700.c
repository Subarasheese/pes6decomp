/* compiler: mwcc-3.0.1b210 */
#include "types.h"
extern s32 func_00821570(void), func_009ED850(void), func_008214E0(void);
extern s32 D_00A7E000[];
s32 func_009ED700(void) {
    s32 result = 0, phase = D_00A7E000[0];
    switch (phase) {
    case 0:
        if (func_00821570() != 1)
            break;
        phase++; /* fall through */
    case 1:
        if (func_009ED850() != 1)
            break;
        phase++; /* fall through */
    case 2:
        result = func_008214E0();
        break;
    }
    D_00A7E000[0] = phase;
    return result;
}
