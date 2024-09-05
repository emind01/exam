#include <unistd.h>

void print_last_word(const char *str) {
    const char *end = str;
    const char *start = str;

    while (*end) {
        end++;
    }

    end--;
    while (end >= str && (*end == ' ' || *end == '\t')) {
        end--;
    }

    if (end < str) {
        write(1, "\n", 1);
        return;
    }

    start = end;
    while (start > str && *(start - 1) != ' ' && *(start - 1) != '\t') {
        start--;
    }

    while (start <= end) {
        write(1, start, 1);
        start++;
    }
    write(1, "\n", 1);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        write(1, "\n", 1);
        return 0;
    }

    print_last_word(argv[1]);
    return 0;
}