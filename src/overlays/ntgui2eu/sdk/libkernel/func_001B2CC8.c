/* compiler: ee-gcc-2.96 */
#include "types.h"

extern s32 func_001B29E0(void *);
extern s32 func_001B3700(void *, s32 *);

void func_001B2CC8(void *arg0) {
    func_001B3700(arg0, (s32 *) func_001B29E0);
}
