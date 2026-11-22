/* compiler: ee-gcc-2.96-G0 */
#include "types.h"

extern s32 func_0015B8B8(s32, s32, s32, s32, s32);
extern s32 func_001636A8(s32);
extern s8 D_003C8220[];
extern s8 D_003C8248[];
extern void func_0015B478(void *);

s32 func_0015D860(s8 *arg0) {
    func_0015B8B8(7, 0, arg0, -1, -1);
    if (arg0 == 0) {
        func_0015B478(D_003C8220);
        return -3;
    } else {
        if (((s8 *)(arg0))[1] != 1) {
            if (((s8 *)(arg0))[1] == 3) {
                ((s8 *)(arg0))[1] = 1;
                return ((s32 *)(arg0))[5];
            } else {
                if (((s32 *)(arg0))[1] == 0) {
                    func_0015B478(D_003C8248);
                    return -1;
                } else {
                    func_001636A8(((s32 *)(arg0))[1]);
                    ((s8 *)(arg0))[3] = 1;
                    func_0015B8B8(7, 1, arg0, -1, -1);
                    return ((s32 *)(arg0))[5];
                }
            }
        } else {
            return ((s32 *)(arg0))[5];
        }
    }
}
