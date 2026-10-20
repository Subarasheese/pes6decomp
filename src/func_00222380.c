/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK *func_002228B0(unsigned int id, int set, int arg, int source);
void func_001C4730(void *dst, void *src, int size);
int func_00222380(unsigned int id, void *src) {
    void *dst;
    dst = func_002228B0(id, 1, 4, 0);
    if (dst == 0)
        return 0;
    if (src == 0)
        return 0;
    func_001C4730(dst, src, 0x10);
    return 1;
}
