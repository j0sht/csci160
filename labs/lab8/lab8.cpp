/*
 * Joshua Tate
 * Lab 8 Exercise
 *
 * This program takes two file names as command line arguments, and copies
 *  the first file into the second (overwriting the second file if it
 *  already existed).
 *
 * The program explains the correct usage if given the wrong number of
 *  command line arguments, and will notify the user if the copy was
 *  successful or not.
 */
#include <cstdio>

// copy the contents of the source file into the destination file,
//  one character at a time.
// generate error message and returns false if it is unable to open
//  either of the files,
// otherwise performs the copy and returns true
bool copyFileByChars(const char *srcfile, const char *destfile);

// takes two command line arguments,
//  and the name of the file to be copied,
//  and the name to use for the copy
// ex) ./lab8x originalFile copiedVersion
int main(int argc, char *argv[]) {
    // if they don't give both filenames,
    //  tell them how to run the program correctly
    if (argc != 3) {
	printf("correct use is\n   %s infile outfile\n", argv[0]);
    } else if (copyFileByChars(argv[1], argv[2])) {
	printf("Copied %s to %s\n", argv[1], argv[2]);
    } else {
	printf("Unable to perform copy operations\n");
    }
    // end the program
    return 0;
}

// copy the contents of the source file into the destination file,
//  one character at a time
// generates error message and returns false if it is unable to open
//  either of the files,
// otherwise performs the copy and returns true
bool copyFileByChars(const char *srcfile, const char *destfile) {
    FILE *fpin;  // tracking position in the input file
    FILE *fpout; // tracking position in the output file
    // attempt to open input file for reading
    fpin = fopen(srcfile, "r");
    if (fpin == NULL) { // opening input file failed
	// print an error message and return false
	printf("Could not open %s\n", srcfile);
	return false;
    }
    // attempt to open destfile for writing
    fpout = fopen(destfile, "w");
    if (fpout == NULL) { // opening destfile failed
	// print an error message
	printf("Could not open %s\n", destfile);
	// close the input file
	fclose(fpin);
	// return false
	return false;
    }
    // both opens were successful - begin copy process
    // c represents the current character in the input file
    char c;
    // while the current character does not equal EOF
    while ((c = getc(fpin)) != EOF) {
	// copy character to output
	fputc(c, fpout);
    }
    // close input and output files
    fclose(fpin);
    fclose(fpout);
    return true;
}
