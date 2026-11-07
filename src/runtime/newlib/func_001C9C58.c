/* compiler: ee-gcc-2.96 */
extern const char _ctype_[];

int func_001C9C58(int c) {
    return ((_ctype_ + 1)[c] & 1) ? c - 'A' + 'a' : c;
}
