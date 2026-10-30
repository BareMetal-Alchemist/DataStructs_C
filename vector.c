#include <stdio.h>
#include <stdlib.h>

// Data structure definition
typedef struct {
	int *data;
	size_t size;
	size_t capacity;

} Vector;

// Function for initializing vector
void init(Vector *v) {
	v->data = NULL;
	v->size = 0;
	v->capacity = 0;

}

// Function for add element to a vector
int add(Vector *v, int value) {
	if (v->size == v->capacity) {
		size_t new_cap = (v->capacity == 0) ? 4 : v->capacity * 2;
		int *tmp = realloc(v->data, new_cap * sizeof *v->data);
		if (tmp == NULL) {
			return -1;
		}
		v->data = tmp;
		v->capacity = new_cap;
	}
	v->data[v->size++] = value;
	return 0;

}

// Function for destroying the vector after use
void destroy(Vector *v) {
	free(v->data);
	init(v);
}

