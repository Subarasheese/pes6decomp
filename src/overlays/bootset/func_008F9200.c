/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_008F9720(s32, s32);

extern char D_008FB0C5[];

void func_008F9200(s32 arg0) {
    func_008F9720(0, arg0 + 9);
    *(((char *)D_008FB0C5) + arg0) = 0;
}
