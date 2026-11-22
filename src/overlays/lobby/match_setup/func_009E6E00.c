/* compiler: mwcc-3.0.1b210 */
#include "types.h"

s32 func_0099C730(s32);
s32 func_009E84E0(s32);
extern char D_00A7DF30[];
extern char D_00A7DF34[];

s32 func_009E6E00(void) {
    if ((*(s32 *)D_00A7DF30) == 0) {
        return 1;
    }
    func_009E84E0((*(s32 *)D_00A7DF30));
    (*(s32 *)D_00A7DF30) = 0;
    func_0099C730((*(s32 *)D_00A7DF34));
    return 1;
}
