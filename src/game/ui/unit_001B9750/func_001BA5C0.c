/* compiler: mwcc-3.0.1b210 */
#include "types.h"
extern s32 func_001BAF70(s32 node);
extern s32 func_001BACC0(s32 id);
extern void func_001BAA20(s32 id);
s32 func_001BA5C0(s32 node) {
    s32 id = func_001BAF70(node);
    if (func_001BACC0(id) == 1)
        func_001BAA20(id);
    return 0;
}
