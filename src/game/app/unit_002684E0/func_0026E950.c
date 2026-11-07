/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void func_0024EDD0(void);
void func_0024F830(void);
void func_00250740(void);
void func_00253B80(void);
void func_00254C20(void);
void func_002FC6C0(void);
void func_003063C0(void);
extern u32 D_003E9C78;

void func_0026E950(void) {
    if (++D_003E9C78 > 0xFFFFFFFU) {
        D_003E9C78 = 0;
    }
    func_0024F830();
    func_00254C20();
    func_00250740();
    func_00253B80();
    func_003063C0();
    func_0024EDD0();
    func_002FC6C0();
}
