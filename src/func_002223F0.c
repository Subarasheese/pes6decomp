/* compiler: mwcc-3.0.1b210 */
#include "types.h"
void *func_002228B0(unsigned int id, int set, int arg, int source);
void func_001F84D0(void *src, void *dst);
void func_001C4730(void *dst, void *src, int size);
int func_002223F0(unsigned int id, void *src) {
    u8 buf[0x100];
    void *rec;
    rec = func_002228B0(id, 0, 4, 0);
    if (rec == 0)
        return 0;
    func_001F84D0(src, buf);
    func_001C4730(rec, buf, 0x1E);
    return 1;
}
