/* compiler: mwcc-3.0.1b210 */
#include "pes6/slot_table.h"
void func_00181C70(int index, int value) {
    unsigned char *p = (unsigned char *)D_0051FF38[0];
    *(p + index * 96 + 0x52) = value;
}
