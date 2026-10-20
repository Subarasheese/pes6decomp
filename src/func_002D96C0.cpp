/* compiler: ee-gcc-2.9-G0 */
/* Byte-identical to a GT4 function; source ported from the GT4 decompilation
 * (MIT, see THIRD_PARTY.md). Names here do not identify PES6 behavior. */
typedef int s32;
typedef unsigned int u32;
typedef unsigned char u8;

extern u8 D_003B31D2;
extern "C" s32 func_002D9600(void);
extern "C" void func_00105410(u32 *);

extern "C" s32 func_002D96C0(void) {
    u32 cfg[4];
    if (func_002D9600() != 0)
        return D_003B31D2;
    func_00105410(cfg);
    return (cfg[0] >> 1) & 3;
}
