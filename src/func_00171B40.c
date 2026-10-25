/* compiler: ee-gcc-2.96-G0 */
struct Hook {
    int func;
    int arg;
};

extern struct Hook D_00387800;
void func_00171A50(int *, int, int, int);

void func_00171B40(int id, int *out) {
    out[0] = 0;
    out[1] = 0;
    if (D_00387800.func != 0) {
        func_00171A50(out, id, D_00387800.func, D_00387800.arg);
    }
}
