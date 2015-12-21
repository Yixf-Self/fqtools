#include "fqheader.h"

int fqbuffer_init(fqbuffer *b, size_t size){
    b->size = 0;
    b->offset = 0;
    b->data = (char*)malloc((size + 1) * sizeof(char));
    b->data[size] = '\0';
    if(b->data == NULL) return FQ_STATUS_FAIL;
    b->size = size;
    return FQ_STATUS_OK;
}

void fqbuffer_free(fqbuffer *b){
    free(b->data);
    b->size = 0;
    b->offset = 0;
}

size_t fqbuffer_remaining(fqbuffer *b){
    return b->size - b->offset;
}
