/* compiler: ee-gcc-2.96-G0 */
#include "types.h"
extern s32 func_00C24700(u32 *);
s32 func_00C248F8(u32 *words) {
    func_00C24700(words);
    func_00C24700(words + 1);
    func_00C24700(words + 2);
    func_00C24700(words + 3);
    return 0;
}
