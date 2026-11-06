/* compiler: ee-gcc-2.96-G0 */
extern const char _ctype_[];

int func_001C9C78(int c) {
    return ((_ctype_ + 1)[c] & 2) ? c - 'a' + 'A' : c;
}
