/* compiler: ee-gcc-2.96-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
struct Obj;

extern "C" char *func_00105110(Obj *arg0);

extern "C" void func_00106000(Obj *arg0) {
    func_00105110(arg0);
    __asm__ volatile("sync");
}
