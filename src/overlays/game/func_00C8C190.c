/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern void func_001F1EA0(void *);
extern void func_001C48E8(char *, s32, s32);
extern void *D_00CCD510[];
extern char D_00CCD500[];

void func_00C8C190(void) {
    func_001F1EA0(D_00CCD510[0]);
    func_001C48E8((char *)D_00CCD510, 0, 0x3C);
    func_001C48E8(D_00CCD500, 0, 8);
}
