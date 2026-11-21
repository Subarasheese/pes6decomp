/* compiler: ee-gcc-2.96-G0 */
/* Adapted from gt4-decomp, src/libstream/unit_0057A128/func_0057DA20.cpp.
 * MIT licence. See THIRD_PARTY.md. */
void func_001B0E98(int arg0, int arg1, __builtin_va_list args);

void func_001AD8E8(int arg0, int arg1, ...) {
    __builtin_va_list args;
    __builtin_stdarg_start(args, arg1);
    func_001B0E98(arg0, arg1, args);
}
