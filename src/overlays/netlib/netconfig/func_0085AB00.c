/* compiler: mwcc-3.0.1b151-O3 */
#include "types.h"
extern s32 func_0085ADE0(void);
extern s32 func_0085B2A0(void);
extern s32 func_0085B520(void);
extern s32 D_003E9D60;
s32 func_0085AB00(void) {
    if (D_003E9D60 == 0) {
        return 1;
    }
    if (D_003E9D60 != 3) {
        if (D_003E9D60 != 2) {
            switch (D_003E9D60) {
            case 1:
                return func_0085B2A0();

            default:
                return -1;
            }
        }
        return func_0085B520();
    }
    return func_0085ADE0();
}
