/* compiler: mwcc-3.0.1b210 */
#include "types.h"

s32 func_002EBEF0(s32);
extern char D_00CFFCFC[];

s32 func_00CEAD80(void) {
    if ((*(s32 *)D_00CFFCFC) == 0) {
        return 0;
    }
    return func_002EBEF0((*(s32 *)D_00CFFCFC)) == 0;
}
