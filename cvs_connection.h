#ifndef CVS_H
#define CVS_H

#include <stdio.h>
#include <sys/types.h>

typedef struct cvs_connection {
    FILE * stream;
    const char * remote_root;
    char * line;
    size_t line_len;
} cvs_connection_t;


void connect_to_cvs (cvs_connection_t * conn, const char * root);

void cvs_connection_destroy (cvs_connection_t * conn);

/// Call getline and do some sanity checking.
size_t next_line (cvs_connection_t * s);


#endif
