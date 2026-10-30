#include "vector.c"

int main(void) {
	//Vector Test
	printf("Vector Test Started:\n");
	Vector v;
	init(&v);

	for (int i = 0; i < 10; i++) {
		add(&v, i);
	}

	for (size_t i = 0; i < v.size; i++) {
		printf("%d\n", v.data[i]);
	}

	destroy(&v);
	printf("Vector Test Ended.");
	
	

	return 0;
}
