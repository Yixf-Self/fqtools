#include "fqheader.h"

// Global messages:
void global_version(){
    printf("%s %s (zlib %s)\n", PROG_NAME, FQTOOLS_VERSION, ZLIB_VERSION);
}

void global_usage(){
    printf("usage: %s [-hvdramuli] [-b BUFSIZE] [-B BUFSIZE] [-q QUALTYPE] [-f FORMAT] [-F FORMAT] COMMAND [...] [FILE] [FILE]\n", PROG_NAME);
}

void global_help(){
    global_usage();
    printf("\n");
    printf("global options:\n");
    printf("  -h               Show global help message and exit.\n");
    printf("  -v               Show the program version and exit.\n");
    printf("  -d               Allow DNA sequence bases       (ACGTN)\n");
    printf("  -r               Allow RNA sequence bases       (ACGUN)\n");
    printf("  -a               Allow ambiguous sequence bases (RYKMSWBDHV)\n");
    printf("  -m               Allow mask sequence base       (X)\n");
    printf("  -u               Allow uppercase sequence bases\n");
    printf("  -l               Allow lowercase sequence bases\n");
    printf("  -p CHR           Set the pair replacement character (default \"%%\")\n");    
    printf("  -b BUFSIZE       Set the input buffer size\n");
    printf("  -B BUFSIZE       Set the output buffer size\n");
    printf("  -q QUALTYPE      Set the quality score encoding\n");
    printf("  -f FORMAT        Set the input file format\n");
    printf("  -F FORMAT        Set the output file format\n");
    printf("  -i               Read interleaved input file pairs\n");
    printf("  -I               Write interleaved output file pairs\n");
    printf("\n");
    printf("CHR:\n");
    printf("    This character will be replaced by the pair value when writing paired files.\n");
    printf("\n");
    printf("BUFSIZE:\n");
    printf("    Possible suffixes are [bkMG]. If no suffix is given, value is in bytes.\n");
    printf("\n");
    printf("QUALTYPE:\n");
    printf("    u  Do not assume specifc quality score encoding\n");
    printf("    s  Interpret quality scores as Sanger encoded\n");
    printf("    o  Interpret quality scores as Solexa encoded\n");
    printf("    i  Interpret quality scores as Illumina encoded\n");
    printf("\n");
    printf("FORMAT:\n");
    printf("    F  uncompressed FASTQ format (.fastq)\n");
    printf("    f  compressed FASTQ format (.fastq.gz)\n");
    printf("    b  unaligned BAM format (.bam)\n");
    printf("    u  attempt to infer format from file extension, (default .fastq.gz)\n");
    printf("\n");
    printf("COMMAND:\n");
    printf("view      View a single FASTQ file\n");
}

void fqprocess_view_usage(){
    printf("usage: %s [...] view [-hk] [-o OUTFILE] [FILE] [FILE]\n", PROG_NAME);
}

void fqprocess_view_help(){
    printf("view options:\n");
    printf("  -h               Show view help message and exit.\n");
    printf("  -k               Preserve secondary headers (if present).\n");
    printf("  -o STEM          Output file stem (default \"output%%\").\n");
    printf("  FILE             The fastq file(s) to view.\n");
    printf("\n");
    printf("STEM:\n");
    printf("    The file stem to use for output files (without file extension). Any\n");
    printf("    instances of the single character specified using the -p global argument\n");
    printf("    will be replaced with the pair number, or removed for single output\n");
    printf("    files. If the -o option is not specified, single file output will\n");
    printf("    be written to stdout and paired file output to the default stem (output%%).\n");
    printf("\n");
    printf("FILE:\n");
    printf("    If no input file is specified, input will be read from stdin.\n");
}