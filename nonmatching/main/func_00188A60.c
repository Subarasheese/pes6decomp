/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_0051FF47[];
extern char D_00520080[];
extern char D_00520088[];

void func_00188A60(char *arg0) {
    if (arg0 != NULL) {
        *(char **)D_00520080 = arg0 + *(s32 *)arg0;
        *(char **)D_00520088 = arg0 + *(s32 *)(arg0 + ((*(u8 *)D_0051FF47 != 0) ? 2 : 1) * 4);
        return;
    }
    *(char **)D_00520080 = NULL;
    *(char **)D_00520088 = NULL;
}
