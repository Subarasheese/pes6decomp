/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern char D_00CBCA00[];

char *func_00B2A420(u32 arg0) {
    return ((char *)D_00CBCA00) + ((arg0 % 23U) * 8);
}
