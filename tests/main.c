#include <stdio.h>

#include <libnu/libnu.h>

typedef void (*testcase)(void);

void test_utf8_strlen();
void test_utf8_decoding();
void test_utf8_bytelen();
void test_utf8_encoding();
void test_cesu8_strlen();
void test_cesu8_decoding();
void test_cesu8_bytelen();
void test_cesu8_encoding();
void test_iterators_read();
void test_iterators_write();

testcase cases[] = {

#ifdef NU_WITH_UTF8_READER
	test_utf8_strlen,
	test_utf8_decoding,
#endif

#ifdef NU_WITH_UTF8_WRITER
	test_utf8_bytelen,
	test_utf8_encoding,
#endif

#ifdef NU_WITH_CESU8_READER
	test_cesu8_strlen,
	test_cesu8_decoding,
#endif

#ifdef NU_WITH_CESU8_WRITER
	test_cesu8_bytelen,
	test_cesu8_encoding,
#endif

#ifdef NU_WITH_ITERATORS
	test_iterators_read,
	test_iterators_write,
#endif
};

int main() {
	for (int i = 0; i < sizeof(cases) / sizeof(*cases); ++i) {
		cases[i]();
		printf(".");
	}

	printf("\n");
	return 0;
}
