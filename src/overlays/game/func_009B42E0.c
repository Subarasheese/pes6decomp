/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern char D_00CBAA00[];
extern char D_00CBAFD0[];

char *func_009B42E0(void) {
    return ((char *)D_00CBAFD0) + ((*(u16 *)D_00CBAA00) * 0xC);
}
