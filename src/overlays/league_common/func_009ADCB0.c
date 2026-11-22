/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern u32 func_009AE900(void);
s32 func_009ADD30(s32);

s32 func_009ADCB0(void) {
    if (func_009AE900() == 0) {
        return 0;
    }
    func_009ADD30(1);
    return 0;
}
