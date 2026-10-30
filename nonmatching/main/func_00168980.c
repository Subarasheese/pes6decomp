/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00162CC8(void *);
extern void func_001629D8(void *, int);
extern void func_001628A8(void *, int);
extern int func_00162B40(void *);
extern int func_00162AF8(void *);
extern void func_001629E8(void *, int);
extern void func_001629F8(void *, int);
extern s32 func_00162B10(void *);
extern void func_001629C8(int, int, int);
extern M2C_UNK func_00168A38;

void func_00168980(void *arg0) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s3;
    s32 temp_s4;
    void *temp_s1;

    temp_s1 = M2C_FIELD(arg0, void **, 4);
    temp_s3 = func_00162AF8(temp_s1);
    temp_s4 = func_00162B10(temp_s1);
    temp_s0 = func_00162B40(temp_s1);
    func_00162CC8(temp_s1);
    temp_s0_2 = temp_s0 - temp_s3;
    func_001629E8(temp_s1, 0);
    M2C_FIELD(arg0, s32 *, 0x90) = temp_s0_2;
    func_001629D8(temp_s1, temp_s0_2);
    func_001629F8(temp_s1, temp_s4);
    func_001628A8(temp_s1, temp_s3);
    func_001629C8((s32) temp_s1, (s32) &func_00168A38, (s32) arg0);
}
