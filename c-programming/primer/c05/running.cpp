// running.c -- A useful program for runners
#include <cstdio>

const int S_PER_M = 60;         // Seconds in a minute
const int S_PER_H = 3600;       // Seconds in an hour
const double M_PER_K = 0.62137; // Miles in a kilometer

int main() {
    double distk, distm; // distance run in km and in miles
    double rate;         // average speed in mph
    int min, sec;        // minutes and seconds of running time
    int time;            // running time in seconds only
    double mtime;        // time in seconds for one mile
    int mmin, msec;      // minutes and seconds for one mile

    printf("This program converts your time for a metric race\n");
    printf("to a time for running a mile and to your average\n");
    printf("speed in miles per hour.\n");
    printf("Please enter, in kilometers, the distance run.\n");
    scanf("%lf", &distk); // %lf for double
    printf("Next enter the time in minutes and seconds.\n");
    printf("Begin by entering the minutes.\n");
    scanf("%d", &min);
    printf("Now enter the seconds.\n");
    scanf("%d", &sec);
    // converts time to pure seconds
    time = S_PER_M * min + sec;
    // converts kilometers to miles
    distm = M_PER_K * distk;
    // miles per sec x sec per hour = mph
    rate = distm / time * S_PER_H;
    // time/distance = time per mile
    mtime = (double) time / distm;
    // find whole minutes
    mmin = (int) mtime / S_PER_M;
    // find remaining seconds
    msec = (int) mtime % S_PER_M;
    printf("You ran %1.2f km (%1.2f miles) in %d min, %d sec.\n",
	   distk, distm, min, sec);
    printf("That pace corresponds to running a mile in %d min, ",
	   mmin);
    printf("%d sec.\nYour average speed was %1.2f mph.\n",
	   msec, rate);

    return 0;
}
