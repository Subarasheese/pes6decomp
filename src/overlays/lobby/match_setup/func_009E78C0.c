/* compiler: mwcc-3.0.1b210 */
#include "types.h"

s32 func_0099C730(s32);
s32 func_009E84E0(s32);
extern char D_00A7DF60[];
extern char D_00A7DF64[];

s32 func_009E78C0(void) {
    if ((*(s32 *)D_00A7DF60) == 0) {
        return 1;
    }
    func_009E84E0((*(s32 *)D_00A7DF60));
    (*(s32 *)D_00A7DF60) = 0;
    func_0099C730((*(s32 *)D_00A7DF64));
    return 1;
}
