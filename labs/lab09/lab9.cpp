/*
 * Joshua Tate
 * Lab 9 Exercise
 *
 * This program allows users to enter data for a collection of dog tags,
 *  in which they provide an id, phone number, and year for each dog tag.
 *
 * The user can specify the number of dog tags they want to store.
 *
 * The program then displays the collected dog tag information.
 */
#include <cstdio>

// Minimum/Maximum number of tags supported
const long MinTags = 1;
const long MaxTags = 20;

// Minimum/Maximum tag ids
const long MinTagID = 1000;
const long MaxTagID = 9999;

// Minimum/Maximum phone digits
const long MinPhoneDigits = 1000000000;
const long MaxPhoneDigits = 9999999999;

// Minimum/Maximum years
const long MinYear = 1900;
const long MaxYear = 2100;

// DogTag struct represents information associated with a dog tag.
struct DogTag {
    long id, phone, year;
};

// welcome() explains the use and purpose of the program
void welcome();

// getLong(const char *prompt, long min, long max) repeatedly prompts
//  the user with the given prompt for a number in the range min..max
//  and returns the number the user enters
long getLong(const char *prompt, long min, long max);

// tagEnter(DogTag &dt) takes a DogTag structure as a parameter and
//  displays the information it contains.
void tagEntry(DogTag &dt);

// tagDisplay(DogTag dt) takes a DogTag and displays the information
//  associated with the given DogTag.
void tagDisplay(DogTag dt);

// fillTags(DogTag tags[], long size) takes an array of DogTag's as one
//  parameter, and the size of the array as a second parameter, and
//  calls tagEntry on each element to fill the array.
void fillTags(DogTag tags[], long size);

// showTags(DogTag tags[], long size) takes an array of DogTag's as one
//  parameter, and the size of the array as a second parameter, and calls
//  fillEntry on each element of the array to display tag information.
void showTags(DogTag tags[], long size);

int main() {
    // Display welcome message to user
    welcome();

    // Create tags array to hold an array of DogTag's of size MaxTags
    DogTag tags[MaxTags];

    // Prompt the user to select how many tags will be processed.
    // Store the number of tags in numTags
    // p holds the prompt for getLong function
    const char *p = "Please specify the number of tags you intend to store";
    long numTags = getLong(p, MinTags, MaxTags);

    // Obtain data for the dog tags.
    fillTags(tags, numTags);

    // display the data for the dog tags.
    showTags(tags, numTags);

    return 0;
}

void welcome() {
    // Display welcome message and explain program purpose
    printf("Welcome to TagRecorder\n\n");
    printf("This program allows you to enter data for a collection of\n"
	   "dog tags, providing an id, phone number, and year for each.\n");
    printf("\n");
}

long getLong(const char *prompt, long min, long max) {
    long num;     // user entered number
    int scanfVal; // value returned by scanf
    bool inRange; // boolean to determine if num is in proper range

    // repeatedly prompt user until they enter a number in proper range
    do {
	// display prompt
	printf("%s (%ld-%ld): ", prompt, min, max);
	// get number from user
	scanfVal = scanf("%ld", &num);
	// check if a number was entered
	if (scanfVal != 1) {
	    // tell user that was not a number
	    printf("\nNot a number, try again.\n\n");
	    // clear the input buffer of bad input
	    scanf("%*s");
	} else {
	    // check if number is in proper range, store in inRange
	    inRange = ((num >= min) && (num <= max));
	    if (!inRange) {
		// if number not in range, tell user to try again
		printf("\n%ld is not in range %ld to %ld, try again.\n\n",
		       num, min, max);
	    }
	}
    } while (scanfVal != 1 || !inRange);

    // return user entered number
    return num;
}

void tagEntry(DogTag &dt) {
    // get id and store in dt struct
    dt.id = getLong("Please enter a positive integer id for the tag",
		    MinTagID, MaxTagID);
    // get phone number and store it in dt struct
    dt.phone = getLong("Please enter the phone number, digits only",
		       MinPhoneDigits, MaxPhoneDigits);
    // get year and store it in dt struct
    dt.year = getLong("Please enter the year as an integer",
		      MinYear, MaxYear);
}

void tagDisplay(DogTag dt) {
    // display tag information
    printf("ID %ld, Phone %ld, Year %ld\n", dt.id, dt.phone, dt.year);
}

void fillTags(DogTag tags[], long size) {
    // create dog tag struct to copy into array
    DogTag dt;
    // get dog tag information for size number of dog tags
    for (long i = 0; i < size; i++) {
	printf("\nProcessing tag %ld\n", i+1);
	tags[i] = dt;
	tagEntry(tags[i]);
    }
}

void showTags(DogTag tags[], long size) {
    // display dog tag information for size number of dog tags
    printf("\nThe supplied tag information is:\n");
    for (long i = 0; i < size; i++)
	tagDisplay(tags[i]);
}
