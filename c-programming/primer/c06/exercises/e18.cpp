/*
 * Professor Rabnud joined a social media group. Initially he had 5 friends.
 * He noticed that his friend count grew in the following fashion:
 * The first week one friend dropped out and the remaining number of
 *  friends doubled. The second week two friends dropped out and the
 *  remaining number of friends doubled.
 *
 * In general, in the Nth week, N friends dropped out and the remaining
 *  number doubled.
 *
 * Write a program that computes and displays the number of friends
 *  each week.
 *
 * The program should continue until the count exceeds Dunbar's number.
 * Dunbar's number is a rough estimate of the maximum size of a cohesive
 *  social group in which each member knows every other member and how
 *  they relate to one another. Its approximate value is 150.
 */
#include <cstdio>

const int FIRST_FRIENDS = 5;
const int DUNBAR = 150;

int main() {
    int friends = FIRST_FRIENDS;
    int week;
    for (week = 1; friends <= DUNBAR; week++) {
	friends -= week;
	friends *= 2;
	printf("After week %d: %3d\n", week, friends);
    }
    week--;
    printf("\nIt took ~%d weeks for Professor Rabnud's social media "
	   "group to exceed Dunbar's number (approx. 150).\n", week);

    return 0;
}
