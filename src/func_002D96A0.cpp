/* compiler: ee-gcc-2.96-G0 */
/* Byte-identical to a GT4 function; source ported from the GT4 decompilation
 * (MIT, see THIRD_PARTY.md). Names here do not identify PES6 behavior. */
typedef struct S8 { char data[8]; } S8;

struct Obj1 {
    S8 unk0;
};

extern S8 D_003B31D0;

extern "C" void func_002D96A0(struct Obj1 *arg0) {
    D_003B31D0 = arg0->unk0;
}
