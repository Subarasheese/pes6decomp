/* compiler: ee-gcc-2.96-G0 */
void func_00165E28(int, int *, int *);

int func_00166158(int handle) {
    int done;
    int total;

    func_00165E28(handle, &done, &total);
    return (float)done / (float)total * 100.0f;
}
