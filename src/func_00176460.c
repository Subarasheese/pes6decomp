/* compiler: ee-gcc-2.96 */
void func_001C7F58(char *, const char *);
void func_00121430(char *, int);
void func_00176428(char *);

void func_00176460(const char *name, int arg) {
    char buf[64];

    func_001C7F58(buf, name);
    func_00121430(buf, arg);
    func_00176428(buf);
}
